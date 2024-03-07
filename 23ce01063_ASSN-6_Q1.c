#include<stdio.h>
void prime(int n1, int n2);
int main(){
    int n1,n2;
    printf("Enter the starting range : ");
    scanf("%d", &n1);
    printf("Enter the end point of the range : ");
    scanf("%d", &n2);
   prime(n1,n2);
   return 0;

}
void prime(int n1, int n2){
    printf("The prime numbers between %d and %d is : ", n1,n2);
    for(int i=n1;i<=n2;i++){
        int prime =1;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                prime =0;

            }
        }
        if(prime==1){
            printf("%d\t", i);
        }
    }
    
}
