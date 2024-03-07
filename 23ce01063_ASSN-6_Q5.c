#include<stdio.h>
void scanmatrix(int arr[][100],int r, int c);
void printmatrix(int arr[][100],int r , int c);
void transpose(int arr[][100],int temp [][100], int r, int c);
int main(){
    int r,c;
    printf("Enter the no of rows in a matrix : ");
    scanf("%d", &r);
    printf("Enter the no of columns in a matrix : ");
    scanf("%d", &c);
    int arr[r][100], temp[c][r];
    printf("Enter the Array Elements : ");
    scanmatrix(arr,r,c);
    printf("The original matrix is : \n");
    printmatrix(arr,r,c);
    transpose(arr,temp,r,c);
    printf("The Transpose of the given array is : \n");
    printmatrix(temp,c,r);
    return 0;
}
void scanmatrix(int arr[][100], int r , int c){
     for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            scanf("%d", &arr[i][j]);
        }
        

}
}
void printmatrix(int arr[][100], int r , int c){
     for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

}
void transpose(int arr[][100], int temp[][100],int r , int c){
    for(int i=0; i<r; i++){
        for(int j=0 ; j<c ; j++){
            temp[j][i]=arr[i][j];

        }
    }

}