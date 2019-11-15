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
	char alpha = 65 + n- 1;
    for(int i = 1; i<=n;i++){
        
		for(int j = 0; j<i; j++){
			cout<<alpha;
			alpha = alpha + 1;
        }
        cout<<endl;
        alpha = 65 + n -1;
		alpha = alpha - i;
    }   
}
 
