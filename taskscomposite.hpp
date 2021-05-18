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
		string getDate();
		string getDuration();
		

};


#endif
