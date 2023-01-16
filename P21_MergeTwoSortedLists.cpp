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

// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//     ListNode* result = new ListNode; 
//     ListNode* index = result;
//     while(list1 && list2) {
//         if(list1->val < list2->val) {
//             index->next = list1; 
//             list1 = list1->next;
//         } else {
//             index->next = list2; 
//             list2 = list2->next;
//         }
//         index = index->next;
//     }
//     index->next = list1 ? list1 : list2;
//     return result->next;
// }

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(!list1) return list2;
    if(!list2) return list1; 
    if(list1->val < list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeTwoLists(list2->next, list1);
        return list2;
    }
}

int main() {
    vector<int> vec1{1,2,4}; 
    vector<int> vec2{1,3,4};
    // vector<int> vec{1,2};
    ListNode* list1 = NULL;
    ListNode* list2 = NULL;
    for(int i : vec1) 
        list1 = Push_back(list1, i);
    for(int i : vec2) 
        list2 = Push_back(list2, i);
    ListNode* temp = mergeTwoLists(list1,list2);
    display(temp);
    delete list1;
    delete list2;
    delete temp; 
    return 0;
}