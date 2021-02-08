#include <iostream>
#include "list.h"
using namespace std;
List::List() {
	first = nullptr;
}//create an empty list, i.e , a null pointer

List::~List() {
	Node* current = first;
	Node* next=nullptr;
	while (current!=nullptr)
	{
		next = current->next;
		delete current;
		current=next;
	}
	
}

bool List::exists(int d) const {
	bool detect=false;
	Node* tmp=first;
	while (detect==false)
	{
		if(tmp==NULL)
		{break;}
		if (tmp->value != d) 
		{
			tmp=tmp->next; 
		}
		else {detect=true;}      
		
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
	return !first;
}

void List::insertFirst(int d){ 
	this->first =new List::Node(d,first);
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



