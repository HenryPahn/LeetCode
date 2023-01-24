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

void reorderList(ListNode* head) {
    ListNode* temp = head; 
    int size {};
    while(temp->next) {
        temp = temp->next; 
        size++;
    } 
    for(int i = size - 1; i > size / 2; i--) {
        ListNode* tempNode = temp; 
        temp = NULL;
        
    }
}

int main() {
    vector<int> vec{1,2,3,4}; 
    // vector<int> vec{1,2,3,4,5};
    ListNode* head = NULL;
    for(int i : vec) 
        head = Push_back(head, i);
    reorderList(head);
    display(haed);
    delete head; 
}

