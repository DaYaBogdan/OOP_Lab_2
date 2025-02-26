#include "Class.h"

int main()
{
	int i;
	list <worker> list;

	while (1)
	{
		cout << "1. Add Element" << endl
			<< "2. See List" << endl;

		cin >> i;

		switch (i)
		{
		case 1:
			list.push_front(getElement());
			break;
		case 2:
			seeList(list);
			break;

		default:
			break;
		}
	}
}