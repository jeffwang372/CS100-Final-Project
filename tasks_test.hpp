#include "gtest/gtest.h"

#include "taskscomposite.hpp"


TEST(TaskCreation, Task1Time) {

TasksComposite* task1 = new TasksComposite( "Time1", "Date1", 87654, "Location1", "Subject1", "Body1", 0);
string time = task1->getTime();

EXPECT_EQ("Time1", time);

}//end test


TEST(TaskCreation, Task1Date) {

TasksComposite* task1 = new TasksComposite( "Time1", "Date1", 8765, "Location1", "Subject1", "Body1", 0);
string date = task1->getDate();

EXPECT_EQ("Date1", date);

}//end test


TEST(TaskCreation, Task1Duation) {

TasksComposite* task1 = new TasksComposite( "Time1", "Date1", 123, "Location1", "Subject1", "Body1", 0);
double duration = task1->getDuration();

EXPECT_EQ(123, duration);

}//end test


TEST(TaskCreation, Task1Location) {

TasksComposite* task1 = new TasksComposite( "Time1", "Date1", 101, "Location1", "Subject1", "Body1", 0);
string location = task1->getLocation();

EXPECT_EQ("Location1", location);

}//end test

TEST(TaskCreation, Task1Subject) {

TasksComposite* task1 = new TasksComposite( "Time1", "Date1", 6969, "Location1", "Subject1", "Body1", 0);
string subject = task1->getSubject();

EXPECT_EQ("Subject1", subject);

}//end test


TEST(TaskCreation, Task1Body) {

TasksComposite* task1 = new TasksComposite( "Time1", "Date1", 234, "Location1", "Subject1", "Body1", 0);
string body = task1->getBody();

EXPECT_EQ("Body1", body);

}//end test



TEST(TaskCreation, Task2Time) {

TasksComposite* task2 = new TasksComposite( "Time2", "Date2", 234, "Location2", "Subject2", "Body2", 0);
string time = task2->getTime();

EXPECT_EQ("Time2", time);

}//end test


TEST(TaskCreation, Task2Date) {

TasksComposite* task2 = new TasksComposite( "Time2", "Date2", 234, "Location2", "Subject2", "Body2", 0);
string date = task2->getDate();

EXPECT_EQ("Date2", date);

}//end test


TEST(TaskCreation, Task2Duration) {

TasksComposite* task2 = new TasksComposite( "Time2", "Date2", 69, "Location2", "Subject2", "Body2", 0);
double duration = task2->getDuration();

EXPECT_EQ(69, duration);

}//end test


TEST(TaskCreation, Task2Location) {

TasksComposite* task2 = new TasksComposite( "Time2", "Date2", 3453, "Location2", "Subject2", "Body2", 0);
string location = task2->getLocation();

EXPECT_EQ("Location2", location);

}//end test


TEST(TaskCreation, Task2Subject) {

TasksComposite* task2 = new TasksComposite( "Time2", "Date2", 453, "Location2", "Subject2", "Body2", 0);
string subject = task2->getSubject();

EXPECT_EQ("Subject2", subject);

}//end test



TEST(TaskCreation, Task2Body) {

TasksComposite* task2 = new TasksComposite( "Time2", "Date2", 54, "Location2", "Subject2", "Body2", 0);
string body = task2->getBody();

EXPECT_EQ("Body2", body);

}//end test


TEST(TaskCreation, Task3Full) {

TasksComposite* task3 = new TasksComposite( "Time3", "Date3", 45, "Location3", "Subject3", "Body3", 0);
string location = task3->getLocation();


EXPECT_EQ("Location3", location);
EXPECT_EQ("Time3", task3->getTime() );
EXPECT_EQ("Date3", task3->getDate() );
EXPECT_EQ(45, task3->getDuration() );
EXPECT_EQ("Location3", task3->getLocation() );
EXPECT_EQ("Subject3", task3->getSubject() );
EXPECT_EQ("Body3", task3->getBody() );

}//end test









