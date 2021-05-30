#ifndef __LISTS_TEST_HPP__
#define __LISTS_TEST_HPP__

#include "gtest/gtest.h"

#include "listscomposite.hpp"


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




#endif
