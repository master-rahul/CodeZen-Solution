#include<iostream>
#include<bits/stdc++.h>
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
   	int itr=n/2,val = (n/2) + 1;
    //cout<<val<<" "<<itr;
    for(int i=0;i<n;i++){
    	for(int j=0;j<val-itr;j++){
    		cout<<"*";
    		
    		//cout<<val<<" "<<itr;
		}
		if(itr==0){
    		val=val-1;
    	}
		itr=itr-1;
    	if(itr<=0){
    		itr=0;
    	}
		cout<<endl;
	}
	if(n%2==0){
		cout<<"*";
	}
}

