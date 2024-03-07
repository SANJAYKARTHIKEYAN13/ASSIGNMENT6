#include<stdio.h>
void arrintake(int arr[],int n);
int average(int arr[],int n);
int main(){
    int n,avg;
    printf("Enter the no of values : ");
    scanf("%d", &n);
    int ar[n];
    arrintake(ar,n);
    
    avg=average(ar,n);
    for(int i=0 ; i<n ; i++){
        
        if(ar[i]>avg){
            printf("%d\t", ar[i]);
        }
    }
    return 0;



}
void arrintake( int arr[],int n){
    arr[n];
    
    printf("Enter the values of the array : ");
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

}
int average(int arr[],int n){
    int sum=0;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int avg = sum/n;
    return avg;
}