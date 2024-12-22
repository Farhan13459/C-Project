#include<iostream>
#include<iomanip>
using namespace std;
void teacherjob2();
void teacherJob();
void quizidmarks();
void studentNamesID();
void Assgnment();
void studentjob();
void Quizmarksstd(string,int);
void stdmarks();
void studentnames(int,string);
void showquiz(int,int);
void MIDPAPER();
void regno();

void regno()
{
	long reg[10]={2024170,2024120,2024270,2024145,2024345,2024534,2024145,2024654,2024653,2024951};
	
	for(int i =0;i<=9;i++)
	{
		cout<<reg[i]<<"   ";
	}
	cout<<endl;
}
void MIDPAPER()
{	
	double midmarks[10];
	cout<<"How much marks are counted ";
	int midpapermarks;
	int marks;
	cin>>midpapermarks;
	cout<<midpapermarks<<"% marks are counted"<<endl;
	cout<<"Enter midpaper Marks"<<endl;
	regno();
	for(int i=0;i<=9;i++)
	{
		cin>>marks;
		midmarks[i]=marks;
	}
	cout<<endl<<endl;
	regno();
	for(int i=0;i<=9;i++)
	{	
		cout<<midmarks[i]<<"        ";
	}
	
	
}
void Assignment()
{
	int assmarks;
	cout<<"Enter how many marks of  Assisgnment is couted "<<endl;
	cin>>assmarks;
	cout<<endl<<"!! REMEMBER "<<assmarks<<"% MARKS ARE COUNTED "<<endl;
	unsigned long int ass[10];
	unsigned long assignment[10];
	
	cout<<"sir!! please enter student Assignment marks "<<endl<<endl;
	
	for(int i=0; i<=9;i++)
	{
		cin>>ass[i];
		assignment[i]=ass[i];
	}
	studentNamesID();
	cout<<"    Marks";
	for(int i=0; i<=9 ; i++)
	{
	
		cout<<"    "<<assignment[i]<<endl;
	}
	int max,min,count;
	float sum = 0;
	 count = 1;
	max=min = assignment[0];
	for(int i =1;i<=9;i++)
	{
		sum = sum + assignment[i];
		count+=1;
		if (max < assignment[i])
		{
		max = assignment[i];
		}
		if(min > assignment[i])
		{
			min = assignment[i];
		}
	}
	cout<<"Highest marks is "<<max<<endl;
	cout<<"Minimest marks is "<<min<<endl;
	cout<<"Sir do you want Midpaper marks to enter "<<endl;
	char yes;
	cout<<"1:YES"<<endl<<"2:NO"<<endl;
	cin>>yes;
	if(yes=='1')
	{
		MIDPAPER();
	}
	
}


void QUIZZES()
{	int quizmark;
	cout<<"Enter how many marks of  quizzes is couted "<<endl;
	cin>>quizmark;
	unsigned long int Quizmarks[10];
	unsigned long quizmarks[10];
	cout<<endl<<"!! REMEMBER "<<quizmark<<"% MARKS ARE COUNTED "<<endl;
	cout<<"sir!! please enter student quiz marks "<<endl<<endl;
	studentNamesID();
	cout<<endl<<endl<<endl<<"Marks"<<endl;
	for(int i=0; i<=9;i++)
	{
		cin>>quizmarks[i];
		Quizmarks[i]=quizmarks[i];
	}
	studentNamesID();
	cout<<"    Marks";
	for(int i=0; i<=9 ; i++)
	{
		cout<<"    "<<Quizmarks[i]<<endl;
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
		}
		if(min > Quizmarks[i])
		{
			min = Quizmarks[i];
		}
		
}
	cout<<"Highest marks is "<<max<<endl;
	cout<<"Minimest marks is "<<min<<endl;
	cout<<"Average of class is "<<sum/count<<endl;
	cout<<endl<<endl<<"Sir do you want to do about assignent";
	char ass;
	cout<<"1:yes "<<endl<<"2:No"<<endl;
	cin>>ass;
	if ( ass == '1')
	Assignment();
	}
void studentnames( int regno,string name="0")
{
	const string studentNAMES[10]={"Farhan Ullah","AbduLLah","Fatima","Emaan swati",
	"Hassan raza","ghania Mukhtar","Asad  Akmal","Maimoona Saboor","Moize","Arsalan"};
	const unsigned int REGNO[10]={2024170,2024270,2024232,2024343,2024132,2024751,
	2024521,2024842,2024973,2024513};
	
}

void studentNamesID()
{	
	const string studentNAMES[10]={"Farhan Ullah","AbduLLah","Fatima","Emaan swati",
	"Hassan raza","ghania Mukhtar","Asad  Akmal","Maimoona Saboor","Moize","Arsalan"};
	const unsigned int REGNO[10]={2024170,2024270,2024232,2024343,2024132,2024751,
	2024521,2024842,2024973,2024513};
	int k ,l;
	k=l=studentNAMES[0].size();
	cout<<"  NAMES                 REGNO"<<endl;
	for(int i=0;i<=9;i++)
		{
			if(k<studentNAMES[i].size())
				k=studentNAMES[i].size();
	}
	for(int i=0;i<=9;i++)
		{
			if(l>studentNAMES[i].size())
				l=studentNAMES[i].size();
	}
	int n = k - l;
	for(int i=0;i<=9;i++)
	{	if(studentNAMES[i].size() < k)
	{
		int r = k-studentNAMES[i].size();
		cout<<studentNAMES[i]<<setw(r)<<" "<<"         "<<REGNO[i]<<endl;}
		else 
		cout<<studentNAMES[i]<<"         "<<REGNO[i]<<endl;
	}
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
	{
		QUIZZES();
	}
//	else if(teacherop=='3')
//	{
//		 
//	}
}
void studentjob()
{
	string name;
	int regno;
	char oper;
	cout<<"Please enter your Name and reg#";
	cin>>name;
	cin>>regno;
	cout<<name<<" what do you want ";
	cout<<"1:Quizzes Marks"<<endl<<"2:Midpaper"<<endl;
	cin>>oper;
	if(oper=='1')
	{
		//stdmarks(name , regno);
	}

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
