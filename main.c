#include <stdio.h>;
#include<stdlib.h>; /* Linked list node */
struct node {
    int data;
    struct node* next;
    };
    /* Function to create a new node with given data */
    struct node *getnode() {
        struct node *new_node = (struct node *) malloc(sizeof(struct node));


new_node->next = new_node;
return new_node;
}

/* Function to insert a node at the beginning of the single Linked List */
struct node* insert(struct node* head_ref, int new_data) { /* allocate node */
  struct node* new_node = getnode();
  new_node->data = new_data;
  if (head_ref->next == head_ref) {
    head_ref->next = new_node;
    new_node->next = head_ref;
  } else { /* link the old list off the new node */
    new_node->next = head_ref->next;
    head_ref->next = new_node;
  }
  return head_ref;
}

/* Adds contents of two linked lists and return the head node of resultant list
 */

struct Node* addTwoLists(struct node* first, struct node* second) {
  struct node* res = NULL;  // res is head node of the resultant list struct
                struct node* temp;            // node *temp, *prev = NULL; struct node *h1, *h2;
                            // int carry = 0, sum;
int h1,h2,sum,carry;
  res = getnode();
  res->data = 0;
  res->next = res;

  h1 = first;
  h2 = second;

  first = first->next;
  second = second->next;

  while (first != h1 || second != h2)  // while both lists exist { // Calculate
                                       // value of next digit in resultant list.
                                       // // The next digit is sum of following
                                       // things // (i) Carry // (ii) Next digit
                                       // of first list (if there is a next
                                       // digit) // (ii) Next digit of second
                                       // list (if there is a next digit)

    sum = carry + (first ? first->data : 0) + (second ? second->data : 0);



  if (carry > 0) {
    res = insert(res, carry);

                    while (temp != node) {
      printf("%d ", temp->data);
      temp = temp->next;
    }
    printf("\n");
  }

  int main(void) {
    char str1[100], str2[100];
    int i, num;
    struct node* res = NULL;
    struct node* first = NULL;
    struct node* second = NULL;
    first = getnode();
    first->data = 0;
    first->next = first;
    second = getnode();
    second->data = 0;
    second->next = second;
    printf("Enter string1");
    scanf("%s", str1);
    printf("Enter string 2");
    scanf("%s", str2);
    for (i = 0; i != strlen(str1); i++) {
      num = str1[i] - 48;
      first = insert(first, num);
    }
    printf("First list is :");
    printList(first);
    for (i = 0; i != strlen(str2); i++) {
      num = str2[i] - 48;
      second = insert(second, num);
    }
    printf("Second List is:");
    printList(second);

    // Add the two lists and see result res = addTwoLists(first, second);

    printf("Resultant list is ");

    printList(res);
    return 0;
  }
  }
