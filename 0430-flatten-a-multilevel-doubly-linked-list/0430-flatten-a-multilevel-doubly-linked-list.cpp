class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr)
            return head;

        Node* curr = head;

        while (curr != nullptr) {

            if (curr->child != nullptr) {

                Node* next = curr->next;
                Node* child = curr->child;

                // Connect current node to child
                curr->next = child;
                child->prev = curr;

                // Find the end of child list
                Node* temp = child;

                while (temp->next != nullptr) {
                    temp = temp->next;
                }

                // Connect child list to original next
                temp->next = next;

                if (next != nullptr)
                    next->prev = temp;

                // Remove child pointer
                curr->child = nullptr;
            }

            curr = curr->next;
        }

        return head;
    }
};