# Simple Linked List in C/C++

## Overview

A **Linked List** is a linear data structure where elements, called **nodes**, are connected using pointers. Each node contains two parts:

1. **Data**: The actual value stored in the node.
2. **Link**: A pointer to the next node in the list.

Unlike arrays, linked lists do **not** require contiguous memory locations. This allows dynamic memory allocation and efficient insertion or deletion of elements.



## Features

* Dynamic size.
* Efficient insertion and deletion.
* Nodes are connected via pointers.



## Practice Problem

### Objective:

Take nodes from the user and print the linked list in order based on the links.

### Input Format:

```
Total Nodes : 5
Data        : 5 8 3 6 4
Link        : 4 -1 0 2 1
Start Link  : 3
```

**Note:**

* `-1` in the Link array represents `NULL` (end of the list).
* `Start Link` indicates the index of the first node in the linked list.

### Expected Output:

```
Node 1  :   Data [6]    Link [2]
Node 2  :   Data [3]    Link [0]
Node 3  :   Data [5]    Link [4]
Node 4  :   Data [4]    Link [1]
Node 5  :   Data [8]    Link [-1]
```



## How It Works

1. Read the total number of nodes.
2. Take data and link for each node from the user.
3. Start printing from the node indicated by `Start Link`.
4. Follow the link array to traverse all nodes until `-1` is reached.



## Example

Suppose the input is:

```
Total Nodes : 5
Data        : 5 8 3 6 4
Link        : 4 -1 0 2 1
Start Link  : 3
```

* Start at node index 3 → Data = 6 → Link = 2
* Next node index 2 → Data = 3 → Link = 0
* Next node index 0 → Data = 5 → Link = 4
* Next node index 4 → Data = 4 → Link = 1
* Next node index 1 → Data = 8 → Link = -1 → End



## Notes

* This implementation simulates a linked list using arrays for simplicity.
* In real linked lists, `Link` is a pointer to the next node, not an array index.

---

### [Code / Solution Of The Problem](https://github.com/rudrakaiser/DSA/blob/main/02_Data_Structures/LinkedList/Making_Linked_List/a_simple_linked_list.cpp)
### [Explanation Of The Code / Logic](https://github.com/rudrakaiser/DSA/blob/main/02_Data_Structures/LinkedList/Making_Linked_List/logical_explanation.md)