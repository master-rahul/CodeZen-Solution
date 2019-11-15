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
	int space=0,star=1;
	for(int i=0;i<=n;i++){
		for(int j=0;j<space;j++)
			cout<<" ";
		for(int k=0;k<star;k++)
			cout<<"* ";
		if(i < n/2){
			space++;
			star++;
		}
		else{
			space--;
			star--;
		}
		cout<<endl;
	}
}
