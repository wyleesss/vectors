#include <iostream>
#include <vector> 
using namespace std;

int main()
{
	srand(time(NULL));
	vector <int> vec1(5);
	vector <int> vec2(5);
	cout << "vector 1st'\n";
	for (auto i = vec1.begin(); i != vec1.end(); i++)
	{
		*i = rand() % 100 - rand() % 100;
		cout << *i << " ";
	}
	cout << "\n\nvector 2nd'\n";
	for (auto i = vec2.begin(); i != vec2.end(); i++)
	{
		*i = rand() % 100 - rand() % 100;
		cout << *i << " ";
	}

	cout << "\n\nvector 3rd'\n";
	vector <int> vec3(vec1.size() + vec2.size());
	static int it = 0;
	for (auto i = vec3.begin(), j = vec1.begin(), a = vec2.begin(); i != vec3.end(); i++, it++)
	{
		if (it >= vec1.size())
		{
			*i = *a;
			a++;
		}
		else {
			*i = *j;
			j++;
		}
		cout << *i << " ";
	}

}