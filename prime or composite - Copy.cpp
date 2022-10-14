#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number:";
	cin>>a;
	if(int(a))
	{
		if(a%2==1)
	{
		cout<<"prime:"<<a;
	}
	else
	{
		cout<<"not prime"<<a;
	}
}
else
{
	cout<<"invalid";
}
return 0;
}
