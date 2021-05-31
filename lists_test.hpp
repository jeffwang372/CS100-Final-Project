#ifndef __LISTS_TEST_HPP__
#define __LISTS_TEST_HPP__

#include "gtest/gtest.h"

#include "listscomposite.hpp"
#include "taskscomposite.hpp"

TEST(ListCreation, List1) {

ListsComposite* list1 = new ListsComposite( "Title1", 0);
string title = list1->getTitle();

EXPECT_EQ("Title1", title);

}//end test

TEST(ListCreation, List2) {

ListsComposite* list2 = new ListsComposite( "Title2", 0);
string title = list2->getTitle();

EXPECT_EQ("Title2", title);

}//end test

TEST(ListCreation, List3) {

ListsComposite* list3 = new ListsComposite( "Title3", 69);
int ID = list3->getID();

EXPECT_EQ(69, ID);

}//end test

TEST(ListCreation, List4) {

ListsComposite* list4 = new ListsComposite( "Title4", 3054);
int ID  = list4->getID();

EXPECT_EQ(3054, ID);

}//end test


TEST(ListCreation, List5) {

ListsComposite* list5 = new ListsComposite( "Title5", 9873);
string title = list5->getTitle();

EXPECT_EQ("Title5", title);

}//end test


TEST(AddTask, List6) {

ListsComposite* list6 = new ListsComposite( "Title6", 123);
TasksComposite* task1 = new TasksComposite( "Time1", "Date1", 69, "Location1", "Subject1", "Body1", 0);
list6->addTask(task1);
string title = list6->getTitle();

EXPECT_EQ("Title6", title);
EXPECT_EQ(list6->taskChildren.size(), 1);

}//end test


TEST(EmptyList, List7) {

ListsComposite* list7 = new ListsComposite( "Title7", 123);
string title = list7->getTitle();

EXPECT_EQ("Title7", title);
EXPECT_EQ(list7->taskChildren.size(), 0);

}//end test



#endif
