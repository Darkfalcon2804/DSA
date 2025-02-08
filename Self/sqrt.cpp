////Find sqrt of numbers which also includes floating numbers like sqrt of underroot36 is 6 but underroot of 37 is 6.082  so code for this problem 
#include<iostream>
using namespace std;
long long int bs(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    int ans=0;

    while(s<=e){
        long long int sq=mid*mid;
        if(sq==n){return mid;}
        if(sq<n){
            s=mid+1;
            ans=mid;
        }
        else {   //////sq>n
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double moreprecision(int n,int precision,int tempsol){
double fact=1;
double sol=tempsol;
for(int i=0;i<precision;i++){
    fact/=10;
    for(double j=sol;j*j<n;j+=fact){
        sol=j;
    }
}
return sol;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int tempsol=bs(n);
    cout<<"Answer is: "<<moreprecision(n,3,tempsol)<<endl;
}