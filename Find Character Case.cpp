#include<iostream>
using namespace std;

int main() {
	char val;
    cin>>val;
    if(val >= 65 && val <= 91)
        cout<<"1";
    else if(val>= 96 && val <= 122)
        cout<<"0";
    else 
        cout<<"-1";
	return 0;
}
