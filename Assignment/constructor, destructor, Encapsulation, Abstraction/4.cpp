#include<iostream>
using namespace std;
class Bank //Bank class
{
	double bal,amount; // private data member
	public:
		Bank() // default constructor
		{
			bal=amount=0;
		}
		deposite() // deposite member function definition for deposite amount
		{
			cout<<"Enter the amount of you want to deposite on your account:";
			cin>>amount;
			bal+=amount;
		} 
		withdraw() // withdraw member function definition for withdraw amount
		{
			if(bal==0)
			{
				cout<<"Processing failed..."<<endl;
				cout<<"Your balance is empty, withdraw can't possible.."<<endl;
			}
			else
			{
				cout<<"Enter the Amount of you want to withdraw:";
				cin>>amount;
				bal-=amount;
				cout<<"withdraw successfull...."<<endl;
				cout<<"Your balance after withdraw="<<bal;
			}
		}
};
main()
{
	Bank b; // b object of Bank class
	b.deposite(); // deposite method calling using object of Bank class
	b.withdraw();// withdraw method calling using object of Bank class
}

