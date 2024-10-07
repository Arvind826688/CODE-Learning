#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm> // Include the algorithm library for remove_if

struct Contact {
    std::string name;
    std::string phone;
    std::string address;
    std::string email;
};

void addContact();
void displayContacts();
void searchContact();
void deleteContact();
void loadContacts();
void saveContact(const Contact& contact);

std::vector<Contact> contacts;

int main() {
    int choice;
    loadContacts();

    do {
        std::cout << "Address Book Application\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Display Contacts\n";
        std::cout << "3. Search Contact\n";
        std::cout << "4. Delete Contact\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
    return 0;
}

void addContact() {
    Contact contact;
    std::cin.ignore();
    std::cout << "Enter name: ";
    std::getline(std::cin, contact.name);
    std::cout << "Enter phone: ";
    std::getline(std::cin, contact.phone);
    std::cout << "Enter address: ";
    std::getline(std::cin, contact.address);
    std::cout << "Enter email: ";
    std::getline(std::cin, contact.email);

    saveContact(contact);
    contacts.push_back(contact);
}

void saveContact(const Contact& contact) {
    std::ofstream outFile("contacts.dat", std::ios::app | std::ios::binary);
    outFile.write(reinterpret_cast<const char*>(&contact), sizeof(Contact));
    outFile.close();
}

void displayContacts() {
    for (const auto& contact : contacts) {
        std::cout << "Name: " << contact.name << "\n";
        std::cout << "Phone: " << contact.phone << "\n";
        std::cout << "Address: " << contact.address << "\n";
        std::cout << "Email: " << contact.email << "\n";
        std::cout << "----------------------------------\n";
    }
}

void searchContact() {
    std::string searchName;
    std::cin.ignore();
    std::cout << "Enter name to search: ";
    std::getline(std::cin, searchName);

    bool found = false;
    for (const auto& contact : contacts) {
        if (contact.name == searchName) {
            std::cout << "Name: " << contact.name << "\n";
            std::cout << "Phone: " << contact.phone << "\n";
            std::cout << "Address: " << contact.address << "\n";
            std::cout << "Email: " << contact.email << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Contact not found.\n";
    }
}

void deleteContact() {
    std::string deleteName;
    std::cin.ignore();
    std::cout << "Enter name to delete: ";
    std::getline(std::cin, deleteName);

    auto newEnd = std::remove_if(contacts.begin(), contacts.end(),
                                 [&deleteName](const Contact& contact) { return contact.name == deleteName; });
    bool found = newEnd != contacts.end();
    contacts.erase(newEnd, contacts.end());

    if (found) {
        std::ofstream tempFile("temp.dat", std::ios::out | std::ios::binary);
        for (const auto& contact : contacts) {
            tempFile.write(reinterpret_cast<const char*>(&contact), sizeof(Contact));
        }
        tempFile.close();
        remove("contacts.dat");
        rename("temp.dat", "contacts.dat");
        std::cout << "Contact deleted successfully.\n";
    } else {
        std::cout << "Contact not found.\n";
    }
}

void loadContacts() {
    std::ifstream inFile("contacts.dat", std::ios::in | std::ios::binary);
    Contact contact;
    while (inFile.read(reinterpret_cast<char*>(&contact), sizeof(Contact))) {
        contacts.push_back(contact);
    }
    inFile.close();
}
