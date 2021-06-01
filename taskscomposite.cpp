#include "taskscomposite.hpp"
#include "printstrat.hpp"
#include <iostream>

TasksComposite::~TasksComposite() {
}

TasksComposite::TasksComposite(string time, string date, double duration, string location, string subject, string body, int ID) {
	this->time = time;
	this->date = date;
	this->duration = duration;
	this->location = location;
	this->subject = subject;
	this->body = body;
	this->ID = ID;
}

string TasksComposite::getDate() {
	return this->date;
}//date getter

double TasksComposite::getDuration() {
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

string TasksComposite::getTitle() { return ""; }
vector<TaskTemplate*> TasksComposite::getTasks() {
	vector<TaskTemplate*> v; //empty vector
	return v;
}

void TasksComposite::set_strategy(PrintStrat* s) {}
void TasksComposite::printByPriority(std::ostream& out) {}
void TasksComposite::printByDuration(std::ostream& out) {}
void TasksComposite::printByDate(std::ostream& out) {}
