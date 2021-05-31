#ifndef __TASKTEMPLATE_HPP__
#define __TASKTEMPLATE_HPP__

#include <vector>
#include <string>

using namespace std;

class TaskTemplate {
	protected:
		int ID;

	public:
		TaskTemplate();
		virtual void addTask(TaskTemplate* newTask) = 0;
		virtual void removeTask(int removeID) = 0;
		virtual void removeAllTasks() = 0;
		int getID();
		virtual string getTitle() = 0;
		virtual ~TaskTemplate() {}

};

#endif
