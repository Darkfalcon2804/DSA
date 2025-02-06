#include<iostream>
using namespace std;
void Reverse(int num[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
     swap(num[i],num[j]);
     i++;
     j--;
    }
    cout<<"After reversing the array: ";
    for(int i=0;i<n;i++){
        cout<<" "<<num[i];
    }
    cout<<endl;
    }
        

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnets of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
            }
    Reverse(arr,n);

}