#ifndef CLASS
#define CLASS

#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <map>

using namespace std;

class worker
{
public:

	worker()
	{
		FIO = " NULL ", department = 0, post = 0, experience = 0, salary = 0;
	};

	worker(string _FIO, int _department, int _post, int _experience, int _salary)
	{
		FIO = _FIO, department = _department, post = _post, experience = _experience, salary = _salary;
	};

	~worker() {};

	friend int seeList(list <worker> list);
	friend int saveList(list <worker> list);
	friend list <worker> loadList();

	//friend list <worker> Honoredworkers(list <worker> list);
	//friend int MedianSalary(list <worker> list);

private:
	string FIO;
	int department;
	int post;
	int experience;
	int salary;
};

worker getElement();

#endif
