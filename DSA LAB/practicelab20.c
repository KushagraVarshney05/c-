#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

struct list
{
    int data;
    struct list *next;
};
struct list *head = 0;

int choice = 1, count = 1;
void newlist()
{
    while (choice)
    {
        int value;
       
        printf("Creating node %d\n", count);
        struct list *newnode = (struct list *)malloc(sizeof(struct list));
        
        printf("enter data");
        scanf("%d", &value);
        newnode->next = 0;
        if (head == 0)
        {
            newnode->data=value;
            head = newnode;
        }
        else
        {
            
            struct list *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            if(temp->data<value)
            {
                newnode->data=value;
                temp->next = newnode;
                 count++;
            }
            else
            {
                printf("you entered wrong value");
            }
           
        }
        printf("do you wannt to continue(0,1)");
        scanf("%d", &choice);
    }
}
void traversal()
{
    struct list *temp = head;
    printf("count is %d \n", count);
    while (temp != 0)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    int n;
    newlist();
    traversal();
}