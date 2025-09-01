# Linked List Simulation Using Arrays (C++)

## Overview

This program simulates a **Linked List** using arrays. Instead of dynamic memory and pointers, we use two arrays:

1. `Data[]` — stores the value of each node
2. `Link[]` — stores the index of the next node

The list traversal starts from a **Start Link** index and follows the `Link[]` array until `-1` (end of the list) is reached.


## How the Code Works

### Step 1: Input Nodes

* The user inputs the total number of nodes (`totalNodes`).
* The user enters the **data** of each node into `Data[]`.
* The user enters the **link/index** of the next node into `Link[]`.
* A `Start Link` is provided, which points to the first node in the linked list.

```cpp
int totalNodes;
cin >> totalNodes;

int Data [MAX], Link [MAX];

for (int i = 0; i < totalNodes; i++)
    cin >> Data[i];

for (int i = 0; i < totalNodes; i++)
    cin >> Link[i];

int start;
cin >> start;
```

### Step 2: Traverse and Print

* Start from the index `start`.
* Print `Data[start]` and `Link[start]`.
* Move to the next node using `start = Link[start]`.
* Continue until `start == -1` (end of the list).

```cpp
int nodeCount = 1;
while (start != -1) {
    cout << "Node " << nodeCount++ << "  :  Data [" << Data[start] << "]   Link [" << Link[start] << "]" << endl;
    start = Link[start];
}
```

### Step 3: Input and Output

The output prints all nodes in the order of the linked list traversal.

**Example Input:**

```
Total Nodes : 5
Data        : 5 8 3 6 4
Link        : 4 -1 0 2 1
Start Link  : 3
```

**Input:**

```
Data        : 5   8   3   6   4
Link        : 4  -1   0   2   1
Start Link  : 3
```

**Traversal:**

```
++     ++     ++     ++     ++
| Data=6  | --> | Data=3  | --> | Data=5  | --> | Data=4  | --> | Data=8  |
| Link=2  |     | Link=0  |     | Link=4  |     | Link=1  |     | Link=-1 |
++     ++     ++     ++     ++
   Node1           Node2           Node3           Node4           Node5
       ^                                                     
       | Start Link = 3                                      
```

**Explanation:**

1. Start at `Node1` (index 3, Data=6, Link=2)
2. Move to `Node2` (index 2, Data=3, Link=0)
3. Move to `Node3` (index 0, Data=5, Link=4)
4. Move to `Node4` (index 4, Data=4, Link=1)
5. Move to `Node5` (index 1, Data=8, Link=-1 → End)

**Output:**

```
Node 1  :  Data [6]   Link [2]
Node 2  :  Data [3]   Link [0]
Node 3  :  Data [5]   Link [4]
Node 4  :  Data [4]   Link [1]
Node 5  :  Data [8]   Link [-1]
```



## Notes

* `-1` in `Link[]` denotes the **end of the linked list**.
* This is a **simulation** of a linked list using arrays; real linked lists use pointers for `next` nodes.
* Using `MAX` ensures the arrays are large enough, but for dynamic and safer memory handling, `vector` is recommended in modern C++.