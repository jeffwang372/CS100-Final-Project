#ifndef __listscomposite_HPP__
#define __listscomposite_HPP__

#include "tasktemplate.hpp"
#include "taskscomposite.hpp"

class PrintStrat;

class  ListsComposite: public TaskTemplate {

	private:
		PrintStrat* printStrat;
		string title;
	public:

	vector<TaskTemplate*> taskChildren;

	~ListsComposite();
	ListsComposite(string title, int ID); //constructor
	
	string getTitle();
	
	void addTask(TaskTemplate* newTask);
	void removeTask(int removeID);
	void removeAllTasks();	

	void set_strategy(PrintStrat* s);
	void printByPriority(std::ostream& out);
	void printByDuration(std::ostream& out);
	void printByDate(std::ostream& out);

        virtual string getTime();
        virtual string getLocation();
        virtual string getSubject();
        virtual string getBody();
        virtual string getDate();
        virtual double getDuration();
	vector<TaskTemplate*> getTasks();
};
#endif
