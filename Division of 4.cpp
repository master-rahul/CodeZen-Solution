#include<iostream>
using namespace std;
 
int* change(int *arr, int n);

int main(){
    int num;
    cin>>num;
    int *arr = (int *) malloc (num * sizeof(int));
    int *value = change(arr, num);
    for(int i=0; i<num; i++)
        cout<<value[i]<<" ";
    return 0;
}

int* change(int *arr, int n){
    int *arr1 = (int *) malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] < 4)
            arr1[i] = arr[i] - 4;
        else
            arr1[i] = arr[i] / 4;
    }
    return arr1;
}