/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: López García, Víctor LOGIN 1: victor.lopezg@udc.es
 * AUTHOR 2: García Iglesias, Iago LOGIN 1: iago.garcia.iglesias@udc.es
 * GROUP: 2.4
 * DATE: ** / ** / **
 */

#ifndef STATIC_LIST_H
#define STATIC_LIST_H
#define MAX_ELEMENTOS 25
#define LNULL -1

#include "types.h"

typedef int tPosL;

typedef struct tList{
    tItemL usuarios[MAX_ELEMENTOS];
    tPosL posicion[MAX_ELEMENTOS];
}tList;

void createEmptyList(tList L);
bool isEmptyList(tList L);
tPosL first(tList L) ;
tPosL last(tList L);
tPosL next(tPosL p, tList L);
tPosL previous(tPosL p, tList L);
bool insertItem(tItemL d, tPosL p, tList L);
void deleteAtPosition(tPosL p, tList L);
tItemL getItem(tPosL p, tList L);
void updateItem(tItemL d , tPosL p, tList L);
tPosL findItem(tItemL d, tList L);


#endif
