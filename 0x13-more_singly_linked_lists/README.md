# C - More singly linked lists

## Tasks :

* **0. Print list**
  * [0-print_listint.c](./0-print_listint.c): C function that prints all the elements
  of a `listint_t` linked list.
    * Returns the number of nodes in the `listint_t` list.

* **1. List length**
  * [1-listint_len.c](./1-listint_len.c): C function that returns the number
  of elements in a `listint_t` linked list.

* **2. Add node**
  * [2-add_nodeint.c](./2-add_nodeint.c): C function that adds a new node at
  the beginning of a `listint_t` linked list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **3. Add node at the end**
  * [3-add_nodeint_end.c](./3-add_nodeint_end.c): C function that adds a new node
  at the end of a `listint_t` linked list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **4. Free list**
  * [4-free_listint.c](./4-free_listint.c): C function that frees a `listint_t`
  linked list.

* **5. Free**
  * [5-free_listint2.c](./5-free_listint2.c): C function that frees a
  `listint_t` linked list.
    * Sets the `head` to `NULL`.

* **6. Pop**
  * [6-pop_listint.c](./6-pop_listint.c): C function that deletes the head node of
  a `listint_t` linked list.
    * If the linked list is empty - returns `0`.
    * Otherwise - returns the head node's data (`n`).

* **7. Get node at index**
  * [7-get_nodeint.c](./7-get_nodeint.c): C function that locates a given node
  of a `listint_t` linked list.
    * If the node does not exist - returns `NULL`.
    * Otherwise - returns the located node.

* **8. Sum list**
  * [8-sum_listint.c](./8-sum_listint.c): C function that returns the sum of all
  the data (`n`) of a `listint_t` linked list.
    * If the linked list is empty - returns `0`.
    * Otherwise - returns the sum of all the data (`n`).

* **9. Insert**
  * [9-insert_nodeint.c](./9-insert_nodeint.c): C function that inserts a new node to
  a `listint_t` linked list at a given position.
    * If it is not possible to add the new node at index `idx`, or the function
    fails - returns `NULL`.
    * Otherwise - returns the address of the new node.

* **10. Delete at index**
  * [10-delete_nodeint.c](./10-delete_nodeint.c): C function that deletes the node at a
  given index of a `listint_t` linked list.
    * If the function succeeds - returns `1`.
    * If the function fails - returns `-1`.

