#include<iostream>
using namespace std;

int main() {
	int a,b,pro=1;
    cin>>a;
    cin>>b;
    if(b ==1)
        cout<<(a*(a+1))/2;
    else if(b ==2){
        while(a)
            pro *=a--;
        cout<<pro;
    }
    else
        cout<<"-1";
    return 0;
}
