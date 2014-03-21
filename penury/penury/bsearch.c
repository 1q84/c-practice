//
//  bsearch.c
//  penury
//
//  Created by 1q84 on 22/11/2013.
//  Copyright (c) 2013 1q84. All rights reserved.
//

#include <stdio.h>
int binsearch(int[],int,int);

//int main(){    
//    return 0;
//}

int binsearch(int l[],int x, int n)
{
    int low,high,mid;
    low = 0;
    high = n - 1;
    while (low < high)
    {
        mid = (low + high)/2;
        if (x>l[mid])
            low = mid + 1;
        else if (x < l[mid])
            high = mid -1;
        else
            return mid;
    }
    return -1;
}


