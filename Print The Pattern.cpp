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
	int odd=1, even = n-1,num=n-1;
	if(n%2 ==0)
		even = n;
	for(int i=1;i<=n;i++){
		if(i <=n/2){
			for(int j=(n*odd) -num;j<= n*odd;j++)
				cout<<j<<" ";
			odd +=2;
		}
		else if(i == (n/2  +1) && n%2 !=0){
			for(int j=(n*odd) -num;j<= n*odd;j++)
				cout<<j<<" ";
		}
		else{
			for(int j=(n*even) -num;j<= n*even;j++)
				cout<<j<<" ";
			even -=2;
		}
		cout<<endl;
	}
	
}
