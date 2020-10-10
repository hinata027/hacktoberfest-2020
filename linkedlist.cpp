#include<bits/stdc++.h>
using namespace std;
#define ll long long
class node{
	public:
	node* next =NULL;
	ll data;
	node(ll data){
		this->data=data;
	}
};
void insert(node * &head, ll data){
	node* temp= head;
	if(temp==NULL){
		temp= new node(data);
		head=temp;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
	temp->next= new node(data);
}
}
void print(node * head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main(){
	ll n;
	cin>>n;
	node* head=NULL;
	while(n--){
		ll data;
		cin>>data;
		insert(head,data);
	}
	print(head);
}
