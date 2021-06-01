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
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
