#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = nullptr;
    }
};
class linkedlist
{
    node *start;

public:
    linkedlist()
    {
        start = nullptr;
    }
    void insertAtBeginning(int value)
    {
        node *newnode = new node(value);
        if (start == nullptr)
        {
            start = newnode;
        }
        else
        {
            newnode->next = start;
            start = newnode;
        }
    }
    void insertAtEnd(int value)
    {
        node *newnode = new node(value);
        if (start == nullptr)
        {
            start = newnode;
        }
        else
        {
            node *ptr = start;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
    }
    void deletefrombeginning()
    {
        if (start == nullptr)
        {
            cout << "Underflow";
        }
        else
        {
            node *ptr = start;
            start = start->next;
            delete ptr;
        }
    }
    void deletefromend(){
        if(start==nullptr){
            cout<<"Underflow";
        }
        else{
            node *ptr=start;
            node *preptr=nullptr;
            while(ptr->next!=nullptr){
                preptr=ptr;
                ptr=ptr->next;
            }
            preptr->next=nullptr;
            delete ptr;
        }
    }
    void display(){
        if (start==nullptr){
            cout<<"list is empty";
        }
        else{
            node *ptr=start;
            cout<<"List Elements:" ;
            while(ptr!=nullptr){
                cout<<ptr->data<<" ";
                ptr=ptr->next;
            }
        }
        cout<<endl;
    }
};
int main()
{
    linkedlist l;
    l.insertAtBeginning(4);
    l.insertAtBeginning(5);
    l.insertAtEnd(7);
    l.display();
    l.deletefrombeginning();
    l.deletefromend();
    l.display();
    l.deletefrombeginning();
    l.display();
}