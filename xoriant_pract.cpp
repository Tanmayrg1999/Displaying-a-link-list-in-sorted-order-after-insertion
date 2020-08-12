#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head=NULL;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void insert(int data)
{
	node *newnode= new node;
	if(head==NULL){
			head=newnode;
			newnode->next=NULL;
			newnode->data=data;
	}
	else{
		node *p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}	
		p->next=newnode;
		newnode->next=NULL;
		newnode->data=data;
	}	
}
void display()
{
	node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
void sortdisplay()
{
	int arr[100];
	int i=0;
	node *p=head;
	while(p!=NULL)
	{
		arr[i]=p->data;
		i++;
		//cout<<p->data<<endl;
		p=p->next;
	}
	int len=i;
	for(int j=0;j<len-1;j++)
	{
		for(int k=j+1;k<len;k++)
		{
			if(arr[j]>arr[k])
			{
				swap(arr[j],arr[k]);	
			}
		}
	}
	for(int m=0;m<len;m++)
	{
		cout<<arr[m]<<endl;
	}
}
int main()
{
	insert(10);	
	insert(12);	
	insert(3);	
	insert(45);	
	insert(5);	
	insert(60);	
	cout<<"original data is:"<<endl;
	display();
	insert(30);
	cout<<"sorted data after inserting element is:"<<endl;
	sortdisplay();
}
