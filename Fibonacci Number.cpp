#include<iostream>
using namespace std;
bool checkMember(int n){
	int a=0, b=1, t;
    while(1){
        t = a+b;
        if(t == n)
            return true;
        if(t>n)
            break;
        a=b;
        b=t;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    bool val = checkMember(n);
    if(val ==1)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}