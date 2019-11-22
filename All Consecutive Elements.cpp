#include<iostream>
#include<vector>
using namespace std;

bool containsConsecutiveNumbers(vector <int> input, int n);

int main(){
    int num;
    cin>>num;
    vector <int> input;
    bool value = containsConsecutiveNumbers(input, num);
    if(value == 0 )
        cout<<"false";
    else
        cout<<"true";
    return 0;
}

bool containsConsecutiveNumbers(vector <int> input, int n){
    int val, temp, min = 99999999;
   for(int i = 0; i < n; i++){
        cin>>val;
        input.push_back(val); 
       if(min>input[i])
            min = input[i];
   }
           
    for(int i=0;i < n;i++){
        if( (abs(input[i])-min) < n && input[abs(input[i])-min] >= 0)
            input[abs(input[i])-min]*=-1;
        else
            return false;
    }
   return true;
}