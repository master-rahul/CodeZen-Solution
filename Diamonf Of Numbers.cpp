#include<iostream>
using namespace std;

void printPatt(int n);

int main(){
	int n;
	cin>>n;
	printPatt(n);
	return 0;
}

void printPatt(int n){
	int val = n/2,val1=1;
	if(n%2==0)
		n++;
	for(int i=0;i<n;i++){
		for(int j=0;j<val;j++)
			cout<<" ";
		for(int k=1;k<=val1;k++)
			cout<<k;
		cout<<endl;
		if(i < n/2){
			val1 = val1 + 2;
			val--;
		}
		else{
			val1 = val1 - 2;
			val++;
		}
	}
		
}
