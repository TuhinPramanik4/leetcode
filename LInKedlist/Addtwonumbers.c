#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int num=0;
    int i=1;
    while(l1!=NULL){
      num+=((l1->val)*i);
      i*=10;
      l1=l1->next;
    }
    int num1=0;
     i=1;
    while(l2!=NULL){
      num1+=((l2->val)*i);
      i*=10;
      l1=l1->next;
    }
    int sum=num+num1;
     struct ListNode newnode=NULL;
     while(sum!=0){
         newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        int element=sum%10;
        newnode->val=element;
        newnode->next=newnode;
        newnode=newnode;
        sum/=10;
     }
     return newnode;
}