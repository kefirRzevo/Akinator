#ifndef PARSER_H
#define PARSER_H


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include "tree.h"


void get_tree_text(size_t *const file_size, char* textfile_path, char** text_buff);

void parse(char* buff, tree* p_tree, char* end_file);


#endif