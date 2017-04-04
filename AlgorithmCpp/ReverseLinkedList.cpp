//
//  ReverseLinkedList.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/1/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "ReverseLinkedList.hpp"

ListNode<int> *ReverseLinkedList(ListNode<int> *head){

    ListNode<int> *prev = nullptr, *cur=head, *next=nullptr;
    
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    
    return prev;
}

ListNode<int> *ReverseLinkedListRe(ListNode<int> *head){
    ListNode<int> * newhead;
    if(head->next == nullptr) {
        return head;
    }
    
    newhead = ReverseLinkedList(head->next);
    head->next->next = head;
    head->next = nullptr;
    
    return newhead;
}

ListNode<int> *ReverseSubLinkedList(ListNode<int> *head, int start, int end){
    ListNode<int> *subListPredecessor=new ListNode<int>(), *subListItr=nullptr, *subListItrPrev=nullptr;
    subListPredecessor->next = head;
    if(start >= end)
        return head;
    // find the predecessor
    for(int i = 1; i < start; ++i){
        subListPredecessor = subListPredecessor->next;
    }
    subListItrPrev = subListPredecessor->next;
    subListItr = subListItrPrev->next;
    
    while(++start < end){
        auto tmp = subListItr->next;
        subListItr->next = subListItrPrev;
        subListItrPrev = subListItr;
        subListItr = tmp;
    }
    
    auto tmp = subListItr->next;
    subListItr->next = subListItrPrev;
    subListPredecessor->next->next = tmp;
    subListPredecessor->next = subListItr;
    
    return head;
}

ListNode<int> *ReverseSubLinkedList2(ListNode<int> *head, int start, int end) {
    if(start >= end) return head;
    
    // find the predecessor of the sub link list
    ListNode<int> *dummy_head = new ListNode<int>();
    dummy_head->next = head;
    ListNode<int> *subLinkedListPredecessor = dummy_head;
    // create a pointer to the first element of the sub link list
    for(int i =1; i< start; i++){
        subLinkedListPredecessor = subLinkedListPredecessor->next;
    }
    ListNode<int> *subItr = subLinkedListPredecessor->next;
    // while subItr not pointing to the last node in the sub linked list
    while(start++ < end){
        // put the node after the subItr after the sub header
        auto next = subItr->next;
        subItr->next = subItr->next->next;
        
        next->next = subLinkedListPredecessor->next;
        subLinkedListPredecessor->next = next;
        
    }
    return dummy_head->next;
    
}
