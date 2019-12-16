#include <iostream>
using namespace std;

int main(){
	int n,count=0;
    cin>>n;
    if(n>1){
      cout<<"2"<<endl;
    	for(int i=3;i<=n;i++){
        	for(int j=2; j < i; j++)
                if(i % j == 0)
    				count++;
        	if(count == 0)
                cout<<i<<endl;
            count=0;
        } 
    }
    return 0;
}