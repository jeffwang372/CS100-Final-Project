#ifndef __TASKSCOMPOSITE_HPP__
#define __TASKSCOMPOSITE_HPP__

#include "tasktemplate.hpp"


class TasksComposite:public TaskTemplate {
	private:
		string time;
		string date;
		double duration;
		string location;
		string subject;
		string body;
		
	public:
		~TasksComposite();
		TasksComposite(string time, string date, double duration, string location, string subject, string body, int ID);
		string getTime();
		string getLocation();
		string getSubject();
		string getBody();
		string getDate();
		double getDuration();
		virtual void addTask(TaskTemplate* newTask);
		virtual void removeTask(int removeID);	
		virtual void removeAllTasks();

};


#endif
