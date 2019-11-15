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
	int val = 1,out=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++)
			cout<<" ";
		for(int k=0;k<val;k++){
			cout<<i + out;
			if(k < val/2 )
				out++;
			else
				out--;
		}
		cout<<endl;
		val = val + 2;
		out=0;
	}
		
}
