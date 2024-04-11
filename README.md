# Brainfuck-interpreter
Interpreter for the Brainfuck programming language in C.

The implementation of a brainfuck interpreter starts off by checking whether if the user has entered a different name than the original for the file from the command line. 
After this the program checks whether the source file has the brainfuck file extnetion .bf. If not, the program adds it to the file name. The program also checks whether the file has an already existing extension (which it removes).
Then the program goes throught the source file line by line and assigns each line of bainfuck code to a node in a C stuct that also will later contain the corresponding C code. 
After creating the struct for each line of the original code the program calls a function that goes through the entire linked list and translates the brainfuck code in each node and adds the translated code into the same node. Then the program simply iterates throught the linked list and writes the C code of each node into a separate C file, which it then compiles and runs. 