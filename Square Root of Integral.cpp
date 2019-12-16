#include<iostream>
using namespace std;

int main() {
	int x;
    cin>>x;
    if (x == 0 || x == 1) 
    return x; 
 
    int i = 1, result = 0; 
    while (result <= x) 
    { 
      i++; 
      result = i * i; 
    } 
    cout<<i-1;
	return 0;
}