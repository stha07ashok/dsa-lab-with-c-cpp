#include<iostream>
using namespace std;
class Queue{
private:
int size;
int front,rear;
int *arr;
int item;
public:
Queue(int size){
    this->size=size;
    front=-1;
    rear=-1;
    arr=new int[size];
}
void enqueue(int x){
    if(rear==size-1){
        cout<<"queue is Full"<<endl;
    }
    else{
        rear++;
        arr[rear]=x;
    }
}
int dequeue(){
    if(front==rear){
        cout<<"queue is empty";
    }
    else{
    item= arr[front+1];
        front++;
       
    } return item;
}
void display(){
    for(int i=front+1;i<=rear;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}

};
int main(){
int item;
Queue s(3);
s.enqueue(7);
s.enqueue(24);
s.enqueue(6);
s.display();
cout<<s.dequeue()<<endl;
s.display();

}
