#include <iostream>
using namespace std;

int main() {
    
    int h,n, count=0;
    cout<<"Fence hight and # of friends :";
    cin>>n>>h;
    
    int friends[n];
    for(int i=0; i<n ; i++){
    	cin>>friends[i];
	}
	
	for(int f=0; f<n ; f++){
		if( h < friends[f] ){
			count=count+2;
		} 
		else{
			count++;
		}
	}
    
    cout<<"The minimum with :"<<count;
    
    
    
    
    
    

    return 0;
}

