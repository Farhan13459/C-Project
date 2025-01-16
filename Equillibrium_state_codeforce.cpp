#include<iostream>
using namespace std;

void isEquillibrium(int *forceno, int f1[3], int f2[3], int f3[3]){
	int sumX=0, sumY=0, sumZ=0,x,y,z;
	for(int i=0; i<*forceno; i++){
		cin>>x>>y>>z;
		sumX+=x;
		sumY+=y;
		sumZ+=z;
	}
	
	if(sumX==0 && sumY==0 &&sumZ==0){
		cout<<"Yes! Equillibrium ";
	} else{
		cout<<"No! Equillibrium";
	}
	
}


int  main(){
	int forceNumber,  f1[3], f2[3],f3[3];
	cout<<"How many forces acting : ";
	cin>>forceNumber;
	
	isEquillibrium(&forceNumber,f1,f2,f3);
	
	return 0;
}
