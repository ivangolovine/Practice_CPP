#include <iostream>
#include <vector>
using namespace std;

void insert(int val);

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

float num(ListNode* head){
    float ret = head -> val;
    while (head ->next){
        ret = ret * 2 + head ->next->val;
        head = head -> next;
    }
    return ret;
}

int main()
{
    ListNode* head = NULL;
    ListNode* second = NULL;
    ListNode* third = NULL;
    ListNode* fourth = NULL;
    ListNode* fifth = NULL;
    ListNode* sixth = NULL;
    ListNode* seventh = NULL;
    ListNode* eighth = NULL;

    // allocate 3 nodes in the heap
    head = new ListNode();
    second = new ListNode();
    third = new ListNode();
    fourth = new ListNode();
    fifth = new ListNode();
    sixth = new ListNode();
    seventh = new ListNode();
    eighth = new ListNode();
 //10101011
 //1 + 2 + 8 + 32 + 128 171
    head->val = 1; // assign data in first node
    head->next = second; // Link first node with second
 
    second->val = 0; // assign data to second node
    second->next = third;
 
    third->val = 1; // assign data to third node
    third->next = fourth;

    fourth->val = 0; // assign data to second node
    fourth->next = fifth;

    fifth->val = 1; // assign data to second node
    fifth->next = sixth;

    sixth->val = 0; // assign data to second node
    sixth->next = seventh;

    seventh->val = 1; // assign data to second node
    seventh->next = eighth;

    eighth->val = 1; // assign data to second node
    eighth->next = NULL;
    //printList(head);
    float x = num(head);
    cout << x << endl;
    return 0;
}

/*// inserting elements (At start of the list)
    void insert(int num)
    {
      ListNode* head;
      // make a new node
      ListNode* new_node = new ListNode;
      new_node->val = num;
      new_node->next = NULL;

      // If list is empty, make the new node, the head
      if (head == NULL)
        head = new_node;
      // else, make the new_node the head and its next, the previous
      // head
      else
      {
        new_node->next = head;
        head = new_node;
      }
    }*/