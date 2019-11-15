#include<iostream>
using namespace std;

void printPatt(int n);

int main(){
    
	int n;
	cin>>n;
	printPatt(n);
    return 0;
}
void printPatt(int n)
{
    int m=1;
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            int a = m % 2;
            cout<<a;
        }
        cout<<endl;
        m++;
    }
}
 
