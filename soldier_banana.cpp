#include<iostream>
using namespace std;
int main(){
	
	int k,n,w,sum=0,count=0;
	cout<<"Price of first banana:"<<endl;
	cin>>k;
	cout<<"Dollar($) soldier has :"<<endl;
	cin>>n;
	cout<<"How many banana he wants :"<<endl;
	cin>>w;
	
	if(k>0 & n>0 & w>0){
	
	for(int i=1; i<=w; i++){
		sum+=(++count*k);
	}
	
	if(w<sum)
		cout<<"He would take Dollars :"<< sum-n;
	}
	return 0;
}
