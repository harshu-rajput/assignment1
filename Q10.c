#include<stdio.h>
int main(){
    int date,month,year;
    printf("enter date in DD/MM/YYYY\n");
    scanf("%d %d %d",&date,&month,&year);

    printf("Day-%d,Month-%d,Year-%d",date,month,year);

    return 0;
}