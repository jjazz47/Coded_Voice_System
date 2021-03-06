typedef struct node {
	struct node *next;
	void *data;
}NODE;

typedef struct {
	NODE *head;
	NODE *tail;
}QUEUE;

QUEUE *queue_init(void);
int enqueue(QUEUE *userQ, NODE *userNode);
NODE *dequeue(QUEUE *userQ);
int print_Queue(QUEUE *userQ);
int destroy_queue(QUEUE *userQ);