#include<iostream>
using namespace std;

int main(){
	int n,val =0;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int k= i; k<n;k++)
            cout<<" ";
        for(int j = i; j <= i + val; j++)
            cout<<"*";
        cout<<endl;
        val +=2;
    }
  	return 0;
}
