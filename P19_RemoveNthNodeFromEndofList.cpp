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

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* fast = head;
    ListNode* slow = head;
    for(int i = 0; i < n; i++)
        fast = fast->next; 
    if(!fast) return head->next;
    while(fast->next) {
        fast = fast->next; 
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return head;
}

int main() {
    ListNode* head = NULL; 
    vector<int> vec {1,2, 3, 4, 5, 6}; int n = 4;
    for(auto i : vec) 
        head = Push_back(head, i);
    head = removeNthFromEnd(head, n);
    display(head);
}