#include<iostream>
#include<iomanip>
using namespace std;

void choice();
void QUIZZES();
void teacherjob2();
void teacherJob();
void change_Marks();
void quizidmarks();
void studentNamesID();
void Assgnment();
void studentjob();
void stdmarks();
void showquiz(int,int);
void mid_exam();
void regno();
string return_Name(string);
int return_Regno(int);
double total_marks();

long reg[10]={2024170,2024120,2024270,2024145,2024345,2024534,2024145,2024654,2024653,2024951};
double midmarks[10]; double quizmarks[10]; double assigment[10];

void choice(){
	cout<<"1: Enter Assignment marks"<<endl<<"2: Enter midmarks"<<endl<<"3: Calculate toal marks "<<endl;
	char option; cin>>option;
	if(option=='1'){
			Assgnment();
	}
	else if(option=='2'){
		mid_exam();
	}
	else if(option=='3'){
		total_marks();
	}
}
double total_marks(){
	double total[sizeof(reg)/sizeof(reg[0])];
	for(int i=0;i<sizeof(reg)/sizeof(reg[0]);i++){
			
		total[i]=quizmarks[i]+assigment[i]+midmarks[i];
	}
	for(int f=0;f<sizeof(reg)/sizeof(reg[0]);f++)
		cout<<"Total marks of "<<reg[f]<<": "<<total[f]<<endl;
}


void mid_exam(){
	for(int y=0;y<sizeof(midmarks)/sizeof(midmarks[0]);y++){
	cout<<"Enter marks of "<<reg[y];
	cin>>midmarks[y];   cout<<endl;
	}
	choice();
}

int return_Regno(int index_position=-1)
{
	long reg[10]={2024170,2024120,2024270,2024145,2024345,2024534,2024145,2024654,2024653,2024951};
	
		if(index_position==-1)
			return reg[index_position];
}

void Assignment()
{

	unsigned long int ass[10];
	unsigned long assignment[10];
	
	cout<<"Enter Assignment marks "<<"\n"<<"\n";
	
	for(int i=0; i<=9;i++)
	{cout<<"Enter Assignment marks Roll# "<<reg[i];
		cin>>ass[i];
		assignment[i]=ass[i];
	}
	//studentNamesID();

	int max,min,count1=0,count2=0;
	float sum = 0;
	max=min = assignment[0];
	for(int i =1;i<=9;i++){
		
		if (max < assignment[i])
		{
		max = assignment[i];  count1=i;
		}
		if(min > assignment[i])
		{
			min = assignment[i];  count2=i;
		}
	}
	cout<<"Highest marks is "<<max<<" of Reg# "<<reg[count1]<<"\n";
	cout<<"Minimest marks is "<<" of Reg# "<<reg[count2]<<endl;
	choice();
}


void QUIZZES()
{	
	cout<<"\n";
	int quizmark;
	int count1,count2;
	count1=count2=0;
	unsigned long int Quizmarks[10];
	unsigned long quizmarks[10];
	cout<<"Enter quiz marks "<<"\n";
	return_Regno();
	for(int i=0; i<=9;i++)
	{	cout<<"Enter the marks of "<<reg[i]<<" : ";
		cin>>quizmarks[i];
		Quizmarks[i]=quizmarks[i];
	}
	
	int max,min,count;
	float sum = 0;
	 count = 1;
	max=min = Quizmarks[0];
	for(int i =1;i<=9;i++)
	{
		sum = sum + Quizmarks[i];
		count+=1;
		if (max < Quizmarks[i])
		{
		max = Quizmarks[i];
		count1=i;
		}
		if(min > Quizmarks[i])
		{
			min = Quizmarks[i];
			count2=i;
		}
		
		
}
	cout<<"Highest marks is "<<max<<" of Roll# "<<reg[count1]<<endl;
	cout<<"Minimest marks is "<<min<<" of Roll# "<<reg[count2]<<endl;
	cout<<"Average of class is "<<sum/count<<endl;
	choice();

}

void teacherJob()
{
	unsigned long pin;
	string teacherNAME;
	cout<<"Dear sir what's your name ";
	cin>>teacherNAME;
	long int teacherPin=1234;
	cout<<"Sir "<<teacherNAME<<" please enter your pin ";
	cin>>pin;
	if(pin == teacherPin)
		{
		teacherjob2();
	}
	else 
	{
		cout<<"please enter valid input ";
	}
	
}

void teacherjob2()
{	
	cout<<"Sir what operation do you want to perform "<<endl;
	cout<<"1 : Quizzes"<<endl<<"2 : Assignment"<<endl<<"3 : Midpaper";
	
	char teacherop;
	cin>>teacherop;
	if(teacherop=='1')
	{	cout<<" How many Quizzes ";
		int Quiz_no; cin>>Quiz_no;
		for(int x=1;x<=Quiz_no; x++)
		{
		{ cout<<"Enter quize "<<x<<" marks "<<endl;  
			QUIZZES();

	}
}
	
}	choice();
}
void studentjob()
{
	string name;
	int regno;
	char oper;
	cout<<"Name and reg# ";
	cin>>name;
	cin>>regno;
	cout<<name<<" what do you want ";
	cout<<"1:Quizzes Marks"<<endl<<"2:Midpaper"<<endl;
	cin>>oper;

}
void Quizmarksstd(string name,int regno)
{
	
}
int main()
{	
	char occupation;
	cout<<"What's your  occupation "<<endl;
	
	cout<<"1 : Teacher "<<endl<<"2 : Student "<<endl;
	cin>>occupation;
	if ( occupation == '1')
	{	
	teacherJob();
	}
	else if(occupation == '2')
	{
		studentjob();
	}

	return 0;
}
