// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// class LinkedList
// {
// public:
//     void LinkedListTraversal(Node *head)
//     {
//         while (head != NULL)
//         {
//             cout << "Element=" << head->data << endl;
//             head = head->next;
//         }
//     }
//     Node *insertAtFirst(Node *head, int data)
//     {
//         Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//         newNode->data = data;
//         newNode->next = head;
//         return newNode;
//     }
//     Node *insertAtEnd(Node *head, int data)
//     {
//         Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//         newNode->data = data;
//         Node *temp = head;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = NULL;

//         return head;
//     }
//     Node *insertAtAnyIndex(Node *head, int data, int index)
//     {
//         Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//         newNode->data = data;
//         Node *temp = head;
//         int i=0;
//         while (i!=index-1)
//         {
            
//             temp = temp->next;
//             i++;
//         }
//         newNode->next = temp->next;
//         temp->next = newNode;
        

//         return head;
//     }
// };

// int main()
// {
//     LinkedList l1;
//     Node *head;
//     Node *second;
//     Node *third;
//     Node *fourth;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));
//     head->data = 11;
//     head->next = second;
//     second->data = 21;
//     second->next = third;
//     third->data = 51;
//     third->next = fourth;
//     fourth->data = 21;
//     fourth->next = NULL;
//     l1.LinkedListTraversal(head);
//     cout << endl;
//     // head=l1.insertAtFirst(head,34);
//     //  l1.LinkedListTraversal(head);
//     // head=l1.insertAtEnd(head,34);
//     //  l1.LinkedListTraversal(head);
//     head = l1.insertAtAnyIndex(head, 34, 2);
//     l1.LinkedListTraversal(head);

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 17, 3, 9, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max1 = arr[0];
    int max2 = arr[1];

    if (max2 > max1) {
        swap(max1, max2);
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    cout << "The second greatest element in the array is: " << max2 << endl;

    return 0;
}
