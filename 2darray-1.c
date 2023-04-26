#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Row :");
    scanf("%d",&a);
    int b;
    printf("Enter Your Column :");
    scanf("%d",&b);
    int n[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }
    int c;
    printf("Which No You Want To Compare :");
    scanf("%d",&c);
    int count=0;
for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        if( c==n[i][j]){
    count=count+1;
        }
        }
    }
     if(count==0){
        printf("-1");
     }   
     else{
        printf("%d\n",count);
     }

    return 0;
}