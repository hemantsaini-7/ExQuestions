#include<stdio.h>
#include<stdlib.h>

#include<iostream>
using namespace std;


struct node{
    int data;
    struct node* link;
};

struct node* START=NULL;

void Insert(int n){
    struct node* nd;
    struct node* temp;
    nd=(struct node*)malloc(sizeof(struct node*));
    if(START==NULL){
        nd->data=n;
        nd->link=NULL;
        START=nd;
        temp=START;
    }
    temp->link=nd;
    temp=temp->link;
    nd->data=n;
    nd->link=NULL;
}

void Print(){
struct node* temp=START;
while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->link;
}
cout<<endl;
}

void Reverse(){

    struct node* prev=NULL;
    struct node* current=START;
    struct node* next;
//    struct node* temp=START;

    while(current != NULL){
        next=current->link;
        current->link=prev;

        //temp=current;
        //previous=temp;
        prev=current;

        //current=current->link;
        current=next;
    }
    START=prev;
}


int main(){
Insert(3);
Insert(4);
Insert(2);
Insert(5);
Print();
Reverse();
Print();
}

