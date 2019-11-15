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
    int a=1,itr=0,max=0;
  	for(int i=1;i<=n;i++){
        max=i;
		int val = a % 2;
        if(val == 1){
        	itr=itr + max  ;
            for(int j=1;j<=i;j++){
            	cout<<itr<<" ";
            	itr++;
			}
			itr=itr-1;
			cout<<endl;
        }
        else{
        	itr=itr+max;
        	for(int j=1;j<=i;j++){
        		cout<<itr<<" ";
        		itr--;
        		itr=abs(itr);
			}
			
           cout<<endl;
        }
        a++;
    }
}

