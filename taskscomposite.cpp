#include "taskscomposite.hpp"
#include <iostream>

TasksComposite::~TasksComposite() {
	//delete this;
}

TasksComposite::TasksComposite(string time, string date, string duration, string location, string subject, string body, int ID) {
	this->time = time;
	this->date = date;
	this->duration = duration;
	this->location = location;
	this->subject = subject;
	this->body = body;
	this->ID = ID;
	cout << "TEST: TaskComposite Object created" << endl;
}

string TasksComposite::getDate() {
	return this->date;
}//date getter

string TasksComposite::getDuration() {
        return this->duration;
}//duration getter

string TasksComposite::getTime() {
        return this->time;
}//time getter

string TasksComposite::getLocation() {
        return this->location;
}//location getter

string TasksComposite::getSubject() {
        return this->subject;
}//subject getter

string TasksComposite::getBody() {
        return this->body;
}//body getter






void TasksComposite::addTask(TaskTemplate* newTask){
	
}//leave empty



void TasksComposite::removeTask(int removeID){


}//leave empty

void TasksComposite::removeAllTasks() {}
