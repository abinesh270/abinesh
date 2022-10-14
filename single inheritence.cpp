#include<iostream>
using namespace std;
class a
{                                  //base class 
	public :
		void b()
		{
			cout <<"b";
		}
};
class b1:public a                  //derived class 
{
	public:
		void b2()
		{
			cout<<"a ";
		}
};
int main()
{
	b1 obj;
	obj .b();
	obj .b2();
	return 0;
}

