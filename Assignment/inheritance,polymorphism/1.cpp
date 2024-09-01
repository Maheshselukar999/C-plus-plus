#include<iostream>
using namespace std;
class cricketer //Cricketer Base class
{
	//private data members
	private:
    	string name;
    	int age;
	public:
   		void set_name() //member function for set name and age 
		{
    		cout<<"Enter your name : ";
    		cin>>name;
    		cout<<"Enter your age : ";
    		cin>>age;
   		}
   		void show_details()//member function display the name and age
		{
    		cout<<"Name : "<<name<<endl;
    		cout<<"Age : "<<age<<endl;
   		}
};
class batsman : public cricketer // Derived class 
{
	//private data member
	private:
 		int Total_runs ,best_perform;
		 float Average_runs;
	public:
   		void input_data(int run,int perform) //member function for assign value of total run and peformance
		{
    		Total_runs = run;
    		best_perform = perform;

  		}
   		void calculate_avr()//member function for calculate average run
		{
    		Average_runs =(float)Total_runs / 11; // formula for find average runs
   		}
   		void display_data() // display_data member function for display total,average runs and performance 
		{
			show_details();
    		cout<<"Total Runs : "<<Total_runs<<endl;
    		cout<<"Average Runs : "<<Average_runs<<endl;
    		cout<<"Bets performance : "<<best_perform<<endl;
   		}
};

main()
{
    int run,per;
    batsman a; //a object create using batsman class 
    a.set_name(); // set_name member function calling using object 
    cout<<"Enter total Run : ";
    cin>>run;
    cout<<"Enter performance : ";
    cin>>per;
    a.input_data(run , per);//input_data member function calling using object in passing run and performance
    a.calculate_avr();//calculate_avr member function calling using object
    a.display_data();// display_data member function calling using object for display all information of batsman
}
