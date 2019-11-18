#include<iostream>
using namespace std;

int FindSum(int *arr, int n);

int main(){
    int num;
    cin>>num;
    int *arr = (int *)malloc(num * sizeof(int));
    int value = FindSum(arr, num);
    cout<<value;
    return 0;
}

int FindSum(int *a, int n){
    int sum = 0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++){
        if(a[i]% 2 == 0 || a[i] %3 ==0)
            sum += a[i];
    }
    return sum;
}