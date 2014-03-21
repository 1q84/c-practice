//
//  main.c
//  penury
//
//  Created by 1q84 on 18/11/2013.
//  Copyright (c) 2013 1q84. All rights reserved.
//

#include <stdio.h>

void do_something();
int fact();
int fib();
void swap(int, int);
void swap_with_pointer(int *, int *);

//int main(int argc, const char * argv[])
//{
//    int a=10,b=20;
//    printf("before swap:a=%d, b=%d \n",a,b);
//    swap(10, 20);
//    swap_with_pointer(&a,&b);
//    return 0;
//}

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("after swap:a=%d, b=%d \n",a,b);
    return;
}

void swap_with_pointer(int *a, int *b){
    int temp;
    printf("before swap:a=%d, b=%d \n",*a,*b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("after swap:a=%d, b=%d \n",*a,*b);
    return;
}

int fact(int n){
    return n==1?n:n*fact(n-1);
}

int fib(int n){
    return n<=2?1:fib(n-1)+fib(n-2);
}




