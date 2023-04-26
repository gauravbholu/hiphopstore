#include<stdio.h>
int main(){
    int a; int sum =0;
    float avg;
    int marks[10];
    int i;
    int max=-99999;
    int min=99999;

    printf("How many students\n");
    scanf("%d",&a);
    for(i=0;i<a;i++){
    printf("Enter Your Marks\n");
    scanf("%d",&marks[i]);
    sum=sum+marks[i];
    avg=(sum/a);
    
    if(max<marks[i]){
     max=marks[i];   
    }
    if(min>marks[i]){
      min=marks[i];  
    }
    }
    printf("%f is avg\n",avg);
    printf("%d is max\n",max);
    printf("%d is min\n",min);
    
    return 0;
}