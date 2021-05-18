#include "taskscomposite.hpp"
#include <iostream>

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
}

string TasksComposite::getDuration() {
        return this->duration;
}

