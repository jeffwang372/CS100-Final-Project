  
#include "gtest/gtest.h"

#include "taskscomposite.hpp"
#include "listscomposite.hpp"
#include "menu.hpp"

TEST(MenuCreation, Menu1) {

Menu* menu1 = new Menu();
ListsComposite* list1 = new ListsComposite( "Title1", 0);

menu1->Lists.push_back(list1);

EXPECT_EQ(menu1->Lists.size(), 1);

}//end test




TEST(MenuCreation, Menu2) {

Menu* menu2 = new Menu();

EXPECT_EQ(menu2->Lists.size(), 0);

}//end test


TEST(MenuCreation, Menu3) {

Menu* menu3 = new Menu();
ListsComposite* list1 = new ListsComposite( "Title1", 0);
ListsComposite* list2 = new ListsComposite( "Title2", 0);

menu3->Lists.push_back(list1);
menu3->Lists.push_back(list2);


EXPECT_EQ(menu3->Lists.size(), 2);

}//end test



TEST(MenuCreation, Menu4) {

Menu* menu4 = new Menu();
ListsComposite* list1 = new ListsComposite( "Title1", 0);
ListsComposite* list2 = new ListsComposite( "Title2", 0);
ListsComposite* list3 = new ListsComposite( "Title3", 0);
ListsComposite* list4 = new ListsComposite( "Title4", 0);
ListsComposite* list5 = new ListsComposite( "Title5", 0);
ListsComposite* list6 = new ListsComposite( "Title6", 0);

menu4->Lists.push_back(list1);
menu4->Lists.push_back(list2);
menu4->Lists.push_back(list3);
menu4->Lists.push_back(list4);
menu4->Lists.push_back(list5);
menu4->Lists.push_back(list6);

EXPECT_EQ(menu4->Lists.size(), 6);

}//end test



TEST(MenuCreation, Menu5) {

Menu* menu5 = new Menu();
ListsComposite* list1 = new ListsComposite( "Title1", 0);
ListsComposite* list2 = new ListsComposite( "Title2", 0);
ListsComposite* list3 = new ListsComposite( "Title3", 0);

menu5->Lists.push_back(list1);
menu5->Lists.push_back(list2);
menu5->Lists.push_back(list3);

EXPECT_EQ(menu5->Lists.size(), 3);

}//end test



TEST(MenuCreation, Menu6) {

Menu* menu6 = new Menu();
ListsComposite* list1 = new ListsComposite( "Title1", 0);
ListsComposite* list2 = new ListsComposite( "Title2", 0);
ListsComposite* list3 = new ListsComposite( "Title3", 0);
ListsComposite* list4 = new ListsComposite( "Title4", 0);
ListsComposite* list5 = new ListsComposite( "Title5", 0);

menu6->Lists.push_back(list1);
menu6->Lists.push_back(list2);
menu6->Lists.push_back(list3);
menu6->Lists.push_back(list4);
menu6->Lists.push_back(list5);

EXPECT_EQ(menu6->Lists.size(), 5);

}//end test



TEST(MenuCreation, Menu7) {

Menu* menu7 = new Menu();
ListsComposite* list1 = new ListsComposite( "Title1", 0);
ListsComposite* list2 = new ListsComposite( "Title2", 0);
ListsComposite* list3 = new ListsComposite( "Title3", 0);
ListsComposite* list5 = new ListsComposite( "Title5", 0);

menu7->Lists.push_back(list1);
menu7->Lists.push_back(list2);
menu7->Lists.push_back(list3);
menu7->Lists.push_back(list5);

EXPECT_EQ(menu7->Lists.size(), 4);

}//end test



