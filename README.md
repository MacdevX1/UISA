Uninformed Search Algorithms in C

Introduction

Uninformed search algorithms are search techniques that explore the problem space without using any heuristic information. They only use the information available in the problem definition to find the goal node.

This program implements the following uninformed search algorithms:
	•	Breadth First Search (BFS)
	•	Depth First Search (DFS)
	•	Depth Limited Search (DLS)
	•	Iterative Deepening Search (IDS)

The program uses an adjacency matrix to represent the graph and allows the user to choose the algorithm using a menu.

⸻

Algorithms Implemented

1. Breadth First Search (BFS)

Breadth First Search explores the graph level by level. It uses a queue (FIFO) data structure to visit nodes in the order they are discovered.

Steps:
	1.	Start from the initial node.
	2.	Mark the node as visited.
	3.	Add its adjacent nodes to the queue.
	4.	Repeat until all reachable nodes are visited.

⸻

2. Depth First Search (DFS)

Depth First Search explores as far as possible along a branch before backtracking. It uses recursion or a stack to traverse nodes.

Steps:
	1.	Start from the initial node.
	2.	Visit the node and mark it as visited.
	3.	Recursively visit the adjacent unvisited nodes.

⸻

3. Depth Limited Search (DLS)

Depth Limited Search is a variation of DFS where a maximum depth limit is specified. The search stops when the depth limit is reached.

Steps:
	1.	Start from the root node.
	2.	Explore nodes using DFS.
	3.	Stop searching when the specified depth limit is reached.

⸻

4. Iterative Deepening Search (IDS)

Iterative Deepening Search combines the advantages of BFS and DFS. It repeatedly performs Depth Limited Search with increasing depth limits.

Steps:
	1.	Start with depth limit 0.
	2.	Perform Depth Limited Search.
	3.	Increase the depth limit and repeat the search until the goal is found.

⸻

Data Structures Used
	•	Adjacency Matrix for graph representation
	•	Queue for BFS
	•	Recursion for DFS and DLS
	•	Loop with increasing depth for IDS

⸻

How to Compile and Run

Compile the program:
gcc UISA.c

Run the program:
./a.out

⸻

Conclusion

Uninformed search algorithms are fundamental techniques in Artificial Intelligence used for exploring state spaces without heuristic guidance. Each algorithm has different characteristics in terms of memory usage, completeness, and efficiency.
