0x14. C - Bit manipulation

0. A function that converts a binary number to an unsigned int (0)

	* Prototype: unsigned int binary_to_uint(const char *b);
	* where b is pointing to a string of 0 and 1 chars
	* Return: the converted number, or 0 if
		* there is oe or more chars in the string b that is not 0 or 1
		* b is NULL

1. A functin that prints the binary representation of a number (1)

	* Prototype: void print_binary(unsigned long int n);
	* Not allowed to use arrays
	* Not allowed to use malloc 
	* Not allowed to use the % ot / operators


2. A function that returns the value of a bit at a given index (10)

	* Prototype: int get_bit(unsigned long int n, unsigned int index);
	* where index is the index, starting form 0 of the bit you want to get
	* Returns: the value of the bit at index or -1 of an error occured


3. A function that sets the valuse of a bit to 1 at a given index (11)

	* Protype: int set_bit(unsigned long int *n, unsigned int index);
	* where index is the index, starting form 0 of the bit you want to set
	* Returns: 1 if it worked, or -1 if an error occured



4. A function that sets tha value of a bit to 0 at a given index

	* Prototype: int clear_bit(unsigned long int *n, unsigned int index);
	* where index is the index, starting from 0 of the bit you want to set
	* Returns: 1 if it worked, or -1 of an error occured


5. A function that returns the number of bits you would need to flip to gwt from one number to another (101)

	* Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
	* Not allowed to use % or / operators 


6. A function that checks the endianness (Endianness) 

	* Prototype: int get_endianness(void);
	* Returns: 0 if big endian, 1 if little endian


7. Find the password for the crackme3 program (Crackme3)

	* Save the password in the file 101-password
	* Should contain the exact password, no new line, no extra space
