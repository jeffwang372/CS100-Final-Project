 # Task Scheduler
 
 Authors: [Skyler Saltos](https://github.com/skycaliah), [Nina Huynh](https://github.com/nbhuynh), [Jeffrey Wang](https://github.com/jeffwang372)
 
 
## Project Description
 As college students, organization is crucial for academic success. Often it is important to have tools to help us organize our school work and activities. This is why we have    decided to develop a task scheduler for our CS100 project. We believe it will be a practical and beneficial tool that can be used daily.
 
The tools we will be using for this project include:
* [C++](https://www.cplusplus.com/) - A programming language
* [Valgrind](https://valgrind.org/) - Memory leak detector
* [CMake](https://cmake.org/) - Software for build automation, testing, packaging and installation of software

This project will take in user task information such as title, date, time, duration, location, and priority. The organizer will also prompt the user for a description for each task they enter. This project will output tasks/events that can be further grouped into lists of tasks/events. The tasks can be displayed and organized by priority, duration, or date. Tasks and task lists can also be removed when not needed anymore.

The design patterns we will be using are:

COMPOSITE
We chose this design pattern because we know that our project will involve aggregation. This means that the project can be implemented with a tree structure. We anticipate difficulty in implementing the list-task hierarchy, which the composite design pattern can solve because it allows us to treat individual objects and composition of objects uniformly. The recursive composition aspect of this design pattern will also allow us to more easily handle the list-task hierarchy when traversing, editing, or displaying components in a list.

STRATEGY
We chose this design pattern because it makes it easier to implement different variations of functions across the list and task classes. We anticipate that if we did not use the strategy pattern, it would be tedious and confusing to have to implement separate definitions everytime we wanted to make a variation of a function. By using the strategy pattern, we can implement different behaviors of the same function (such as print(), addMember(), etc) without having to edit as much code as you would otherwise. The inheritance factors out the common functionality of algorithms. This is a good solution because it eliminates redundancy, makes it more convenient to implement functions in the future, and makes it less confusing to develop.

 
 > ## Phase II
## Class Diagram
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/UMLFinalProject6.0.png)
 > 
 We implemented the List and Task object using the Composite pattern where the Lists and Tasks inherit from a abstract TaskTemplate class. The ListComposite class acts as root node of our tree for our composite pattern while all other nodes will be a Task object. The menu and listComposite classes each contain a pointer to the PrintStrat class which implements our print function. The PrintStrat class is implemented using the Strategy pattern for the print functions of the list and task objects. Print Functions outputting priority,date,and durations are implemented differently depending on whether it is a task or a list object. The Menu class stores a vector that stores all lists created by user and holds all functions to serve as the user interface to operate the program. 
 
 > ## Phase III
 Phase III completed on May 18, 2021.

 > ## Final deliverable
  
 ## Screenshots
 When starting the task scheduler, you will be greeted with this menu.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Main%20Menu.JPG)
 
 Choose from the different options listed on the main menu to use the task scheduler. 
 
 Entering "a" in the menu allows you to create a new list. The task scheduler will prompt you to enter the title of the new list. After this, the task scheduler will output the ID of the newly created list.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Creating%20List.JPG)
 
 Entering "b" in the menu allows you to remove a list. The task scheduler will prompt you to enter the ID of an existing list that you want to remove.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Remove%20List.JPG)
 
 Entering "c" in the menu allows you to create a new task. The task scheduler will prompt you to enter the ID of an existing list to add a task to. After this, the scheduler will prompt you for information (date, duration, location, etc.) for the task. When this is done, the ID of the newly created task is output.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Creating%20Task.JPG)
 
 Entering "d" in the menu allows you to delete a task. The task scheduler will prompt you for the list ID and task ID of the task you want to remove. The scheduler will then remove the task.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Remove%20Task.JPG)
 
 Entering "e" in the menu allows you to print out the lists and tasks in order of priority (meaning in the order that the tasks were created). The scheduler will ask if you want to display all lists. Entering "Y" displays all the lists by priority.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Print%20Priority%20All%20Lists.JPG)

Entering "N" prompts you to enter the ID of the list you want to print by priority.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Print%20Priority%20One%20List.JPG)
 
 Entering "f" in the menu allows you to print out the lists and tasks in order of date. The scheduler will ask if you want to display all lists. Entering "Y" displays all the lists by date.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Print%20Date%20All%20Lists.JPG)
 
 Entering "N" prompts you to enter the ID of the list you want to print by date.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Print%20Date%20One%20List.JPG)
 
 Entering "g" in the menu allows you to print out the lists and tasks in order of increasing duration. The scheduler will ask if you want to display all lists. Entering "Y" displays all the lists by increasing duration.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Print%20Duration%20All%20Lists.JPG)
 
 Entering "N" prompts you to enter the ID of the list you want to print by increasing duration.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Print%20Duration%20One%20List.JPG)

Entering "q" in the main menu exits the program.
 > ![alt text](https://github.com/cs100/final-project-ssalt006_jwang619_nhuyn035-nacl/blob/master/CS100%20Project%20Documentation/CS100%20Screenshot%20Quit.JPG)

Note: In all the steps above where the scheduler prompts the user for an ID, an "Invalid ID" error message will be output if an invalid ID is entered.

 ## Installation/Usage
1. Login to hammer through PuTTY.
2. Recursively git clone this GitHub repository into your local repository on hammer.
3. Change directory (cd) into the directory you just cloned from this GitHub repository.
4. Run the command "cmake3 ."
5. Run the command "make"
6. Run the executable "./test"
7. The main menu screen for the task scheduler will appear. The different options for using the task scheduler are listed on the main menu. Follow the screenshots listed above for further details on how to use the different options.

 ## Testing
 To test/validate our project, we created unit tests to test the different classes in our project. These unit tests were ran using Google Test. We also used Valgrind to help us make sure that our project does not have any memory leaks.
 
