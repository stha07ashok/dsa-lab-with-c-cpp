#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
struct node *head,*newnode,*temp;
head = 0;
int choice = 1;
while(choice)
{
newnode = (struct node *)malloc(sizeof(struct node)); // creating node
printf("Enter a number: \n");
scanf("%d",&newnode->data);
newnode->next = 0;
if(head ==0)
{
    head = temp = newnode;
}
else
{
    temp->next = newnode;
    temp = newnode;
}
printf("\nDo you want to store more:0/1 \n");
scanf("%d",&choice);
printf("\n");

}
temp = head;
while(temp !=0)
{
    printf("%d \n",temp->data);
    temp = temp->next;
}
return 0;
}