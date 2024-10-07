from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time
import random

# User credentials
username = 'your_username'
password = 'your_password'

# Set up the WebDriver (make sure the path is correct)
driver = webdriver.Chrome(executable_path='/path/to/chromedriver')

def login(username, password):
    driver.get('https://www.instagram.com/accounts/login/')
    WebDriverWait(driver, 10).until(
        EC.presence_of_element_located((By.NAME, 'username'))
    )

    # Enter username
    user_input = driver.find_element(By.NAME, 'username')
    user_input.send_keys(username)

    # Enter password
    password_input = driver.find_element(By.NAME, 'password')
    password_input.send_keys(password)
    password_input.send_keys(Keys.RETURN)

    # Wait for login to complete
    WebDriverWait(driver, 10).until(
        EC.presence_of_element_located((By.XPATH, '//a[contains(@href, "/liked_by/")]'))
    )

def unlike_all_posts():
    driver.get('https://www.instagram.com/{}/saved/'.format(username))
    WebDriverWait(driver, 10).until(
        EC.presence_of_element_located((By.XPATH, '//article'))
    )

    while True:
        posts = driver.find_elements(By.XPATH, '//button[@aria-label="Unlike"]')
        if not posts:
            break

        for post in posts:
            post.click()
            time.sleep(random.uniform(1, 3))  # Random delay between 1 to 3 seconds

        # Scroll down to load more posts
        driver.execute_script('window.scrollTo(0, document.body.scrollHeight);')
        time.sleep(2)  # Wait for posts to load

# Main function to execute the script
if __name__ == '__main__':
    try:
        login(username, password)
        unlike_all_posts()
    finally:
        driver.quit()
