#include <iostream>
#include <unordered_set>
#include <set>

class Node {
public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

Node *removeDuplicates(Node *head) {

    std::unordered_set<int> st;

    Node *newHead = nullptr;
    Node *tail = nullptr;

    Node* curr = head;

    while(curr != nullptr) {

        if(st.find(curr->data) == st.end()) {

            Node *newNode = new Node(curr->data);

            if(newHead == nullptr) {
                newHead = newNode;
                tail = newHead;
            }else {
                tail->next = newNode;
                tail = newNode;
            }
            st.insert(curr->data);
        }
        curr = curr->next;
    }

    return newHead;
}
int main() {

}