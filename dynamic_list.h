/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: López García, Víctor LOGIN 1: victor.lopezg@udc.es
 * AUTHOR 2: García Iglesias, Iago LOGIN 2: iago.garcia.iglesias@udc.es
 * GROUP: 2.4
 * DATE: 11 / 03 / 24
 */

#ifndef DYNAMIC_LIST_H
#define DYNAMIC_LIST_H
#define LNULL NULL


#include "types.h"
#include <stdlib.h>

typedef struct Node *tPosL;
typedef struct Node{
    tItemL data;
    tPosL next;
}Node;

typedef tPosL tList;

void createEmptyList(tList *L);
bool isEmptyList(tList L);
tPosL first(tList L) ;
tPosL last(tList L);
tPosL next(tPosL p, tList L);
tPosL previous(tPosL p, tList L);
bool insertItem(tItemL d, tPosL p, tList *L);
void deleteAtPosition(tPosL p, tList *L);
tItemL getItem(tPosL p, tList L);
void updateItem(tItemL d , tPosL p, tList *L);
tPosL findItem(tUserName d, tList L);

#endif
