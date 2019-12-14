#include<iostream>
using namespace std;

int main() {
	int n,val =1;
    cin>>n;
    cout<<"1"<<endl;
    for(int i=1; i < n; i++){
        for(int j=0; j <= i; j++){
            if(j==0 || j==i)
                cout<<val;
            else
                cout<<"0";
        }
        val++;
        cout<<endl;
    }
	return 0;
}
