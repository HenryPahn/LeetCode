#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

struct ListNode {
    int val; 
    ListNode *next;
}; 

ListNode* CreateNode(int n) {
    ListNode* temp = new ListNode;
    temp->val = n; 
    temp->next = NULL;
    return temp;
}

ListNode* Push_back(ListNode* head, int n) {
    ListNode* value = CreateNode(n);
    if(!head) head = value; 
    else {
        ListNode* temp = head;
        while(temp->next != NULL)
            temp = temp->next; 
        temp->next = value;
    }
    return head;
}

void display(ListNode* head) {
    for(ListNode* i = head; head; i = i->next) 
        cout << i->val << " "; 
    cout << endl;
}

ListNode* reverseList(ListNode* head) {
    ListNode* current = head, *previousNode = NULL, *nextNode = NULL;
    while(current) {
        nextNode = current->next;
        current->next = previousNode; 
        previousNode = current; 
        current  = nextNode;
    }
    head = previousNode;
    return head;
}

int main() {
    vector<int> vec{1, 2, 3, 4, 5}; 
    // vector<int> vec{1,2};
    ListNode* head = NULL;
    for(int i : vec) 
        head = Push_back(head, i);
    head = reverseList(head);
    display(head); 
    delete head; 
    return 0;
}