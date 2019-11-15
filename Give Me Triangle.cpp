#include<iostream>
using namespace std;
void printPatt(int n);
int main(){
	int n;
	cin>>n;
	printPatt(n);
}
void printPatt(int n)
{
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=i;k>0;k--){
            cout<<"*";
        }
        cout<<endl;
    }
   
}

