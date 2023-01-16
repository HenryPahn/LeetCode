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
    for(ListNode* i = head; head != NULL; i = i->next) 
        cout << i->val << " "; 
    cout << endl;
}

bool hasCycle(ListNode *head) {       
    ListNode *first = head; 
    ListNode *second = head;
    while(first && first->next) {
        first = first->next->next; 
        second = second->next;
        if(first == second) return 1;
    }        
    return 0;
}

int main() {
    vector<int> vec{3,2,0,-4}; 
    // vector<int> vec{1,2};
    ListNode* head = NULL;
    for(int i : vec) 
        head = Push_back(head, i);
    cout << hasCycle(head);

    delete head; 
    return 0;
}