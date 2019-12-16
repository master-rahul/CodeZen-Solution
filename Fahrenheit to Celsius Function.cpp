#include<iostream>
using namespace std;

void printTable(int start, int end, int step) {
    while (start <= end ){
       int temp = (5.0/9.0)*(start-32.0);
        cout<<start<<"\t"<<temp<<endl;
        start = start + step;
    }
}

int main(){
	int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;   
    printTable(a,b,c);
  	return 0;
}