#ifndef AKINATOR_H
#define AKINATOR_H


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "parser.h"


typedef size_t error_t;

const size_t Q_MAX_LEN    = 30;
const size_t A_MAX_LEN    = 30;
const size_t YN_MAX_LEN   = 10;
const size_t MODE_MAX_LEN = 20;


const char yes[5]               = "+";
const char  no[5]               = "-";
const char datafile_begin[16]   = "tree";

void akinator(char* textfile_path);


enum errors
{
    OPEN_BRACKET_NOT_FOUND = 1 << 0,
};


enum mode
{
    GUESS           = 1,
    COMPARE         = 2,
    DEFINE          = 3,
    SAVE            = 4,
    EXIT            = 5,
    YOU_PUT_HUYNYA  = 6,
};


#endif