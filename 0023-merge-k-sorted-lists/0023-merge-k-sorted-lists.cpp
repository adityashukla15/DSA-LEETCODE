/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        // Min Heap
        auto cmp = [](ListNode* a, ListNode* b) {
            return a->val > b->val;
        };

        priority_queue<ListNode*, 
                       vector<ListNode*>, 
                       decltype(cmp)> pq(cmp);

        // Push first node of every list
        for (auto node : lists) {
            if (node != NULL) {
                pq.push(node);
            }
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while (!pq.empty()) {

            // Get smallest node
            ListNode* smallest = pq.top();
            pq.pop();

            // Attach to answer
            tail->next = smallest;
            tail = tail->next;

            // Push next node of extracted list
            if (smallest->next != NULL) {
                pq.push(smallest->next);
            }
        }

        ListNode* ans = dummy->next;
        delete dummy;

        return ans;
    }
};
