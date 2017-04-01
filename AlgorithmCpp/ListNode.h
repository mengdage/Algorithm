//
//  ListNode.h
//  AlgorithmCpp
//
//  Created by LinMeng on 3/31/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#ifndef ListNode_h
#define ListNode_h

template <typename T>
struct ListNode {
    
    T data;
    ListNode<T> *next;
};
#endif /* ListNode_h */
