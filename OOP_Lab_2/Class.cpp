#include "Class.h"

map <int, string> departments
{
	pair <int, string>

	{0, "None"},
	{1, "Economic"},
	{2, "Programming"},
	{3, "Engineering"},
	{4, "Marketing"}
};

map <int, string> posts
{
	pair <int, string>

	{0, "None"},
	{1, "Economist"},
	{2, "Programmer"},
	{3, "Engineer"},
	{4, "Marketer" }
};

worker getElement()
{
	string _FIO;
	int _department, _post, _experience, _salary;

	cout << "Input Fio, num of department and post, experience, salary of worker: ";
	cin >> _FIO >> _department >> _post >> _experience >> _salary;

	return { _FIO, _department, _post, _experience, _salary };
}

int seeList(list <worker> sp)
{
	for (auto iter = sp.begin(); iter != sp.end(); ++iter)
		cout << endl << iter->FIO << " " << departments[iter->department] << " " << posts[iter->post] << " " << iter->experience << " " << iter->salary << endl;
	cout << endl;
	return 0;
}

int saveList(list <worker> sp)
{
	ofstream file("tests.txt", ios::binary);

	if (!file.is_open()) return 1;

	for (const worker& elem : sp)
	{
		file << elem;
	}

	file.close();

	return 0;
}

list <worker> load()
{
	worker elem;
	list <worker> sp;

	ifstream file("tests.txt", ios::binary);

	if (!file.is_open()) return sp;

	while (file >> elem) 
	{
		sp.push_front(elem);
	}

	file.close();

	return sp;
}

list <worker> honoredWorkers(list <worker> sp)
{
	list <worker> honoredList;

	/*for (auto iter = sp.begin(); iter != sp.end(); ++iter)
	{
		if()
	}*/

	return honoredList;
}

int medianSalary(list <worker> sp)
{
	for (int i = 1; i < departments.size(); ++i)
	{
		float median = 0;
		int counter = 0;

		for (auto iter = sp.begin(); iter != sp.end(); ++iter)
			if (iter->department == i)
			{
				median += iter->salary;
				counter++;
			}
		if (!counter) continue;
		cout << "In department '" << departments[i] << "' median salary is: " << median / counter << endl;
	}
	return 0;
}