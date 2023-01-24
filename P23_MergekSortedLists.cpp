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

ListNode* mergeKLists(vector<ListNode*>& lists) {
    int length = lists.size();
    while(length > 1){
        for(int first = 0, second = 0; second < length; first++, second += 2){
            lists[first] = mergeTwoLists(lists[second], second < length - 1 ? lists[second + 1] : NULL);
        }
        length = (length % 2) + (length / 2);
    }
    return length ? lists[0] : NULL;
}

int main() {
    vector<ListNode*> lists; 
    vector<vector<int>> vec {{1,4,5},{1,3,4},{2,6}}; 
    for(int i = 0; i < vec.size(); i++) 
        for(int j = 0; j < vec[i].size(); j++) 
            lists[i] = Push_back(lists[i], vec[i][j]);
    cout << lists[0]->val;
    return 0;
}

