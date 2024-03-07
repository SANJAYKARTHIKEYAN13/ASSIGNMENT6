#include<stdio.h>
void arrintake(int arr[],int n);
void funcheck(int ar1[],int ar2[],int n1,int n2);
int main() {
    int n1,n2;
    printf("Enter the no of values in reference array : ");
    scanf("%d", &n2);
    printf("Enter the no of values in the subset array : ");
    scanf("%d", &n1);
    int ar1[n1],ar2[n2];
    printf("Enter the values of the reference  array  : ");
    arrintake(ar2,n2);
    printf("Enter the values of the subset  array  : ");
    arrintake(ar1,n1);
    funcheck(ar1,ar2,n1,n2);
    




    return 0;
}

void arrintake(int arr[],int n){
    arr[n];
    
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

}
void funcheck(int ar1[],int ar2[],int n1,int n2){
    int count =0;
    for(int i=0;i<n1;i++){
        
        for(int j=0 ; j<n2 ; j++){
            if(ar1[i]==ar2[j]){
                count ++;
            }
        }
    }

    if(count == n1){
        printf("ar1[] is a subset of ar2[] ");
    }
    else{
        printf("ar1[] is  not a subset of ar2[]");
    }
}