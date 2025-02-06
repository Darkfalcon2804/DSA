#include<stdio.h>
int main(){
    int n;
    printf("Size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ele;
    printf("You want to find in array: ");
    scanf("%d",&ele);
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            printf("The element is present at this index:%d\n",i);
        }
    }
}