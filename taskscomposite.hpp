#ifndef __TASKSCOMPOSITE_HPP__
#define __TASKSCOMPOSITE_HPP__

#include "tasktemplate.hpp"

class PrintStrat;

class TasksComposite: public TaskTemplate {
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
		virtual string getTitle();
		virtual vector<TaskTemplate*> getTasks();
                virtual void set_strategy(PrintStrat* s);
                virtual void printByPriority(std::ostream& out);
                virtual void printByDuration(std::ostream& out);
                virtual void printByDate(std::ostream& out);
};


#endif
