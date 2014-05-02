// Have I mentioned how much I hate reinventing this wheel?

#include <pebble.h>

typedef struct SimplyListNode {
	struct SimplyListNode *prev;
	struct SimplyListNode *next;
} SimplyListNode;

void simply_list_init(SimplyListNode *node);

void simply_list_insert_before(SimplyListNode *node, SimplyListNode *inserted_node);

void simply_list_insert_after(SimplyListNode *node, SimplyListNode *inserted_node);

SimplyListNode* simply_list_next(SimplyListNode* node);

SimplyListNode* simply_list_prev(SimplyListNode* node);

void simply_list_remove_node(SimplyListNode* node);