#include<stdio.h>
int main(){
    int n,a[20];
    printf("enter the size:");
    scanf("%d",&n);
    if(n>20){
        printf("invalid size.");
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("sorted array-");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
               int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            }
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}