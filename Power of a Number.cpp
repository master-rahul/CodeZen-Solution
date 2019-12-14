#include<iostream>
#include<math.h>
using namespace std;

int main() {
	long double n,p,val;
    long int out;
    cin>>n>>p;
    val = pow(n,p);
    val = round(val);
    out = int (val);
	cout<<out;
    return 0;
}
