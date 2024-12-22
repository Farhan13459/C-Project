#include <iostream>
#include<string>
using namespace std;

void choice();
void QUIZZES();
void teacherjob2();
void teacherJob();
void Assignment();
void mid_exam();
void total_marks();
void final_exam();

long reg[10] = {2024170, 2024120, 2024270, 2024145, 2024345, 2024534, 2024145, 2024654, 2024653, 2024951};
//int n = sizeof(reg) / sizeof(reg[0]);
int n = 5;
int midmarks[10];
int quizmarks[10];
int ass[10];
int finals[10];
double total[10]; // every student will have separate quiz, assignmets and mid marks


void choice()
{
    char option;
    do
    {
        cout << "1: Enter Assignment marks" << endl
             << "2: Enter mids marks" << endl
             << "3: Enter Quizes Marks" << endl <<"4. Enter Finals marks"<<endl <<"5. Calculate Total "<<endl << "6: Exit" << endl;
        cin >> option;
        switch (option)
        {
        case '1':
        {
            Assignment();
            break;
        }
        case '2':
        {
            mid_exam();
            break;
        }
        case '3':
        {
            QUIZZES();
            break;
        }
        case '4':{
            final_exam();
            break;
        }
        case '5':{
            total_marks();
        }
        default:
        {
            break;
        }
        }
    } while (option != '6');
    
    cout<<"Good Bye!!";
}

void total_marks()
{
    for (int i = 0; i < n; i++)
    {

        total[i] = quizmarks[i] + ass[i] + midmarks[i] + finals[i];
    }

    for (int f = 0; f < n; f++)
        cout << "Total marks of " << reg[f] << ": " << total[f] << endl;
}

void mid_exam()
{
    for (int y = 0; y < n; y++)
    {
        cout << "Enter marks of " << reg[y] <<" : ";
        cin >> midmarks[y];
        cout << endl;
    }
    
    
}

void final_exam(){
    for (int i = 0; i < n; i++){
        cout<<"Enter the marks of reg # "<<reg[i]<<" : ";
        cin>>finals[i];
    }
}

void Assignment()
{


    cout << "Enter Assignment marks " << "\n"
         << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Assignment marks Roll# " << reg[i] <<" : ";
        cin >> ass[i];
    }
    // studentNamesID();

    int max, min, count1 = 0, count2 = 0;
    float sum = 0;
    max = min = ass[0];
    for (int i = 0; i < n; i++)
    {

        if (max < ass[i])
        {
            max = ass[i];
            count1 = i;
        }
        if (min > ass[i])
        {
            min = ass[i];
            count2 = i;
        }
    }
    cout << "Highest marks is " << max << " of Reg# " << reg[count1] << "\n";
    cout << "Minimum marks is " << min << " of Reg# " << reg[count2] << endl;
    cout<<endl<<endl<<"_________________________________________________"<<endl<<endl;
}

void QUIZZES()
{
    cout << "\n";
    int count1, count2;
    count1 = count2 = 0;
    int quizmarks[10];
    cout << "Enter quiz marks " << "\n";
    
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the marks of " << reg[i] << " : ";
        cin >> quizmarks[i];
    }

    int max, min, count;
    float sum = 0;
    count = 1;
    max = min = quizmarks[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + quizmarks[i];
        count += 1;
        if (max < quizmarks[i])
        {
            max = quizmarks[i];
            count1 = i;
        }
        if (min > quizmarks[i])
        {
            min = quizmarks[i];
            count2 = i;
        }
    }
    cout << "Highest marks is " << max << " of Roll# " << reg[count1] << endl;
    cout << "Minimest marks is " << min << " of Roll# " << reg[count2] << endl;
    cout << "Average of class is " << sum / count << endl;
    cout<<endl<<endl<<"_________________________________________________"<<endl<<endl;
}

void teacherJob()
{
    unsigned long pin;
    string teacherNAME;
    cout << "Dear sir what's your name : ";
     getline(cin , teacherNAME);
    const int teacherPin = 1234;
    cout << "Sir " << teacherNAME << " please enter your pin : ";
    cin >> pin;
    if (pin == teacherPin)
    {
        teacherjob2();
    }
    else
    {
        cout << "please enter valid input : ";
    }
}

void teacherjob2()
{
    cout << "Sir what operation do you want to perform : " << endl;
    choice();
}


int main()
{
   teacherJob();
   return 0;
}
