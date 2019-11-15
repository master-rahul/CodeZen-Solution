#include<iostream>
using namespace std;

int main(){
	int num,num1;
	cin>>num;
	num1=num;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			cout<<num1;
			if(num1<num)
				num1++;
		}
		cout<<endl;
		num1=num1-i;;
	}
}
