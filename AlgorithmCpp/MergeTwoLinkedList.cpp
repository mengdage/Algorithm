//
//  MergeTwoLinkedList.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/31/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "MergeTwoLinkedList.hpp"

ListNode<int>* MergeTwoLinkedList(ListNode<int> *L1, ListNode<int> *L2){
    ListNode<int> *dummy_head = new ListNode<int>();
    ListNode<int> *tail = dummy_head;
    while(L1 && L2){
        if(L1->data > L2->data){
            tail -> next = L2;
            tail = tail->next;
            L2 = L2->next;
        }
        else {
            tail -> next = L1;
            tail = tail->next;
            L1 = L1->next;
        }
    }
    
    tail->next = L1? L2 : L1;
    
    return dummy_head->next;
}
