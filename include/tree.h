#ifndef TREE_H 
#define TREE_H


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>


#define SPECIFICATOR "s"
typedef char* data_t;


struct node
{
    data_t data;      
    node*  left;    
    node*  right;   
};


struct tree
{
    size_t size;
    node*  root;
};


void  tree_ctor(tree** p_tree);

void tree_print(tree* p_tree, FILE* datafile);

void  tree_dtor(node* p_tree);

void  tree_dump(tree* p_tree);


#endif
