#include<iostream>
using namespace std;
int area(float r, const float pi=3.14)
{
	cout<<"The Area Of The Circle is ::"<<pi*r*r;
}
int main()
{
	float r;
	cout<<"Zalavadiya Shyam"<<endl;
	cout<<"220130318015"<<endl;
	cout<<"---------------------"<<endl; 	
	cout<<"Enter The Readius of The Circle ::";
	cin>>r;
	
	area(r);
	return 0;
}
