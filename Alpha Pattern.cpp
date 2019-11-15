#include<iostream>
using namespace std;

int main(){
   int input;
    char alpha = 65;
   	cin>>input;
    for(int i=0; i<input;i++){
		alpha = alpha + i;
        for(int j=0;j<=i;j++){
            cout<<alpha;
        }	
    	cout<<endl; 
    	alpha = 65;
    }

    return 0;
}


