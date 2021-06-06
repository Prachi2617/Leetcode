/*
-------Iterative Approach---------
https://leetcode.com/problems/reverse-linked-list/  Question
https://www.youtube.com/watch?v=sYcOK51hl-A    Solution Video
*/
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head=new Node;

void reversed()
{
    if(head==NULL)
        return ;
    Node *curr, *prev,*nxt;
    curr=head;
    prev=NULL;
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    head=prev;
}

void printt()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}

int main()
{
    int n,i,a;
    cout<<"Enter size of list-: ";
    cin>>n;
    cout<<"\nenter head node- : ";
    cin>>a;

    head->data=a;
    head->next=NULL;
    Node *temp1=head;
     n--;
    while(n!=0)
    {
        Node *temp= new Node;
        cin>>a;
        temp->data=a;
        temp->next=NULL;
        temp1->next=temp;
        temp1=temp1->next;
        n--;
    }
    cout<<"\noriginal list\n";
    printt();
    reversed();
    cout<<"\nreversed list\n";
    printt();
    return 0;
}
