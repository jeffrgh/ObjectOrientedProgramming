def checkPoints(edges):
    adj = {}
    for edge in edges:
        u, v = edge
        if u not in adj:
            adj[u] = []
        if v not in adj:
            adj[v] = []
        adj[u].append(v)
        adj[v].append(u)

    return adj


print(
    checkPoints(
        [
            ["a", "b"],
            ["a", "c"],
            ["b", "c"],
            ["c", "d"],
            ["c", "f"],
            ["d", "e"],
            ["e", "f"],
        ]
    )
)
