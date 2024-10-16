//
// Created by 51487 on 24-10-4.
//给一个数求其所有质因子
#include <stdio.h>
int main() {
    int a,b;
    a=2;
    printf("Now,enter a number\n");
    scanf("%d",&b);
    while(a<=b) {

        if(b%a==0) {
            int c=a-1;
            while(c>=2) {
                if(a%c==0) {
                    goto restart;
                }
                c=c-1;
            }
             printf("%d\n",a);
        }
        restart:
        a=a+1;
    }
}





