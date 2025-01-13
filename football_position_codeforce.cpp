#include<iostream>
#include<cstring>
using namespace std;

void is_Dangerous(char ch[], int size){
	char  stepPosition;
	int test;
	
	if(size<7){
		cout<<"No dangerous situation";
		return ;
	}
	
	for(int f=0; f<size;f++){
		stepPosition=ch[f];
		test=0;
	for(int i=f; i<7+f; i++){
		if(stepPosition==ch[i]){
			test++;
		}
	}
	if(test==7){
			cout<<"Yes Dangerous situation";
			break;
	} 
	if(test==7) break;
		}
		if(test!=7){
			cout<<"No Dangerous situation";
		}
}


int main(){
	
	char ch[30], x;
	int i=0;
	while(x!='\n'){
		ch[i]=cin.get();
		x=ch[i];
		i++;
	}
	is_Dangerous(ch,i);
	
	
	
	
	return 0;
}
