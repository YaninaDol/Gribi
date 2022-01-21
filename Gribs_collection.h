#include <iostream>

#include "Mucor.h"
struct Node {
	Grib* exampl;
	Node* next;
	Node(Grib* exampl, Node* next)
	{
		this->exampl = exampl;
		this->next = NULL;
	}
};


class Gribs_collection {
private:
	Node* head;
	
public:
	explicit Gribs_collection()
	{
		this->head = NULL;
	}

	void addToList(Grib* exampl) {
		
		if (this->head == NULL) {
			this->head = new Node(exampl, NULL);
		}
		else {
			Node* tmp = this->head;
			while (tmp->next != nullptr)
			{
				tmp = tmp->next;
			}

			tmp->next = new Node(exampl, NULL);
		}
		
	}
	bool isInList(string name) {
		bool isIn = false;
		Node* tmp = this->head;
		while (tmp != nullptr)
		{
			if (tmp->exampl->getName() == name)
			{
				isIn = true;
				break;
			}
			tmp = tmp->next;
		}
		tmp = nullptr;

		return isIn;
	}
	void removeFromList(string name) {
		if (this->isInList(name)) {
			Node* forDelete;
			if (this->head->exampl->getName() == name) {
				forDelete = this->head;
				this->head = this->head->next;
			}
			else {
				Node* tmp = this->head;
				forDelete = tmp;
				while (tmp->next != nullptr)
				{
					if (tmp->next->exampl->getName() == name) {
						forDelete = tmp->next;
						break;
					}
					tmp = tmp->next;
				}
				tmp->next = tmp->next->next;
			}
			delete forDelete;
		}
	}

	void showList() {
		Node* tmp = this->head;
		while (tmp != nullptr)
		{
			tmp->exampl->print();
			tmp = tmp->next;
		}
		delete tmp;
	}
};
