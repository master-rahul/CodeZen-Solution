#include<iostream>
using namespace std;


int main(){
    int n;
    char a=65;
    cin>>n;
    for(int i=0; i<n; i++){
		for(int j=0; j <= i; j++)
            cout<<a;
        a++;
        cout<<endl;
    }
    return 0;
}

