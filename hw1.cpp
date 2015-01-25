#include <iostream>
#include <fstream>
using namespace std;

struct item{
	item(int v, item* n) { val=v; next=n; }
	int val;
	item* next;
};

class list {
public:
	item* concatenate(item* head1, item* head2);
	void removeEvens(item*& head);
	double findAverage(item* head);
private:
	item* head;
	item* head1;
	item* head2;
	item* head3;
}

item* concatenate(item* head1, item* head2);  // returns head pointer to new list
void removeEvens(item*& head);
double findAverage(item* head);

int main() {
	ifstream input;
	input.open (argv[1]);
	item* head1 = NULL;
	item* head2 = NULL;
	item* head3 = NULL;
	item* temp;
	char items1[50];
	char items2[50];
	input.getline(items1, 255);
	input.getline(items2, 255);
	x=new item;
	for (int i=0; i<50; i++) {
		x->val=items1[i];
		x->next=head1;
		temp=x;
		n=new item;
		temp->next=x;
	}
		for (int i=0; i<50; i++) {
		x->val=items2[i];
		x->next=head2;
		temp=x;
		n=new item;
		temp->next=x;
}
	head3=conc(head1, head2);
	removeEvens(head3);
	cout << findAverage(head3) << endl;

item* concatenate(item* head1, item* head2) {
	item* temp1;
	item* temp;
	while (head1->next!=NULL)
		temp=temp->next;
	head2->next=temp;
	cout << *head1 << endl;
	return *head1
}
void removeEvens(item*& head) {
	if (head1->val/2!=0)
		head1=head->next;
	while (head1->next!=NULL) {
		temp1=temp
		temp=head1->next;
		if (temp->val/2!=0){
			temp1->next=temp->next;
		}

	}
	cout << head1 << endl;

}
double findAverage(item* head) {
	int avg=0;
	int count=0;
	while (head1->next!=NULL) {
		avg=avg+head1->next->value
		count++;
	}
	avg=avg/count;
	cout << *head1 << endl;
	cout << avg << endl;
	return avg;
}

