#include<iostream>
using namespace std;
class Person // person class
{
	string name,country; 
	int age;
	public:
		set() // set member function definition for set name,country,age
		{
			cout<<"Enter the Name of person=";
			cin>>name;
			cout<<"Enter the name of country=";
			cin>>country;
			cout<<"Enter the Age of Person=";
			cin>>age;
		}	
		get() // get member function definition for display name,age,country
		{
			cout<<"Name="<<name<<endl;
			cout<<"Age="<<age<<endl;
			cout<<"country Name="<<country<<endl;
		}
};
main()
{
	Person ob; // object created using class
	ob.set(); // set method calling
	ob.get(); // get method calling
}
