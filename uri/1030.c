#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct boolean {
  int x;
} bool;

struct node {
  int x;
  struct node *next;
  bool is_deleted;
};

// void printList(struct node *root) {
//
// }

struct node* addAfter(struct node *root, int x) {
  struct node *newNode = (struct node *) malloc( sizeof(struct node) );
  newNode->x = x;
  newNode->next = NULL;
  root->next = newNode;

  return newNode;
}

//does not consider case when list doesn't have item!
struct node* find(struct node *root, int x) {
  while(true) {
    if (x == root->x) return root;
    else root = root->next;
  }


}

void deleteAfter(struct node *root) {
  struct node *deleted = root->next;
  root->next = deleted->next;
  free(deleted);
}

int main() {
  int NC;
  scanf("%d", &NC);

  int i = 0;
  for(i = 0; i < NC; i++) {
    int n, k;
    scanf("%d %d", &n, &k);

    //Creating list of itens
    struct node *root;
    root = (struct node *) malloc( sizeof(struct node) );
    root->x = 1;
    root->next = NULL;
    root->is_deleted.x = false;

    struct node *aNode = NULL;
    for(int j = 2; j <= n; j++) {
      if(j==2) {
        aNode = addAfter(root, j);
      } else {
        addAfter(aNode, j);
      }
      printf("j = %d\n", j);
    }
    aNode->next = root;

    //starting simulation
    root = find(root, k);

    while(root->next != NULL) {
      for(int j = 0; j < k - 1; j++) {
        root = root->next;
        printf("Iteration %d\n", j);
      }

      deleteAfter(root->next);
    }

    printf("%d\n", root->x);
    free(root);

  }

  return 0;
}
