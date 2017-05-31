#include <stdio.h>
#include <stdlib.h>
#include "simple_linked_list.h"

struct node_t *insert(struct node_t *list, int value) {
	struct node_t *node;
	node = (struct node_t *) malloc(sizeof(struct node_t));
	node->value = value;
	node->next = list;
	return node;
}

void print(struct node_t *list) {
	struct node_t *node = list;

	while(node != NULL) {
		printf("%d -> ", node->value);
		node = node->next;
	}
	printf("\n");
}

int main() {
	struct node_t *list = NULL;

	list = insert(list, 2);
	list = insert(list, 4);
	list = insert(list, 7);
	list = insert(list, 7);

	print(list);

	return 0;
}
