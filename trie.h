#ifndef _TRIE
#define _TRIE
#include <stdbool.h>


#define NUM_LETTERS 26

typedef struct node
{
    bool end_string;
    int count;
    struct node *next_char[NUM_LETTERS];
}node;

node* newNode();
void insert( node **head , char *str);
void PrintAll(node **root,char *word ,int index);
void PrintRev(node **root,char *word ,int index);
bool cast(char *word);
bool checkEmpty(node **root);
void frees(node **root);



#endif
