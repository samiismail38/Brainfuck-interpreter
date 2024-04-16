#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


// Check whether the file has .bf extension, if not remove a possible existing extension and add .bf extension.
// Rename the file if user enters a different name from command line.
// Build a struct where each node is one line of brainduck code. 
// Create a function that translates each node of brainduck code into correspoinding C code. 
// Handle edgecases, such as closing curly braces of loops.
// Write each line of translated brainfuck code into a separate C file. 
// Compile and run that C file.



typedef struct code_list{
    char *Brainfuck;
    char *C; 
    struct code_list *next;
}code_list;

int main(int argc, char *argv[]){
    char *filename;
    char default_name[]="test.bf";
    FILE *fp=fopen(filename,"r"); 
    //handle filenames and extensions


    code_list *head=calloc(1,sizeof(code_list));

    build_list();
    

    return 0; 
}



void build_list(code_list *head, FILE *fp){





}