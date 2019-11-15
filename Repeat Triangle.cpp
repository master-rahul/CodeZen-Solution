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
    for(int i=1;i<=n;i++){
    	char alpha = 64;
    	for(int j=n-(n-i+1);j>0;j--){
    		cout<<" ";	
		}
    	for(int k=i;k<=n;k++){
    		alpha=alpha+1;
			cout<<alpha;
		}
		for(int l=i;l<=n;l++){
    		cout<<alpha;
    		alpha=alpha-1;
		}
		cout<<endl;
	}
}

