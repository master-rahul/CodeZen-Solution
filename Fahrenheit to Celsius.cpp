#include<iostream>
using namespace std;

int main(){
	int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;   
    while (a <= b ){
       int temp = (5.0/9.0)*(a-32.0);
        cout<<a<<"\t"<<temp<<endl;
        a = a + c;
    }
  	return 0;
}