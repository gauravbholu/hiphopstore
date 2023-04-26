#include<stdio.h>
int addtwonumber(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("Enter Your Numbers\n");
    scanf("%d%d",&a,&b);
    int c=addtwonumber(a,b);
    printf("%d",c);
    return 0;
}