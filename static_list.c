/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: ***************************** LOGIN 1: **********
 * AUTHOR 2: ***************************** LOGIN 2: **********
 * GROUP: *.*
 * DATE: ** / ** / **
 */

#include "static_list.h"

void createEmptyList(tList L){
    for (int i = 0; i < MAX_ELEMENTOS; ++i) {
        L.posicion[i] = LNULL;
    }
}

bool isEmptyList(tList L){
    for (int i = 0; i < MAX_ELEMENTOS; ++i) {
        if(L.posicion[i] != LNULL)
        {
            return false;
        }
    }
    return true;
}

tPosL first(tList L){
    if (!isEmptyList(L)){
        for (int i = 0; i < MAX_ELEMENTOS; ++i) {
            if(L.posicion[i] != LNULL)
                return L.posicion[i];
        }
    }
    return LNULL;
}

tPosL last(tList L){
    if (!isEmptyList(L)){
        for (int i = MAX_ELEMENTOS-1; i >= 0; --i) {
            if(L.posicion[i] != LNULL)
                return L.posicion[i];
        }
    }
    return LNULL;
}
tPosL next(tPosL p, tList L){
    if(p != LNULL){
        for (int i = p+1; i < MAX_ELEMENTOS; ++i) {
            if(L.posicion[i] != LNULL)
                return L.posicion[i];
        }
    }
    return LNULL;
}


tPosL previous(tPosL p, tList L){
    if(p != LNULL){
        for (int i = p-1 ; i >= 0; --i) {
            if(L.posicion[i] != LNULL)
                return L.posicion[i];
        }
    }
    return LNULL;
}

bool insertItem(tItemL d, tPosL p, tList L){
    if(p >= MAX_ELEMENTOS || last(L) == MAX_ELEMENTOS) {
        return false;
    }
    else if(p == LNULL)
    {
        if(!isEmptyList(L))
        {
            L.usuarios[last(L)+1] = d;
            L.posicion[last(L)+1] = last(L)+1;
        }
        else {
            L.usuarios[0] = d;
            L.posicion[0] = 0;
        }
        return true;
    }
    if(L.posicion[p] == LNULL)
    {
        L.usuarios[p] = d;
        L.posicion[p] = p;
        return true;
    }
    else{
        for (int i = 0; i < MAX_ELEMENTOS; ++i) {
            
        }
    }
}
void deleteAtPosition(tPosL p, tList L);
tItemL getItem(tPosL p, tList L);
void updateItem(tItemL d , tPosL p, tList L);
tPosL findItem(tItemL d, tList L);

/* Write your code here... */
