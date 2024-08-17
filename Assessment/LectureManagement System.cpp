#include<iostream>
using namespace std;
class Lecture
{
	string lecturername; // private data member to store lecturename
	string subjectname;// private data member to store subject name
	string coursename;// private data member to store course name
	int numberoflecture;// private data member to store number of lecture
	public:
		Lecture() //default constructor 
		{
			lecturername="";
			subjectname="";
			coursename="";
			numberoflecture=0;
		}
		// member function for add information
		addlecturedetails(string lecturername,string subjectname,string coursename,int numberoflecture)
		{
			this->lecturername=lecturername;
			this->subjectname=subjectname;
			this->coursename=coursename;
			this->numberoflecture=numberoflecture;
		}
		// member function for display lecture  information
		displaylecturedetails(int i)
		{
			cout<<"-----------"<<i+1<<" Lecture Details-----------"<<endl;
			cout<<"Lecturer Name:"<<lecturername<<endl;
			cout<<"Subject Name:"<<subjectname<<endl;
			cout<<"Course Name:"<<coursename<<endl;
			cout<<"Number of Lecture:"<<numberoflecture<<endl;
		}
};
main()
{
	string lecturernm,subnm,coursenm;
	int nolect,size;
	cout<<"Enter the how many lecture object you want to created:-";
	cin>>size;
	Lecture Obj[size];//array of object 
	// for getting lecture information from user and store array of object 
	for(int i=0;i<size;i++)
	{
		cout<<"**************"<<i+1<<"************** "<<endl;
		cout<<"Enter the Lecturer Name:";
		cin>>lecturernm;
		cout<<"Enter the Subject Name:";
		cin>>subnm;
		cout<<"Enter the Course Name:";
		cin>>coursenm;
		cout<<"Enter the Number of Lecture:";
		cin>>nolect;
		Obj[i].addlecturedetails(lecturernm,subnm,coursenm,nolect);
	}
	//display details of lecture 
	for(int i=0;i<size;i++)
	{
		Obj[i].displaylecturedetails(i);
	}
}

