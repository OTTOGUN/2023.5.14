#include<stdio.h>

int x,y,z;
// 自己定义一个交换函数，用来交换x,y的值，加&和不加&会有什么不同？
// 顺着阅读接下来的文章，应该会有所体会
void swapp(int* &x,int* &y)
{
int t = x;
x = y;
y = t;
}

int main()
{
    scanf("%d%d%d",&x,&y,&z);
    if(x > y)
        swapp(x,y);
    if(x > z)
        swapp(x,z);
    if(y > z)
        swapp(y,z);
    printf("%d %d %d",x,y,z);
}