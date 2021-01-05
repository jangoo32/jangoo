/*mohammed adam
second class
computer eng
*/
#include<iostream>
#include<stdlib.h>
/*This header defines several general purpose functions, including dynamic memory management, random number generation, 
communication with the environment, integer arithmetics, searching, sorting and converting.*/
#include<string>
using namespace std;
struct node
// Create node and add it onto the linked list
{
  string name, mumber;
  node *next;
};
node *head =NULL , *newnode, *temp;
int len = 0;
void C_node ()
/*pointer types within my implementation files for the function and it doesn't give me any trouble ...*/
{
    newnode = new node;
    cout<<"enter the name= ";
    cin>>newnode ->name;
    cout<<"enter the number= ";
    cin>>newnode ->mumber;
    newnode ->next =NULL;
    if (head == NULL)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp-> next= newnode;
        temp = newnode;
    }
    

}
                        ////function display
void display ()
{
    if (head == NULL)
    {
        cout<<"contact list is empty"<<endl;

    }
    else
    {
        node *trav = head;
        while (trav != NULL)
        {
            cout<<"\n\tfull name "<< trav-> name<<endl;
            cout<< "\n\tphone number "<<trav ->mumber<<endl;
            trav = trav -> next;
            len++;
        } 
        cout<<"total contacts in the list = "<<len<<endl;
        
    }
    
}
                     ////function search
void search_contact ()
{
    node *search_node = head;
    string srch;
    int count = 1;
    cout<<"enter your desired contact you want to search"<<endl;
    cin>>srch;
    bool found = true;
    if (head == NULL)
    {
        cout<<"\nlist is empty"<<endl;
    }
    else
    {
        while (search_node != NULL)
        {
            if (srch == search_node -> name || srch == search_node -> mumber)
            {
                cout<< "\n\tfull name : "<<search_node -> name <<endl;
                cout<< "\n\tphone number : "<<search_node -> mumber <<endl;
                found = true;
                break;
            }
            search_node = search_node ->next;
            count++;
            
        }
        
    }
    if (found == true)
    {
        
        cout<< "\t\tindex of the contact = "<< count << endl;
    }
    else
    {
        cout<<"desired contact not found "<<endl;
    }
    
    
    
    
}
void at_given ()        ////deletion function
{
    int pos;
    node *next_node;
    temp = head;
    cout<<"enter your desired position form where you want to delete contact  "<<endl;
    cin>> pos;
    if (head == NULL)
    {
        cout<< "list is empty "<<endl;
    }
    else if (pos > len)
    {
        cout<<"invalid position "<<endl;
    }
    else if (pos == 0)
    {
        temp = head;
        head = head ->next;
        delete temp;
        cout<<"contact has been deleted "<<endl;
    }
    else
    {
        for (int  i = 1; i< pos; i++)
        {
            temp = temp ->next;
        }
        next_node = next_node ->next;
        temp->next = next_node ->next;
        delete next_node;
        cout<<"contact has been deleted "<<endl;
        
    }
    
   
}
                     ////function clear 
void clear_all ()
{
    if (head == NULL)
    {
        cout<<"the list is empty "<<endl;
    }
    else
    {
        temp = head;
        while (head != NULL)
        {
            head = head ->next;
            delete temp;
        }
        cout<<"\n\tall contact list has been deleted "<<endl;
        
    }
    
    
}
     ///the output of the projects
void menu ()
{
    cout<<"enter 1 to add contact "<<endl;
    cout<<"enter 2 to display all contact "<<endl;
    cout<<"enter 3 to search contact "<<endl;
    cout<<"enter 4 to delete contact from where you want "<<endl;
    cout<<"enter 5 to clear all record "<<endl;
}
int main ()
{
    int op;
    while (true)
    {
        menu (); 
        cin>>op;
        switch (op)
        {
        case 1:
            C_node ();
            break;
        case 2:
            len = 0;
            display();
            break;
        case 3:
            search_contact ();
            break;
        case 4:
            at_given ();
            break;    
        case 5:
            clear_all ();
            break;
        default:
            cout<<"invalid option "<<endl;

            break;
        }
       
    }
    

}