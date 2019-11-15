#include<iostream>
using namespace std;

void printPatt(int n);

int main(){
    
	int n;
	cin>>n;
	printPatt(n);
    return 0;
}
void printPatt(int n)
{
    for(int i = n; i>0;i--){
        for(int j = i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }   
}
 
