//Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
    
};
Node *sortedmerge(Node *a , Node *b);

void printList(struct Node *n)
{
    while(n!=NULL)
    {
       cout<<n->data<<" "; 
       n=n->next;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int data;
        cin>>data;
        struct Node *head1=new Node(data);
        struct Node *tail1=head1;
        for(int i=1;i<n;i++)
        {
            cin>>data;
            tail1->next=new Node(data);
            tail1=tail1->next;
            
        }
        cin>>data;
        struct Node *head2=new Node(data);
        struct Node *tail2=head2;
        for(int i=1;i<m;i++)
        {
            cin>>data;
            tail2->next=new Node(data);
            tail2=tail2->next;
            
        }
        Node *head=sortedmerge(head1,head2);
        printList(head);
        }
}
Node* sortedmerge(Node* head1, Node* head2)  
{  
    //creating a dummy first node to hang the result on.
    struct Node *dummy = new Node(0); 
  
    //a pointer, tail is used to store the resultant list after merging.
    struct Node *tail = dummy;  

    while (1) {  
        //if either list runs out, we store all the nodes 
        //of other list in link part of tail node.
        if (head1 == NULL) {  
            tail->next = head2;  
            break;  
        }  
        else if (head2 == NULL) {  
            tail->next = head1;  
            break;  
        }
        //comparing the data of the two lists and storing the node with smaller
        //data in link part of the tail node.
        if (head1->data <= head2->data){
            tail->next = head1;
            //if data in first list is smaller, we move to the next node in it.
            head1 = head1->next;
        }
        else{
            tail->next = head2;
            //if data in second list is smaller, we move to the next node in it.
            head2 = head2->next;
        }
        //moving to the next node.
        tail = tail->next;  
    }
    //returning the merged list attached to dummy.
    return dummy->next;  
}  
/*Time complexity O(n+m)
  Auxilary space O(1) */
