#include<iostream>
using namespace std;
class Bank // Bank class
{
	public:
		int dep,bal,w,check; // del for deposite,bal for balance, w for withdraw, check for check balance
		double acc; // acc for account number
		char c; // for account is saving or current
		string name; // for store account holder name
		get() // get memeber function definition
		{
			cout<<"Enter the Name:=";
			cin>>name;
			cout<<"Enter the Account Number:";
			cin>>acc;
			cout<<"Enter the Account Balance:";
			cin>>bal;
			if(bal<2000 || bal<=0)
			{
				bal=0;
				cout<<"Enter the amount greater than 2000"<<endl;
				cin>>bal;	
			}
			cout<<"Enter the type of Account[s/c]:";
			cin>>c; 	
		}
		deposite() // deposite memeber function definition
		{
			cout<<"Enter the Deposite Amount:";
			cin>>dep;
			if(dep<0)
			{
				cout<<"Invalid amount...";
				dep=0;
				cout<<"Enter the Deposite Amount:";
				cin>>dep;
			}
			else
			{
				bal+=dep;
			}
		}
		withdraw() //withdraw memeber function definition
		{
			cout<<"Your Balance="<<bal<<endl;
			cout<<"Enter withdraw Amount=";
			cin>>w;
			check=bal-w;
			if(w<=0)
			{
				cout<<"Process Failed..."<<endl;
				cout<<"Enter Valid amount";
			}
			else if((check<0) || (check<2000 && check!=0))
			{
				cout<<"Process Failed...."<<endl;
				cout<<"Bal is under limit...."<<endl;
				cout<<"Inform Your branch Bank.."<<endl;
				cout<<"Thank You...."<<endl;
			}
			else
			{
				cout<<"Processing Successful"<<endl;
				bal-=w;
			}
		}
		show() // show method memeber function definition
		{		cout<<"****************************************"<<endl;
				cout<<"Account Holder Name="<<name<<endl;
				cout<<"Accout Balance="<<bal;
		}	
};
main()
{	
	Bank ob; // object of A class
	ob.get(); // get() method called using object
	ob.deposite(); // deposite() method called using object
	ob.withdraw();// withdraw() method called using object
	ob.show();// show() method called using object
}
