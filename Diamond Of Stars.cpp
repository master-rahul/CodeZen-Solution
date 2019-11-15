#include<iostream>
using namespace std;

void printPatt(int n);

int main(){
	int num;
	cin>>num;
	printPatt(num);
	
	return 0;
}

void printPatt(int n){
	int space,star=1;
	space = n / 2;
	for(int i=0; i<=n; i++){
		for(int j=0; j<space; j++)
			cout<<" ";
		for(int k=0; k<star; k++)
			cout<<"*";
		if(i < n/2){
			space--;
			star +=2;
		}
		else{
			space++;
			star -=2;
		}
		cout<<endl;
	}
}
