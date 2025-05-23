/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: López García, Víctor LOGIN 1: victor.lopezg@udc.es
 * AUTHOR 2: García Iglesias, Iago LOGIN 2: iago.garcia.iglesias@udc.es
 * GROUP: 2.4
 * DATE: 26 / 02 / 24
 */

#include "static_list.h"

void createEmptyList(tList *L){
    L->ultPos = LNULL;
}

bool isEmptyList(tList L){
    if(L.ultPos == LNULL) return true;
    else return false;
}

tPosL first(tList L){
    if (!isEmptyList(L)){
        return 0;
    }
    return LNULL;
}

tPosL last(tList L){
    return L.ultPos;
}
tPosL next(tPosL p, tList L){
    if(p > LNULL && p < L.ultPos){
        return p+1;
    }
    return LNULL;
}


tPosL previous(tPosL p, tList L){
    if(p > 0 && p <= L.ultPos){
        return p-1;
    }
    return LNULL;
}

bool insertItem(tItemL d, tPosL p, tList *L){
    if(p >= LNULL && p < MAX_ELEMENTOS && L -> ultPos < MAX_ELEMENTOS-1)
    {
        if(p == LNULL || p > L -> ultPos)
        {
            L -> usuarios[L -> ultPos+1] = d;
            L -> ultPos++;
            return true;
        }
        else {
            for (int i = L -> ultPos; i >= p ; --i) {
                L -> usuarios[i+1] = L -> usuarios[i];
            }
            L -> usuarios[p] = d;
            L -> ultPos++;
            return true;
        }
    }
    else return false;


}
void deleteAtPosition(tPosL p, tList *L){
    if (p <= L -> ultPos && p > LNULL){
        for (int i = p; i < L -> ultPos; ++i) {
            L -> usuarios[i]=L -> usuarios[i+1];
        }
        L -> ultPos--;
    }
}
tItemL getItem(tPosL p, tList L){
    if (p <= L.ultPos && p > LNULL){
        return L.usuarios[p];
    }
}
void updateItem(tItemL d , tPosL p, tList *L){
    if (p <= L -> ultPos && p > LNULL){
        L -> usuarios[p] = d;
    }
}
tPosL findItem(tUserName d, tList L){
    tPosL i;
    if(!isEmptyList(L)){
        for (i = 0; i <= L.ultPos; ++i) {
            if(strcmp(d,L.usuarios[i].userName)==0)
            {
                return i;
            }
        }
    }
    return LNULL;
}

/* Write your code here... */
