#include <iostream>
#include "list.h"
using namespace std;
List::List() {
	first = nullptr;
}//create an empty list, i.e , a null pointer

List::~List() {
	Node* current = first;
	
	while (current!=nullptr)
	{
		Node* next = current->next;
		delete current;
		current=next;
	}
	
}

bool List::exists(int d) const {
	bool detect = false;
	Node* tmp=first;
	while (detect == false)
	{
		if (tmp == nullptr) //if the list is empty then false
		{
			break;
		}
		if (tmp->value != d) // check each node value
		{
			tmp = tmp->next; //if not, move to the next one
		}
		else { detect = true; } //found one, exit loop!
	}
	
	return detect;
}

int List::size() const {
	int cnt = 0;
	Node* tmp = this->first;
	
	while (tmp != nullptr)
	{
		cnt = cnt + 1;
		tmp = tmp->next;
	}
	return cnt;
}

bool List::empty() const {
	bool check_empty;
	if (this->first == nullptr)
	{
		check_empty = true;
	}
	else
	{
		check_empty = false;
	}
	return check_empty;
}

void List::insertFirst(int d){ 
	this->first =new Node(d,first);
}

void List::remove(int d, DeleteFlag df) {
	Node* previous=nullptr;
	Node* current=first;
	bool detect = false;
	
	if (df == List::DeleteFlag::EQUAL)
	{
		if (first->value == d)
		{
			detect = true;
			first = first->next;
			delete current;
		}
		while (detect == false)
		{
			if (current->next!=nullptr && current->value != d)
			{
				previous = current;
				current = current->next;
			}
			else if (current->next==nullptr)
			{break;}
			else
			{
				previous->next = current->next;
				delete current;
				detect = true;
			}
		}
	}

	if (df == List::DeleteFlag::GREATER)
	{
		if (first->value >= d)
		{
			detect = true;
			first = first->next;
			delete current;
		}
		while (detect == false)
		{
			if (current->next!=nullptr && current->value < d)
			{
				previous = current;
				current = current->next;
			}
			else if(current->next==nullptr)
			{break;}

			else
			{
				previous->next = current->next;
				delete current;
				detect = true;
			}
		}
	}

	if (df == List::DeleteFlag::LESS)
	{
		if (first->value <= d)
		{
			detect = true;
			first = first->next;
			delete current;
		}
		while (detect == false)
		{
			if (current->next!= nullptr && current->value > d)
			{
				previous = current;
				current = current->next;
			}
			else if (current->next==nullptr)
			{break;}

			else
			{
				previous->next = current->next;
				delete current;
				detect = true;
			}
		}
	}
}

void List::print() const {
	if (first == nullptr)
	{
		cout << "the list is empty";
	}
	else
	{
		Node* temp = first;
		
		while (temp != NULL)
		{
			cout << temp->value << " ";
			temp = temp->next; //move on to the next node
		}
		cout << endl;
	}
}



