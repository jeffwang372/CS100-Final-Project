CMAKE_MINIMUM_REQUIRED(VERSION 2.8)



ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test
    main.cpp
    menu.cpp
    tasktemplate.cpp
    taskscomposite.cpp
    listscomposite.cpp
    printtaskstrat.cpp
    printliststrat.cpp
)


ADD_EXECUTABLE(unit_test
	menu.cpp
	unit_tests.cpp
	listscomposite.cpp
	taskscomposite.cpp
	tasktemplate.cpp	
        printtaskstrat.cpp
        printliststrat.cpp
)


TARGET_LINK_LIBRARIES(unit_test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
