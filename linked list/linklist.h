#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
};
void insert_back(node **head,int value);
void insert_front(node **head,int value);
void del(node **head,int key);
void insert_middle(node **head,int value);
void reverse(node **head);
void display(node *head);
void del_node(node **head,node *pos);
void circular(node **head);
void reverse_circular(node **head);
void display_circular(node *head);
#endif
