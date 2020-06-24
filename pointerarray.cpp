#include<iostream>
using namespace std;
int main()
{
	int i;
	int a[5];
	int *ptr=&a[0];
	cout<<"Enter elements:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"You entered:";
	for(i=0;i<5;i++)
	{
		cout<<*ptr<<endl;
		ptr++;
	}
	return 0;
}
