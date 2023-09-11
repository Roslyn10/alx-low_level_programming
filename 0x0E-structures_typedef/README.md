0x0E-structures_typedef

0. Define a new type struct dog with the following elements: (Poppy)
	* name, type = char *
	* age, type = float
	* owner, type = char *

1. A function that initialize a variable of type struct dog ( A dog is the only thing on earth that loves you more than you love yourself)
	* Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

2. A function that prints a struct dog (A dog will teach you unconditional love. If you can have that in your life, things won't be too bad)
	* Prototype: void print_dog(struct dog *d);
	* If  an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
	* If d is NULL print nothing.

3. Define a new type dog_t as a new name for the type struct dog. (Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read)

4. Write a function that creates a new dog. (A door is what a dog is perpetually on the wrong side of)
	* Prototype: dog_t *new_dog(char *name, float age, char *owner);
	* You have to store a copy of name and owner
	* Return NULL if the function fails

5. Write a function that frees dogs. (How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg)
	* Prototype: void free_dog(dog_t *d);
