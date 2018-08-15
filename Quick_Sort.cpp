#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
const int max=1000; 
using namespace std;

void sort_as(vector<int> & vec, int first, int last)
{
	int temp = 0, mid = 0;
	int f = first, l = last;
	mid = vec[(l + f) / 2];
	while (vec[f] < mid)
	{
		f++;
	}
	while (vec[l] > mid)
	{
		l--;
	}
	if (f <= l)
	{
		temp = vec[f];
		vec[f] = vec[l];
		vec[l] = temp;
		f++;
		l--;
	}
	if (first < l)
		sort_as(vec, first, l);
	if (f < last)
		sort_as(vec, f, last);
}

void sort_des(vector<int> & vec, int first, int last)
{
	int temp = 0, mid = 0;
	int f = first, l = last;
	mid = vec[(l + f) / 2];
	while (vec[f] > mid)
	{
		f++;
	}
	while (vec[l] < mid)
	{
		l--;
	}
	if (f <= l)
	{
		temp = vec[f];
		vec[f] = vec[l];
		vec[l] = temp;
		f++;
		l--;
	}
	if (first < l)
		sort_des(vec, first, l);
	if (f < last)
		sort_des(vec, f, last);
}
int main()
{
	int n = 0;
	cout << "Enter size of array" << endl;
	cin >> n;
	vector<int> vec(n);
	srand(time(NULL));

	for (int i = 0; i < vec.size(); i++)
		vec[i] = rand() % max;
	short int a = 0;
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;
	cout << "Choose how to sort: ascending or descending(enter 1 or 2 respectively)" << endl;
	cin >> a;
	switch (a)
	{
	case 1:sort_as(vec,0,vec.size()-1); break;
	case 2:sort_des(vec,0,vec.size()-1); break;
	default:
		break;
	}
	cout << "The array is sorted: ";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	system("pause");
	return 0;
}