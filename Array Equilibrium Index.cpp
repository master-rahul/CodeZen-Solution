#include<iostream>
using namespace std;
int equilibrium(int arr[],int n);

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int val = equilibrium(arr, n);
    cout<<val;
}

int equilibrium(int arr[], int n) {
	int left=0,right=0;
    for(int i=0;i<n;i++)
        right += arr[i];
    left += arr[0];
    right = right - left;
    for(int i=1;i<n-1;i++){
        right= right-arr[i];
        if(left==right)
            return i;
        left +=arr[i];
    }
	return -1;
}
