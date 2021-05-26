#ifndef __TASKSCOMPOSITE_HPP__
#define __TASKSCOMPOSITE_HPP__

#include "tasktemplate.hpp"


class TasksComposite:public TaskTemplate {
	private:
		string time;
		string date;
		string duration;
		string location;
		string subject;
		string body;
		
	public:
		TasksComposite(string time, string date, string duration, string location, string subject, string body, int ID);
		string getTime();
		string getLocation();
		string getSubject();
		string getBody();
		string getDate();
		string getDuration();
		virtual void addTask(TaskTemplate* newTask);
		virtual void removeTask(int removeID);	

};


#endif
