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

int seeList(list <worker> list)
{
	for (auto iter = list.begin(); iter != list.end(); ++iter)
		cout << iter->FIO << " " << departments[iter->department] << " " << posts[iter->post] << " " << iter->experience << " " << iter->salary << endl;
	return 0;
}

int saveList(list <worker> list)
{
	ofstream file("tests", ios::binary);

	if (!file.is_open()) return 1;

	for (auto iter = list.begin(); iter != list.end(); ++iter)
	{
		file << iter->FIO << endl;
		file << iter->department << endl;
		file << iter->post << endl;
		file << iter->experience << endl;
		file << iter->salary << endl;
	}

	file.close();

	return 0;
}

list <worker> LoadList()
{
	list <worker> list;

	ifstream file("tests", ios::binary);

	if (!file.is_open()) return list;

	while (1) {}

	file.close();

	return list;
}