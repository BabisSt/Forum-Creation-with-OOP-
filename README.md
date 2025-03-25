# Forum-Creation-with-OOP

Creates and manages a forum with posts  
Can see options below  

## Instructions for compiling the program:
```
g++ -c classes.cpp
g++ -c main.cpp
g++ -o exe main.o classes.o
./exe
```

As the program runs, it waits for the user to choose between options 0-7, which are explained below.
- What is included in `classes.h`:

This file contains all the class definitions with their structural elements and the functions.

Specifically:
- Constructors and Destructors for Forum, Thread, Post, Date.
- Structural members for the above classes.
- Set and Get functions for the above classes.

- What is included in `classes.cpp`:

This file contains the implementations of the functions from `classes.h`.

- What is included in `main.cpp`:

This file contains the main program.
There is a large switch statement that asks the user for options and terminates with the appropriate selection.

Specifically:
- What the program can do:
  The program consists of a switch with 8 options.

  1. Create rules and useful information
  2. Create a thread
  3. Create a post
  4. Print forum
  5. Pick thread with title
  6. Pick post with id
  7. Pick 5 random posts and print them
  0 to exit

  Initially, constructors are called for default values and for the forum with the title "ΑΝΤΙΚΕΙΜΕΝΟΣΤΡΑΦΗΣ ΠΡΟΓΡΑΜΜΑΤΙΣΜΟΣ".
  After that, you can make one of the above selections.

  Of these, options 1, 2, 3, 4, 5, 6, 7, and 0 work correctly.
  In option 1, a thread is created with the corresponding title.
  In option 2, a thread is created with a title and creator randomly selected from arrays with random titles and creators. A random creation date is also selected.
  In option 3, a post is created in the same way as the thread, with an additional id attribute.
  In option 4, the array with the thread titles is printed.
  In option 5, a thread is selected (waiting for the user to type the exact title they want; otherwise, nothing is displayed). If the thread exists, the title, creator, and date are printed, otherwise, nothing happens.
  In option 6, a post is selected via its id, and the array containing its attributes is printed.
  In option 7, 5 random posts are selected and printed, IF they exist.
  In option 0, destructors are called, and the program terminates.

- What the program cannot do:

I am not sure why destructors are called every time I call a constructor within one of the creation options. Therefore, I did not include constructors in the respective places.
I was not entirely sure whether the printouts were supposed to be done via functions or not. I have done them via `main()`, but I know how to implement the corresponding functions; I created the exercise this way.
