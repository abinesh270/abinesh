#include<iostream>
using namespace std;
class add
{
	int a,b;
	public:
		void get();
		void display();
};
void add::get()
{
	cout<<"Enter";
	cin>>a>>b;
}
void add::display() 
{
	cout <<"addition of two number"<<a+b;
}
int main()
{
	add a; 
	a.get();
	a.display();
	return 0;	
}
