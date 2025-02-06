#include<iostream>
#include<algorithm>
using namespace std;
int bs(int arr[],int n,int m){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==m){
            return mid;
        }
        else if(arr[mid]<m){
            s=mid+1;
        }
        else if(arr[mid]>m){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
 void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 }
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    input(arr,n);
    sort(arr,arr+n);
    int m;
    cout<<"Enter the number you want to find out at which index it is on (Remeber indexing starts from 0):";
    cin>>m;
 int d=bs(arr,n,m);
  if(d==-1){cout<<"The element does not exist in array";}
  else  cout<<"The element lies on: "<<d<<endl;
  return 0;
}