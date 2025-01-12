#include<iostream>
using namespace std;
int main(){
	
	int arr[5]={1,2,3,4,5}, x,count, sum;
	cout<<"Enter value of X(0<x<1000000)"<<endl;
	cin>>x;
	
	if(x==1){
		cout<<"Steps needed :"<<1;
		return 0;
	}
	for(int j=0; j<5; j++){
		count=0;
		sum=0;
		
	for(int i=j; i<5; i++){
		sum+=arr[i];
		count++;
	}
	if( x==sum ){
			cout<<"Steps needed :"<<count;
			break;
			}
		
		}
	
	return 0;
}
