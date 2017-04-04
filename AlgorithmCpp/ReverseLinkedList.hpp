//
//  ReverseLinkedList.hpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/1/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#ifndef ReverseLinkedList_hpp
#define ReverseLinkedList_hpp

#include <stdio.h>
#include <iostream>
#include "ListNode.h"

ListNode<int> *ReverseLinkedList(ListNode<int> *head);
ListNode<int> *ReverseLinkedListRe(ListNode<int> *head);
ListNode<int> *ReverseSubLinkedList(ListNode<int> *head, int start, int end);
ListNode<int> *ReverseSubLinkedList2(ListNode<int> *head, int start, int end);

#endif /* ReverseLinkedList_hpp */
