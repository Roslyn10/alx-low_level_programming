0x1C-makefiles

0. make -f 0-Makefile

	Create your first Makefile.
	Requirements:
		* name of the executable: school
		* rules: all
			* The all rule builds your executable
		* variables: none

1. make -f 1-Makefile

	Requirements:
		* name of the executable: school
		* rules: all
			* The all rule builds your executable
		* variables: CC, SRC
			* CC: the compiler
			* SRC: the .c files

2. make -f 2-Makefile

	Create your first useful Makefile.
	Requirements:
		* name of the executable: school
		* rules: all
			* The all rule builds your executable
		* variables: CC, SRC, OBJ, NAME
			* CC: the compiler to be used
			* SRC: the .c files
			* OBJ: the .o files
			* NAME: the name of the executable
		* The all rule should recompile only the updated soure files
		* Not allowed to have a list of all the .o files

3. make -f 3-Makefile

	Requirements:
		* name of the executable: school
		* rules: al, clean, oclean, fclean, re
			* all: builds your executable
			* clean: deletes all Emacx and Vim temporary files along with the executable
			* oclean: deletes the object files
			* fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
			* re: forces recompilation of all source files
		* variables: CC, SRC, OBJ, NAME, RM
			* CC: the compiler to be used
			* SRC: the .c files
			* OBJ: the .o files
			* NAME: the name of the executable
			* RM: the program to delete files
		* The all rule should recompile only the updated source files
		* The clean, oclean, fclean, re rules should never fail
		* Not allowed to have a list of all the .o files

4. A complete Makefile

	Requirements:
		* name of the executable: school
		* rules: all, clea, fclea, oclea, re
			* all: builds your executable
			* clean: deletes all Emacs and Vim temporary files along with the executable
			* oclean: deletes all the object files
			* fclean: deleted all Emacs and Vim temporary files, the executable, and the object files
			* re: forces recompilation of all source files
		* variables: CC, SRC, OBJ, NAME, RM, CFLAGS
			* CC: the compiler to be used
			* SRC: the .c files
			* OBJ: the .o files
			* NAME: the name of the executable
			* RM: the program to delete files
			* CFLAGS: your favourite recompile only the updated source files
		* The all rule should recompile only the updated source files
		* The clean, oclean, fclean, re rules should never fail
		* Not allowed to have a list of all the .o files

5. Island Perimeter

	Technical interview preparation:
	Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
		* grid is a list of list of integers:	
			* 0 represents a water zone
			* 1 represets a land zone
			* One cell is a square with side length 1
			* Grid cells are connected horizontally/vertically (not diagonally)
			* Grid is rectangular, width and height don't exceed 100
		* Grid is completely surrounded by water, and there is one island (or nothing
		* The island doesn't have "lakes (water inside that isnt connected to the water around the island).

	Requirements:
		* First line contains: #!/usr/bin/python3
		* Not allowed to import any module
		* Module and function must be documented	
