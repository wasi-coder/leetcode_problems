#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode (int x) :val(x),next (NULL ){}
};
class Solution {
    public:
        ListNode* addtwonumbers(ListNode* l1,ListNode* l2)
        {
            ListNode dummy (0);
            ListNode* current =  &dummy;
            int carry =0;

            while (l1 != nullptr || l2 !=nullptr ||carry>0)
            /* looping and adding the digits in to sum 
            so sum is== digit1 + digi2 + carry 
            carry = sum/10 
            we area adding from the right most bit first 
            which is the common eway of doing it so no need to reverse the lists 

            
            */
            {
                int sum = carry;
                 if (l1 !=nullptr){
                    sum+=l1->val;
                    l1 = l1->next;
                 }

                 if(l2 !=nullptr){
                    sum+= l2->val;
                    l2 = l2 ->next;
                 }

                 carry = sum/10;
                 current-> next = new ListNode(sum%10);
                 current = current->next;
            }
            return dummy.next;
        }
};

void printList(ListNode* node) {
    while (node != NULL) {
        cout << node->val;
        if (node->next) cout << " -> ";
        node = node->next;
    }
    cout << endl;
}
template <size_t  N>
ListNode* createList(int (&arr)[N]) {
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < N; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    int arr1[] = {2,4,0,9};
    int arr2[] = {5,4,4};

    ListNode* l1 = createList(arr1);
    ListNode* l2 = createList(arr2);

    Solution sol;
    ListNode* result = sol.addtwonumbers(l1, l2);

    cout << "Result: ";
    printList(result);  

    return 0;
}


/*  Dry Run of the Code
Setup

dummy(0) → dummy node to simplify list creation

current = &dummy

carry = 0

 Iteration 1

l1 = 2, l2 = 5, carry = 0

sum = 2 + 5 + 0 = 7

carry = 7 / 10 = 0

Create node with 7 % 10 = 7

 Result list so far: [7]
current now points to node 7.
Move l1 → 4, l2 → 6.

 Iteration 2

l1 = 4, l2 = 6, carry = 0

sum = 4 + 6 + 0 = 10

carry = 10 / 10 = 1

Create node with 10 % 10 = 0

 Result list so far: [7 -> 0]
current now points to node 0.
Move l1 → 3, l2 → 4.

Iteration 3

l1 = 3, l2 = 4, carry = 1

sum = 3 + 4 + 1 = 8

carry = 8 / 10 = 0

Create node with 8 % 10 = 8

Result list so far: [7 -> 0 -> 8]
current now points to node 8.
Move l1 → nullptr, l2 → nullptr.

Loop Ends

Both lists are nullptr and carry = 0, so we stop.
*/