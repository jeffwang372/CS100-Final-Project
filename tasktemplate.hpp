#ifndef __TASKTEMPLATE_HPP__
#define __TASKTEMPLATE_HPP__

#include <vector>
#include <string>

using namespace std;

class TaskTemplate {
	private:
		//PrintStrat* printStrat; //TODO
		vector<TaskTemplate*> taskChildren;
	protected:
		int ID;

	public:
		TaskTemplate();
		void addTask();
		void removeTask();
		int getID();

};

#endif
