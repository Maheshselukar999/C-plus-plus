 #include<iostream>
using namespace std;
class line // line class
{
	public:
		mul(float,float); // mul member function declaration
		cube(float a);//cube member function declaration
};
inline line::mul(float a,float b)// inline function for multiplication
{
	return a*b;
}
inline line::cube(float a)//inline function for cubic value
{
	return a*a*a;
}
main()
{
	line obj;// object of line class
	float a,b; //variable declaration
	cout<<"Enter the value A=";
	cin>>a;
	cout<<"Enter the value B=";
	cin>>b;
	cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<obj.mul(a,b)<<endl;
	cout<<"Cube of "<<a<<"= "<<obj.cube(a)<<" and "<<b<<"= "<<obj.cube(b);
}
