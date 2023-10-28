this is a readme file for argc and argv.
in this project we covered:
1. How to use arguments passed to your program
2. What are two prototypes of main that you know of, and in which case do you use one or the other
	the two arguments are argc (argument count) and argv (argument vector)	
3. How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters	

	There are a few ways to suppress these warnings, depending on the compiler you're using:

Use the variable in a dummy statement: This is a simple way to prevent the warning. You can add a dummy statement in your code that uses the variable. For example, if you have an unused variable int a;, you can add a statement like a += 0; to use the variable and avoid the warning.
Use casting to void: Another common technique is to cast the unused variable to void. This tells the compiler that you're intentionally not using the variable. For example, (void) a;.
Use compiler-specific options or attributes: Some compilers offer specific options or attributes to suppress unused variable warnings. For example, in GCC, you can use the unused attribute to indicate that a variable is meant to be unused:

void function() {
    int a __attribute__((unused)) = 10;
    // rest of the code
}
