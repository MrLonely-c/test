#include<iostream>

using namespace std;

//-1:a<b 0:a=b 1:a>b
int measure(int *a,int *b,int n,int m)
{
	int i=0,j=0;
	while(a[i]<b[j])
	{
		if(i>n)
		return 1;
		else
		i++;
	}
	if (a[i]==b[j])
		return 0;
	else
		return -1;
}

int main()
{
	const int n=10;
	const int m=20;
	int a[n];
	int b[m];


	for(int i=0;i<n;i++)
	{
		a[i]=i+3;
	}

	for(int i=0;i<m;i++)
	{
		b[i]=i;
	}
	cout<<measure(a,b,n,m);
}
