#include<iostream>
#include<vector>
using namespace std;

vector <int> MissingNumber(vector <int> input, int size);

int main(){
    int num;
    vector <int> input;
    cin>> num;
    vector <int> output = MissingNumber(input, num);
    cout<<output[0];
    return 0;
}
vector <int> MissingNumber(vector <int> input , int n){
    int val,min=9999999;
    vector <int> arr;
    for(int i=0; i<n ;i++){
        cin>> val;
        input.push_back(val);
        if(min > val)
            min =val;
    }
    for(int i=0; i<n; i++){
        
        if(abs(input[i]) + min < n && input[abs(input[i])-min] >= 0 )
            input[abs(input[i]) - min] *= -1;
        else
            arr.push_back(abs(input[i]));
    }
    return arr;
}
