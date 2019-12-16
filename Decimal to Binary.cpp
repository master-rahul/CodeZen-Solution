#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
    vector <int> arr;
    cin>>n;
    while(n){
        arr.push_back(n%2);
        n=n/2;
    }
    for(int i=arr.size()-1; i>=0;i--)
        cout<<arr[i];
	return 0;
}
