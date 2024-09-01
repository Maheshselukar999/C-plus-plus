#include<iostream>
using namespace std;
class Car // car class
{
	private:
		string cname; // private data member 
		double model,year; // private data member 
	public:
		set() // set member function for set car information
		{
			cout<<"Enter the company name:";
			cin>>cname;
			cout<<"Enter the Model no:";
			cin>>model;
			cout<<"Enter the year:";
			cin>>year;
		}
		get() // get member function for display car information
		{
			cout<<"company name:"<<cname<<endl;
			cout<<"Model no:"<<model<<endl;
			cout<<"Year:"<<year;
		}
		
};
main()
{
	Car c; // c object of Car class
	c.set(); // set method calling
	c.get();// get method calling
}

