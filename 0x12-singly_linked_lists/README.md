0x12. C - Singly linked lists

0. A function that prints all elements of a list_t list (Print list)
	* Prototype: size_t print_list(const list_t *h);
	* Return: the number of nodes
	* If str is NULL, print [0] (nil)
Prototype: size_t print_list(const list_t *h);


1. A function that returns the number of elements in a linked list_t list  (List length)

	* Prototype: size_t list_len(const list_t *h);
	* Use custom function _putchar



2. A function that adds a new node at the begining of a list_t list

	* Prototype: list_t *add_node(list_t **head, const char *str);
	* Return: the address of the new element, or NULL if it failed
	* str need to be duplicated 
	* Allowed to use strdup



3. A function that added a new node at the end of a list_t list (Add node at the end)

	* Prototype: list_t *add_node_end(list_t **head, const char *str);
	* Return: the address of the new element, or NULL if it failed 
	* str needs to be duplicated
	* Allowed to use strdup



4. A function that frees a list_t list (Free lis)
	* Prototype: void free_list(list_t *head);
	* Use custom function _putchar

5. A function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed

	* Allowed to use printf


6. A 64-bit program in assembly that prints Hello, Holberton, followed by a new line (The Hare and the Tortoise)

	* Allowed to use printf function
	* Not allowed to use interrupts
	* Compile using nasm and gcc

