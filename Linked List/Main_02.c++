#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};

ListNode* mergeListNode(ListNode* list1, ListNode* list2){
    if(list1 == NULL)
        return list2;
    if(list2 == NULL)
        return list1;

    ListNode* dummy = new ListNode(-1);
    ListNode* temp =  dummy;

    while(list1 !=NULL && list2 != NULL){
        if(list1->val <= list2->val){
            temp->next = list1;
            list1 = list1->next;
        }else{
            temp->next = list2;
            list2 = list2->next;
        }
        temp=temp->next;
    }
    if(list1!=NULL)
        temp->next = list1;
    else
        temp->next = list2;
    
    return dummy->next;
}

void printHead(ListNode* head){
    while (head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}

int main(){
    // List Node 1st
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(3);

    // List Node 2nd
    ListNode* list2 = new ListNode(4);
    list2->next = new ListNode(5);
    list2->next->next = new ListNode(6);

    ListNode* result = mergeListNode(list1, list2);

    cout << "Merged List: ";

    printHead(result);

    return 0;

}