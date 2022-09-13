#include <iostream>
 
using namespace std; 
int main()
{
	int age;
	cout<<"\nEnter age";
	cin>>age;

  if(age >= 18){
  
    cout<<"Eligible for Voting! ";}
  else{
  
    cout<<" Eligible for Voting! after "<<18-age<<"years!!!!";}

	return 0;
}
