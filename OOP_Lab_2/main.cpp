#include "Class.h"
#include <conio.h>

int main()
{
	char i;
	list <worker> list;

	while (1)
	{
		system("pause");

		cout	<< "1. Add Element"							<< endl
				<< "2. See List"							<< endl
				<< "3. Save list"							<< endl
				<< "4. Load list"							<< endl
				<< "5. Get Most experienced workers"		<< endl
				<< "6. Show Median salary in departments"	<< endl
				<< "0. Exit"								<< endl;

		i = _getch();

		system("cls");

		switch (i)
		{
		case '1':
			list.push_front(getElement());
			break;
		case '2':
			seeList(list);
			break;
		case '3':
			saveList(list);
			break;
		case '4':
			list = load();
			break;
		case '5':
			list = experiencedWorkers(list);
			break;
		case '6':
			medianSalary(list);
			break;
		case '0':
			return 0;
		default:
			return 1;
		}
	}
}