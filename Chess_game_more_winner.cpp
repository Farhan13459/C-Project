#include<iostream>
#include<string>
using namespace std;


int main(){
	
	int games;
	string win;
	cout<<"How many games have played :";
	cin>>games;
	
	cout<<"Enter wining series :"<<endl;
	cin>>win;
	
	int antonWin=0, danikWin=0;
	
	for(char ch : win ){
		if(ch=='A' ||  ch == 'a'){
			antonWin++;
		}
		else if(ch == 'D' || ch == 'd'){
			danikWin++;
		}
	}
	
	cout<<"Anton wins :"<<antonWin<<endl;
	cout<<"Danik wins :"<<danikWin;

	return 0;
}
