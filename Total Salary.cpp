#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long int out;
	double basic;
    char allow;
    cin>>basic>>allow;
    double hra = (basic*20)/100.0,da=(basic*50)/100.0,pf=(basic*11)/100.0,val = hra + da -pf,total;
    if(allow == 'A')
        total = basic + 1700 + val;
    else if(allow == 'B')
        total = basic + 1500 + val;
    else
        total = basic + 1300 + val;
    total = round(total);
    out = int (total);
    cout<<out;
	return 0;
}