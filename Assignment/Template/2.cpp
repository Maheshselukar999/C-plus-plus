#include<iostream>
using namespace std;
template <class T>
sort_array(T a[],T n) //pass array and size of array in sort_array function parameter
{
	int i,j,temp;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				//logic of swap value
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"After sorting Array element..."<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"Element["<<i<<"]="<<a[i]<<endl;
	}
}
main()
{
	int n;//store size of array
	cout<<"Enter the size of array";
	cin>>n;
	int a[n],i;
	cout<<"Enter the "<<n<<" Element"<<endl;
	//set array element in array
	for(i=1;i<=n;i++)
	{
		cout<<"Element["<<i<<"]=";
		cin>>a[i];
	}
	//diplay array element without sort
	cout<<"Without sort Array element..."<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"Element["<<i<<"]="<<a[i]<<endl;
	}
	sort_array(a,n); //sort_array function called 
}
