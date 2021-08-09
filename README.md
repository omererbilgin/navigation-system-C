# navigation-system-C
You can use this code for your programs working with CLI where you have to get an input from the user

# Usage

Best to combine with your existing program to call functions
For example: 
$ `gcc program.c ops.c -o somebinary`

In the ops.c file you will have to declare what the `clear()` function is going to do. My preference would be `system("clear")` 
or `system("cls")` depending on the operating system. Additionally, the ops function could be used for the preference of how the `clear()`
is going to act.

# Support

For you who have checked out whats going on the function's firt part, I have tried to make the parantheses look better by aligning them vertically
So it would be like this: 
        `
        long option []
        option      []
        `
Instead of:
        `
        long option []
        option []
        `
The strcat function cannot expand a string defined as char* it has to be a real array like char[] it leads to a segmentation fault
nevertheless, using an array of chars doesnt make sense since we declare the size before and adding spaces, thus, the `strcat()` fu becomes useless

I would appreciate every contribution thanks 
