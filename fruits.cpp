#include<iostream>
using namespace std;
int x,y;
	class fruit
	{
		
		public:
			
			void fruits()
			{
		     			  cout<<"total fruits="<<x+y;	
			}
	};
	class apple:public fruit 
	{
		
		public:
				
			void display()
			{
	           cout<<"enter no of apples";
	           cin>>x;
			}
	};
	class mango:public fruit
	{
		
		public:
			void display1()
			{
				cout<<"enter no of mangoes";
				cin>>y;
			}
	};
	  main()
	{
			apple c;
			c.display();
		mango k;
			k.display1();
		c.fruits();
		}
