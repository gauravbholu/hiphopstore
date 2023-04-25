#include<stdio.h>
int main(){
    int n,arm=0,rem,a;
    printf("Enter Your No. :");
    scanf("%d",&n);
    a=n;
    while(n>0){
        rem=n%10;
        arm=(rem*rem*rem)+arm;
        n=n/10;
    }
    if(a==arm){
        printf("armstrong no");
    }
    else{
        printf("not armstrong no");
    }
    return 0;
}