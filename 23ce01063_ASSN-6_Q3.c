#include<stdio.h>
void arrintake(int arr[], int n);
void revarr(int arr[],int n);
int main(){
    int n;
    printf("Enter the no of values : ");
    scanf("%d", &n);
    int arr[n];
    arrintake(arr,n);
    revarr(arr,n);




    return 0;
    
}
void arrintake(int arr[], int n){
    arr[n];
    printf("Enter the values of the array : ");
    for(int i=0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The original array is : ");
    for(int i=0;i<n;i++){
        printf("%d\t ", arr[i]);
        
    }
    printf("\n");
}
void revarr(int arr[],int n){
    int temp;
    for(int i=0;i<(n/2) ; i++){
        temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-i-1]=temp;
    }
    printf("The Reverse array is : ");

    for(int i=0; i<n ; i++){
        printf("%d\t", arr[i]);
    }
    

}