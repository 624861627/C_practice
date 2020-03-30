#include <func.h>
int *spread2(int a);
int spread(int a);
void recieve()
{
    int a=10;
    a=spread(a);
    int *P=spread2(a);
    printf("%d %d\n",a,*P);
    printf("%d\n",*P);
}
int spread(int a)
{
    return ++a;   //值是可以传递出去的
}
int *spread2(int a)
{
    a++;
    return &a;
}

void test1()
{
    char *a="hello";
    printf(a);
}

void test2()
{
    char ch[20]={0};
    scanf("%s",ch);
    printf("%s\n",ch);
    scanf("%s",ch);
    printf("%s\n",ch);
    scanf("%s",ch);
    printf("%s\n",ch);
    scanf("%s",ch);
    printf("%s\n",ch);
}
int main(int argc,char **argv)
{
    //recieve();
    //test1();
    test2();
    return 0;
}

