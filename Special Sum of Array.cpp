#include<iostream>
#include<vector>
using namespace std;

int sum(vector <int> arr, int n);

int main(){
    int num;
    cin>>num;
    vector<int> arr;
    int value = sum(arr, num);
    cout<<value;
    return 0;
}

int sum(vector <int> arr, int n){
    int val=0,sum=0;
    for(int i=0; i<n; i++){
        cin>>val;
        arr.push_back(val);
        sum += val;
    }
    j1:
    val =0;
    while (sum != 0){
        
        if(sum > 0){
            val += sum % 10;
            sum = sum/ 10;
        }
    }
    if(val > 9){
        sum = val;
        goto j1;
    }
    return val;
}