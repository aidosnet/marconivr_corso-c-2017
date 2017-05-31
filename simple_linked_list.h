struct node_t {
	int value;
	struct node_t *next;
};

struct node_t *insert(struct node_t *list, int value);
void print(struct node_t *list);

