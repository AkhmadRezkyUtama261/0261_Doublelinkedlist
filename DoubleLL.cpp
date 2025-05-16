// 0261_double linked list
#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    int noMhs;
    Node *next;
    node *prev;
};

class DoubleLinkedList
{
    private:
    Node *START;

    public:
    DoubleLinkedList()
    {
        START = NULL;
    }
void addNode()
{
    int nim;
    cout <<"\nEnter the roll number of the student: ";
    cin >> nim;

    //Step 1: Allocate memory for new node
    Node *newNode = new Node();

    //Step 2: Assign value to the data fields
    newNode->noMhs = nim;

    //Step 3: Insert at beginning if list is empty or nim is smallest
if (START == NULL || nim <= START->noMhs)
{
    if (START != NULL && nim == START->noMhs)
    {
        cout << "\nDuplicate number not allowed" << endl;
        return;
    }
    // step 4: newNode.next = START
    newNode->next = START;

    //step 5: STARt.prev = newNode (if START exists)
    if (START != NULL)
    START->prev = newNode;

    //step 6; newnode.prev = NULL
    newNode->prev = NULL;

    //step 7: START = newNode
    START = newNode;
    return;
}
// insert in between node
//Step 8: Locate position for insertion
Node *current = STAR;
while (current->next != NULL && current->next->noMhs < nim)
{
    current = current->next;
}
if (current->next != NULL && nim == current->next->noMhs)
{
    cout << "\nDuplicate roll numbers not allowed" << endl;
    return;
}

//step 9: Insert between current and current ->next
newNode->next = current->next; //step 9a; newNode.next = current.text
newNode->prev = current; //step 9b: newNode.Prev= current

//insert last node
if(current->next != NULL )
current->next->prev = newNode; // step 9c: current.next.prev = newNode
current->next = newNode; //step 9d: current.next = newNode
}


}