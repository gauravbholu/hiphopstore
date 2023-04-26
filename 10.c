#include<stdio.h>
int main(){
int n; 

 printf("How many time you put 0 or 1 no.:\n");
 scanf("%d",&n);

int a;
int aone=0;    int azero=0;

for(int i=1;i<=n;i++){
printf("Enter 0 or 1.\n");
scanf("%d",&a);
if(a<2 && a>-1){
printf("thanks\n");
}
else{
printf("pls\n");
i=i-1;
}
if(a==1){
aone=aone+1;
}
 if(a==0){
azero=azero+1;
}
}
printf("How many time use 0 and 1:\n");
printf("1 = %d times.\n AND \n",aone);
printf("0 = %d times.\n",azero);


return 0;
}