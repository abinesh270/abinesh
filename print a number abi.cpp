#include<iostream>
using namespace std;
class print number
{
	int n1;
	char a[20];
	float n2;
	double n3;
	long int n4;
public:
	print number (int);
	print number (char);
	print number (float);
	prnt number (double);
	print number (long int);
}
print number::print number(int a)
{
	n1=a;
	cout<<"integer is"<<a;
}
print number::print number(char b)
{
	print number=b;
	cout<<"char is"<<b;
}
print number::print number (float c)
{
	print number=c;
	cout<<"float is"<<c;
}
print number::print number(double d)
{
	print number=d;
	cout<<"double is"<<d;
}
print number::print number(long int e)
{
	print number=e;
	cout<<"long int is"<<e;
}
void main()
{
	print number p1(50);
	print number p2("HELLO");
	print number p3(0.566);
	print number p4(3.912348239293);
	print number p5(5366623);
}
