#include<stdio.h>

int x,y,z;
// �Լ�����һ��������������������x,y��ֵ����&�Ͳ���&����ʲô��ͬ��
// ˳���Ķ������������£�Ӧ�û��������
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