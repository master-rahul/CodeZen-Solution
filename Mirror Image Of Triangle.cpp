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
    for(int i=0;i<=n;i++){
    	for(int j=i;j<n;j++){
    		cout<<" ";
		}
		int val = i;
		for(int k=0;k<=i;k++){
			cout<<val;
			val--;	
		}
		val=1;
    	for(int l=0;l<i;l++){
    		cout<<val;
    		val++;
		}
		cout<<endl;
	}
}

