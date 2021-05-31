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

                virtual string getTime() = 0;
                virtual string getLocation() = 0;
                virtual string getSubject() = 0;
                virtual string getBody() = 0;
                virtual string getDate() = 0;
                virtual double getDuration() = 0;
		virtual vector<TaskTemplate*> getTasks() = 0;
};

#endif
