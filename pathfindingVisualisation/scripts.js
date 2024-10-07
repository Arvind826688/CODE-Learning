// scripts.js

let map; // Global variable to hold Google Map object

document.getElementById('run').addEventListener('click', runAlgorithm);

function runAlgorithm() {
    const mode = document.getElementById('mode').value;
    const algorithm = document.getElementById('algorithm').value;

    if (mode === 'grid') {
        const gridSize = parseInt(document.getElementById('grid-size').value);
        const grid = createGrid(gridSize);
        visualizeGrid(grid);

        if (algorithm === 'dijkstra') {
            const path = dijkstra(grid, 0, 0, gridSize - 1, gridSize - 1);
            visualizePath(path);
        }
        // Implement other grid-based algorithms similarly
    } else if (mode === 'realMap') {
        const mapArea = document.getElementById('map-area').value;
        geocodeLocation(mapArea, (location) => {
            if (!location) {
                alert('Invalid location. Please enter a valid address or place.');
                return;
            }
            const { lat, lng } = location.geometry.location;
            map.setCenter({ lat, lng });
            map.setZoom(15);

            if (algorithm === 'a_star') {
                // Perform A* algorithm on the selected map location
                alert(`Running A* algorithm on location: ${location.formatted_address}`);
            } else if (algorithm === 'bfs') {
                // Perform Breadth-First Search algorithm
                alert(`Running BFS algorithm on location: ${location.formatted_address}`);
            }
            // Implement other map-based algorithms similarly
        });
    }
}

function geocodeLocation(location, callback) {
    const geocoder = new google.maps.Geocoder();
    geocoder.geocode({ address: location }, (results, status) => {
        if (status === google.maps.GeocoderStatus.OK && results.length > 0) {
            callback(results[0]);
        } else {
            callback(null);
        }
    });
}

function visualizeGrid(grid) {
    const container = document.getElementById('visualization');
    container.innerHTML = ''; // Clear previous visualization

    for (let i = 0; i < grid.length; i++) {
        for (let j = 0; j < grid[0].length; j++) {
            const cell = document.createElement('div');
            cell.style.width = '20px';
            cell.style.height = '20px';
            cell.style.display = 'inline-block';
            cell.style.border = '1px solid #ccc';
            cell.style.backgroundColor = grid[i][j] === 1 ? '#000' : '#fff';
            container.appendChild(cell);
        }
    }
}

function visualizePath(path) {
    const container = document.getElementById('visualization');
    path.forEach(([x, y]) => {
        const index = x * path.length + y;
        container.children[index].style.backgroundColor = 'yellow';
    });
}

function createGrid(size) {
    return new Array(size).fill().map(() => new Array(size).fill(0));
}

function initMap() {
    map = new google.maps.Map(document.getElementById('map'), {
        center: { lat: 0, lng: 0 },
        zoom: 2
    });
}
