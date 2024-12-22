#include<iostream>
#include<iomanip>
using namespace std;
void teacherJob();
void QUIZZES();
void ASSIGMENT();
void MIDPAPER();
void showstudentnames();
//void showstudentnames(string , int);

void QUIZZES()
{
	cout<<endl<<"!! REMEMBER 10% MARKS ARE COUNTED "<<endl;
	
	
	
}
void stop()
{
	cout<<"1: Quizzes "<<endl<<"2 : Assigment "<<"3 :Mid Paper"<<endl;
	char validin;
	cin>>validin;
	if(validin == '1')
	{
		QUIZZES();
	}
	else if (validin == '2')
	{
		ASSIGMENT();
	}
	else if (validin == '3')
	{
		MIDPAPER();
	}
	
}
void studentop(string &teachername)
{		
		char studentop1;
		cout<<"Sir "<<teachername<<" what operation do you want to perform ";
		cout<<"1 : Show all students name "<<endl<<"2 : Show their ID card  ";
		cout<<"3 : You wanted in enter grading to perform "<<endl;
		cin>>studentop1;
		if(studentop1 == '3')
		{
			stop();
		}
		
}
void studentNamesID()
{
	string studentName[5];
	unsigned int ID[5];
	
	for (int i =0; i<=4; i++)
	{
		cout<<"Enter student "<<i<<" name ";
		cin>>studentName[i];
		
	}
	for (int i =0; i<=4; i++)
	{
		cout<<"Enter "<<studentName[i]<<"  ID card ";
		cin>>ID[i];
	}
	cout<<"NAMES       ID"<<endl;
	
	for(int i =0; i<=4 ; i++)
	{
	cout<<studentName[i]<<"     "<<ID[i]<<endl;
//	showstudentnames(studentName[i] , ID[i]);
}

	teacherJob();
	
}
void teacherJob()
{
	unsigned long pin;
	string teacherNAME;
	cout<<"Dear sir what's your name ";
	cin>>teacherNAME;
	long int teacherPin=1234;
	cout<<"Sir please enter your pin ";
	cin>>pin;
	if(pin == teacherPin)
	{	
		studentop(teacherNAME);
		
	}
	else 
	{
		cout<<"please enter valid input ";
	}
	
}
	
//void studentNamesID(string student  , int ID )
//{
//	cout<<student<<"  "<<ID<<endl;
//}

int main()
{	
	char occupation;
	cout<<"What's your  occupation ";
	cout<<"1 : Teacher "<<endl<<"2 : Student "<<endl;
	cin>>occupation;
	if ( occupation == '1')
	{	
		studentNamesID();
		
	}
	


	return 0;
}
