#include<iostream>
#include<vector>
using namespace std;

vector <int> rearrange(vector <int> input, int n);

int main(){
    int num;
    vector <int> input;
    cin>> num;
    vector <int> output = rearrange(input, num);
    for(int i=0; i< num; i++)
        cout<<output[i] <<" ";
    return 0;
}

vector <int> rearrange(vector <int> input, int n){
    int itr=0, itr1=0, val;
    vector <int> arr1;
    vector <int> arr2;
    for(int i=0; i< n; i++){
        cin>>val;
        input.push_back(val);
        if(val > 0)
            arr1.push_back(input[i]);
        else
            arr2.push_back(input[i]);
    }
   
    itr =0;
    itr1=0;
    for(int i=0; i< n; i= i+2){
        input[i] = arr1[itr++];
        input[i+1] = arr2[itr1++];
    }
    return input;
}
