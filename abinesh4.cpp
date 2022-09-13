#include<iostream> 
using namespace std;
class student
{   string name;
	int reg,M1,M2,M3,Total,Average;
	public:
	void input();
	void calculate();
	void display();
};
void student::input()
{
	cout<<"enter name: "<<endl;
	cin>>name;
	cout<<"enter reg.no: "<<endl;
	cin>>reg;
	cout<<"enter mark1: "<<endl;
	cin>>M1;
	cout<<"enter mark2: "<<endl;
	cin>>M2;
	cout<<"enter mark3: "<<endl;
	cin>>M3;
}
void student::calculate()
{
	Total=M1+M2+M3;
    Average=Total/3;
}
void student::display()
{
	cout<<"student name:"<<name<<endl;
	cout<<"student reg.no:"<<reg<<endl;
	cout<<"mark1:"<<M1<<endl;
	cout<<"mark2:"<<M2<<endl;
	cout<<"mark3:"<<M3<<endl;
	cout<<"total marks:"<<Total<<endl;
	cout<<"average marks:"<<Average<<endl;
}
int main()
{
	student a;
	a.input();
	a.calculate();
	a.display();
	return 0;
}
