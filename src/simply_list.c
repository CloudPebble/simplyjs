#include "simply_list.h"

void simply_list_init(SimplyListNode *node) {
	node->prev = NULL;
	node->next = NULL;
}

void simply_list_insert_before(SimplyListNode *node, SimplyListNode *inserted_node) {
	inserted_node->next = node;
	inserted_node->prev = node->prev;
	if(node->prev) {
		node->prev->next = inserted_node;
	}
	node->prev = inserted_node;
}

void simply_list_insert_after(SimplyListNode *node, SimplyListNode *inserted_node) {
	inserted_node->next = node->next;
	inserted_node->prev = node;
	if(node->next) {
		node->next->prev = inserted_node;
	}
	node->next = inserted_node;
}

SimplyListNode* simply_list_next(SimplyListNode* node) {
	if(node == NULL) {
		return NULL;
	}
	return node->next;
}

SimplyListNode* simply_list_prev(SimplyListNode* node) {
	if(node == NULL) {
		return NULL;
	}
	return node->prev;
}

void simply_list_remove_node(SimplyListNode* node) {
  if (node->next) {
    node->next->prev = node->prev;
  }
  if (node->prev) {
    node->prev->next = node->next;
  }
	node->next = NULL;
	node->prev = NULL;
}
