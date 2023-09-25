0x13-more_singly_linked_lists

0. A function that prints all the elements of a listint_t list. (Print list)

	* Prototype: size_t print_listint(const listint_t *h);
	* Return: the number of nodes
	* Allowed to use printf.

1. A function that returns the number of elements in a linked list_t list. (list length)

	*Prototype: size_t listint_len(const listint_t *h);

2.  A function that adds a new node at the beginning of a listint_t list. (Add node)

	* Protoype: listint_t *add_nodeint(listint_t **head, const int n);
	* Return: the address of the new element, or NULL if failed


3. A function that adds a new node at the end of a listint_t list. (Add node at the end)

	* Prototype:  listint_t *add_nodeint_end(listint_t **head, const int n);
	* Return: the address of the new element, or NULL if it failed


4. A function that frees a listint_t list. (Free list)

	* Prototype: void free_listint(listint_t *head);


5. A function that frees a listint_t list. (Free)

	* Prototype: void free_listint2(listint_t **head);
	* The function sets the head to NULL


6. A function that deletes the head node of a listint_t linked list, and returns the head node's data (n). (Pop)

	* Prototype: int pop_listint(listint_t **head);
	*if the linked list is empty return 0


7.  A function that returns the nth node of a listint_t linked list. (Get node at index)

	* Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
	* where index is the index of the node, straing at 0
	* if the node does not exist, return NULL


8. A function the returns the sum of all the data (n) of a listint_t linked list. (Sum list)

	* Prototype: int sum_listint(listint_t *head);
	* if the list is empty, return 0


9. A function that inserts a new nde at a given position. (Insert)

	* Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
	* where idx is the index of the list where the new node should be added. Index starts at 0
	* Returns: the address of the new node, or NULL if it failed
	* if it is not possible to add the new node at index idx, do not add the new node and return NULL



10. A function that deletes the node at index _index_ of a listint)t linked list. (Delete at index)

	* Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
	* where index is the index of the node that should be deleted. Index starts at 0
	* Returns: 1 if it succeede, -1 if it failed



11. A function that reverses a listintt linked list. (Reverse list)

	* Prototype: listint_t *reverse_listint(listint_t **head);
	* Returns: a pointer to the first node of the reversed list.
	* Not allowed to use nore than 1 loop
	* Not allowed to use malloc, free or arrays
	* Can only declare a maximum of two variables in the function



12. A function that prints a listint_t linked list. (Prints(safe version))

	* Prototype: size_t print_listint_safe(const listint_t *head);
	* Returns: the number of nodes in the list
	* This function can print lists with a loop
	* Should go through the list only once
	* If function fails, exit the program with status 98


13. A function that frees a listint_t list. (Free(safe version)).

	* Prototype: size_t free_listint_safe(listint_t **h);
	* Can free lists with a loop
	* Should go through the list only once
	* Returns: the size of the list that was free'd
	* Sets the head to NULL


14. A function that finds the loop in a linked list. (Find the loop)

	* Prototype: listint_t *find_listint_loop(listint_t *head);
	* Returns: The address of the node where the loop starts, or NULL if there is no loop
	* Not allowed to use malloc, free or arrays
	* Can only declare a maximum of two variabled in function

