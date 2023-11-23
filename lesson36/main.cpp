#include "MyList.h"
#include "DList.h"
#include <list>
#include <algorithm>

int main()
{
	list<int> a;
	a.push_back(5);
	a.push_back(8);
	a.push_back(-4);
	a.push_back(45);
	a.push_back(13);
	a.push_back(1);
	a.push_back(0);
	a.push_back(-5);

	int max = *max_element(a.begin(), a.end());
	cout << max;

	/*for (int& obj : a) {
		if (obj < 0)
		{
			obj = 0;
		}
	}*/

	cout << "\n---------------------------\n";
	replace_if(a.begin(), a.end(), [](int first) {return first < 0; }, 0);

	for (int& obj : a) {
		cout << obj << " ";
	}
	cout << "\n---------------------------\n";

	for_each(a.begin(), a.end(), [max](int& num) {num += max; });
	for_each(a.begin(), a.end(), [](int num) {cout << num << " "; });
	cout << "\n---------------------------\n";

	list<int>::iterator it = a.begin();

	while (it != a.end())
	{
		if (*it == 45)
		{
			cout << "Delete: " << *it << endl;
			a.erase(it);
			break;
		}
		it++;
	}
	for_each(a.begin(), a.end(), [](int num) {cout << num << " "; });
	cout << "\n---------------------------\n";

}