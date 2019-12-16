#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {
	int n,t=0,i=0;
    cin>>n;
    vector <int> arr;
    while(n){
        int val = n % 10;
        arr.push_back(val);
        n= n/10;
    }
    for(int i=0;i<arr.size(); i++)
        t += arr[i]  * pow(10,(arr.size() -i-1));
	cout<< t;
    return 0;
}
