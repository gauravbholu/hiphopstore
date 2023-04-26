#include<stdio.h>
int main(){
    int a;
    printf("Enter Array Size :");
    scanf("%d",&a);
    int n[a];
    printf("Enter your no :");
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a;i++){
        int count=0;
        for(int j=i+1;j<a;j++){
        if(n[i] < n[j]){
            count=count+1;
        }
        }
        if(count == 0){
            printf("%d\n",n[i]);
        }
    }
    return 0;
}