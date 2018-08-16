#pragma once
#include <iostream>
#include "stdafx.h"
using namespace std;
struct node
{
	int data;
	node *next;
};

class linkedListType
{
private:
	node * head, *tail;
public:
	linkedListType()
	{
		head = NULL;
		tail = NULL;
	}
	void add_node(int n)
	{
		node *tmp = new node;
		tmp->data = n;
		tmp->next = NULL;

		if (head == NULL)
		{
			head = tmp;
			tail = tmp;
		}
		else
		{
			tail->next = tmp;
			tail = tail->next;
		}
	}
	void Display()
	{
		struct node* tmp = head;
		if (tmp == NULL)
			return;
		while (tmp != NULL)
		{
			cout << "\t" << tmp->data << " ";
			tmp = tmp->next;
		}
	}
	void reversePrint()
	{
		struct node* ptr = head;
		struct node *last, *current;
		last = NULL;
		cout << "\n";
		while (ptr != last)
		{
			current = ptr;
			while (current->next != last)
			{
				current = current->next;
			}
			cout << "\t" << current->data << " ";
			last = current;
		}
		cout << "\n";
	}
	void ReversePrintRecursiveU(struct node *head)
	{
		if (head == NULL)
			return;
		ReversePrintRecursiveU(head->next);
		cout << "\t" << head->data << " ";
	}
	void recursiveReversePrint()
	{
		ReversePrintRecursiveU(head);
	}
};