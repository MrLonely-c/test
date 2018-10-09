#include <iostream>
#include <string>
#include<cmath>
//P32  2
using namespace std;
static int frequencyCount = 0;
void boolean(int n,string a[],int x)
{
	if (n == 1)
	{
		a[0] = "true";
		a[1] = "false";
		++frequencyCount;
	}
	else
	{
		boolean(n - 1, a, x / 2);
		for (int i = x / 2; i < x; ++i)
		{
			a[i] = a[i - x / 2] + ",false";
		}
		for (int i = 0; i < x / 2; ++i)
		{
			a[i] += ",ture";
			++frequencyCount;
		}
	}
}
int main()
{
	int n;
	cout << "Please enter a integer:" ;
	cin >> n;
	int x = pow(2, n);
	string *a = new string[x];
	boolean(n, a, x);
	cout << "\n\n";
	for (int i = 0; i < x; ++i)
	{
		cout << a[i] << endl;
	}
	cout << "\n\nfrequency count:" << frequencyCount<<endl;
	delete[]a;
}
