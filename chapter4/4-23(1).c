#include<stdio.h>
int main (void){
    int i,j,len;
    puts("生成直角在左上方的等要直角三角形。");
    printf("短边："); scanf("%d",&len);
    for ( i = 0; i < len; i++)
    {
        for ( j = len-i; j >0 ; j--)
        {
            putchar('*');
        }
        printf("\n");
    }
    return 0;
}