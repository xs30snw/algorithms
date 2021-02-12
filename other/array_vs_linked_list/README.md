# Array vs Linked list

Arrays and Linked lists have different time complexities for operations.

|           | Array | Linked List   |
| --------- | ----- | ------------- |
| Reading   | O(1)  | O(n)          |
| Insertion | O(n)  | O(1)          |
| Deletion  | O(n)  | O(1)          |

### Advantages of Arrays:
- Constant-time random access;
- Space efficiency, no space is wasted with links;
- Memory locality.

### Advantages of Linked lists:
- No overflow;
- Insertion and deletion are simpler;
- Moving pointers is easier than moving the items themselves.
### Types of Linked lists
- In **Singly linked list** the first element points to the second, the second to the third, and so on.
- In **Doubly linked list** not only does the first element points to the second, but the second also points to the first.
- In **Circular Linked List** the first element is linked with the last.

### Dynamic arrays
- Whereas **static arrays** require their length at compile time, **dynamic arrays** can be defined at allocation time. One way to resize an array is to define another dynamic arrays with a different length and copy necessary data from the first to the second;
- Most insertions will be fast, except for those relatively few insertions that trigger array resizing.

TODO
- [ ] Doubly Linked List;
- [ ] Insertion into and Deletion from a linked list;
- [ ] Dynamic array;
- [ ] Vector. 