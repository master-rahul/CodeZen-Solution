#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	vector <int> even;
    vector <int> odd;
    int val,temp,o=0,e=0;
    cin>>val;
    while(val !=0 ){
        temp = val % 10;
        if(temp %2 == 0)
            even.push_back(temp);
        else
            odd.push_back(temp);
        val =val/10;
    }
	for(int i=0; i < even.size(); i++)
        e += even[i];
    for(int i=0; i < odd.size(); i++)
        o += odd[i];
    cout<<e<<"   "<<o;
    return 0;
}
