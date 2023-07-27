#include <stdio.h>
#include <stdlib.h>
void swap(int*x,int*y)
{
    int t= *x;
    *x = *y;
    *y = t;
}

int main()
{
    int x,y;
    printf("please enter the two required numbers\n");
    scanf("%d%d",&x,&y);
     printf("numbers before swapping>>%d and %d\n",x,y);
    swap(&x, &y);
    printf("numbers after swapping>>%d and %d\n",x,y);
    return 0;
}
