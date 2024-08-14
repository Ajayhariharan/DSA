#include<iostream>
using namespace std;
class Node
{
public:
    int id,task;
    string name;
    Node * next;
};
Node * dis(Node * head)
{
    Node * curr=head;
    int i=0,i1;
    string n1;
    if(head!=NULL)
    {do
        {if(curr->task<curr->next->task)
            {i=curr->task;
            i1=curr->id;
            n1=curr->name;}
            curr=curr->next;
        }while(curr!=head);}
    cout<<"\nThe task time completed first is employee "<<n1<<","<<i1;
    cout<<"\n";
}
int main()
{
    Node * head = new Node();
    Node * fir = new Node();
    Node * sec = new Node();
    head->id=111;
    head->name="SHANE";
    head->task=4;
    head->next=fir;
    fir->id=222;
    fir->name="ROCKY";
    fir->task=2;
    fir->next=sec;
    sec->id=333;
    sec->name="KALI";
    sec->task=6;
    sec->next=head;
    cout<<"EMP ID : "<<head->id;
    cout<<"  name : "<<head->name;
    cout<<"  task time : "<<head->task;
    cout<<"\n";
    cout<<"EMP ID : "<<fir->id;
    cout<<"  name : "<<fir->name;
    cout<<"  task time : "<<fir->task;
    cout<<"\n";
    cout<<"EMP ID : "<<sec->id;
    cout<<"  name : "<<sec->name;
    cout<<"  task time : "<<sec->task;
    cout<<"\n";
    dis(head);
}

