#include<stdio.h>
int main(){
     int c,d,sum;
     float avg;
    printf("Enter the no of cities : ");
    scanf("%d", &c);
    printf("Enter the no of days : ");
    scanf("%d", &d);
    int arr[c][d];
    for(int i =0 ; i<c ; i++){
        printf("Enter the temperatures of the city - %d : ", (i+1));
        for(int j=0;j<d;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The average of the temperatures of the given cities is : ");
    for(int i=0 ; i<c ; i++){
        sum =0;
        for(int j=0; j<d ; j++){
            sum+=arr[i][j];
            
            
        }
        avg=(float)sum/d;
        printf("%.2f  ,",avg);

    }

    
    }