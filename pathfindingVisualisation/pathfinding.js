// pathfinding.js

function dijkstra(grid, startX, startY, endX, endY) {
    const n = grid.length;
    const m = grid[0].length;
    const dist = new Array(n).fill().map(() => new Array(m).fill(Infinity));
    const prev = new Array(n).fill().map(() => new Array(m).fill(null));
    const pq = [{ x: startX, y: startY, cost: 0 }];
    const directions = [[1, 0], [-1, 0], [0, 1], [0, -1]];

    dist[startX][startY] = 0;

    while (pq.length > 0) {
        pq.sort((a, b) => a.cost - b.cost);
        const { x, y, cost } = pq.shift();

        if (x === endX && y === endY) {
            break;
        }

        for (const [dx, dy] of directions) {
            const nx = x + dx;
            const ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] === 0) {
                const newCost = cost + 1;
                if (newCost < dist[nx][ny]) {
                    dist[nx][ny] = newCost;
                    prev[nx][ny] = { x, y };
                    pq.push({ x: nx, y: ny, cost: newCost });
                }
            }
        }
    }

    const path = [];
    for (let x = endX, y = endY; x !== null && y !== null;) {
        path.push([x, y]);
        ({ x, y } = prev[x][y]);
    }
    return path.reverse();
}
