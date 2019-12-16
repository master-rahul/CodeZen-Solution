#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n,val=0,i=0;
    cin>>n;
    while(n){
        val += (n%10)*pow(2,i);
        n =n/10;
        i++;
    }
    cout<<val;
    return 0;
}
