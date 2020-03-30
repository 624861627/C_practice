#include <func.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void paixu(Node *l)
{
    if(l->next==NULL)
        return;
    Node *p,*pre,*prepre,*temp;
    int flag=0,count=0,counttemp;
    temp=l;
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    while(count>1)
    {
        pre=l->next;
        p=pre->next;
        prepre=l;
        flag=0;
        counttemp=count;
        while(counttemp>1)
        {
            if(pre->data>p->data)
            {
                temp=p;
                p=p->next;
                pre->next=p;
                temp->next=pre;
                prepre->next=temp;
                prepre=temp;
                flag=1;
                counttemp--;
            }
            else
            {
                prepre=pre;
                pre=p;
                p=p->next;
                counttemp--;
            }
        }
        if(!flag)
            break;
        count--;
    }
}

void creatlistNode()
{
    Node *l,*p;
    l=(Node *)malloc(sizeof(Node));
    p=l;
    for(int n=1;n<=5;n++)
    {
        p->next=(Node *)malloc(sizeof(Node));
        p=p->next;
        scanf("%d",&p->data);
    }
    p->next=NULL;
    for(p=l->next;p!=NULL;p=p->next)
        printf("%d   ",p->data);
    printf("\n");
    paixu(l);
    for(p=l->next;p!=NULL;p=p->next)
        printf("%d   ",p->data);
    printf("\n");
}

int main(int argc,char **argv)
{
creatlistNode();
    return 0;
}

