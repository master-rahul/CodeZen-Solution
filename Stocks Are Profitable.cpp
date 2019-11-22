#include<iostream>
#include<vector>
using namespace std;

int maxProfit(int *arr, int size);
int main(){
    int num;
    int *arr = (int *)malloc(num * sizeof(int));
    cin>> num;
    int value = maxProfit(arr, num);
    cout<<value;
    return 0;
}


int maxProfit(int *arr,int l)
{
	int min=arr[0], max=arr[0], val=0;
	for(int i=1;i< l;i++){
        cin>>arr[i];
        if(max> arr[i]){
            if(arr[i]<min){
                 min = arr[i];
                max = arr[i];
            }
        }
        if(max<arr[i]){
            max = arr[i];
        }
        if(val < max-min)
            val = max-min;
    }
    return val;
}
