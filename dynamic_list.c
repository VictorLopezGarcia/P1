/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: López García, Víctor LOGIN 1: victor.lopezg@udc.es
 * AUTHOR 2: García Iglesias, Iago LOGIN 2: iago.garcia.iglesias@udc.es
 * GROUP: 2.4
 * DATE: 11 / 03 / 24
 */

#include "dynamic_list.h"

void createEmptyList(tList *L){ //Inicializa lista con primer nodo nulo
    *L = LNULL;
}
bool isEmptyList(tList L){ //Devuelve true si el primer nodo está vacio (lista vacía)
    return L == LNULL;
}

tPosL first(tList L){ //Devuelve el primer nodo
    return L;
}

tPosL last(tList L){ //recorre todos los nodos hasta encontrar el primero que no tenga hijo
    tPosL temp = L;
    while (temp->next != LNULL){
        temp = temp->next;
    }
    return temp;
}

tPosL next(tPosL p, tList L){ //Devuelve el hijo del nodo pasado
    return p->next;
}

tPosL previous(tPosL p, tList L){ //Recorre desde el nodo inicial hasta encontrar el nodo cuyo hijo concuerde con el posterior
    tPosL temp = L;
    while(temp->next !=p && temp!=LNULL){
        temp = temp->next;
    }
    return temp;
}

bool insertItem(tItemL d, tPosL p, tList *L){
    tPosL node = malloc(sizeof(struct Node)); //Asigna espacio de memoria para el nuevo item
    if(node == LNULL) return false;
    else{                                         // Añade el item en la posicion que le corresponde dependiendo de la pasada por parametro
        node -> data = d;
        node -> next = LNULL;
        if(isEmptyList(*L) ){
            *L = node;
        }
        else if(p==LNULL){
            last(*L)->next = node;
        }
        else{
            node-> data = p-> data;
            p -> data = d;
            node->next=p->next;
            p->next = node;
        }
        return true;
    }
}

void deleteAtPosition(tPosL p, tList *L){  //asigna al hijo del padre su propio hijo para no romper la cadena
    if(p==*L){
        *L = p->next;
    }
    else{
        previous(p, *L)->next = p->next;
    }
    free(p); //Posteriormente libera la memoria asignada a este item

}

tItemL getItem(tPosL p, tList L){
    return p->data; //Devuelve los datos del nodo pasado por parametro
}


void updateItem(tItemL d , tPosL p, tList *L){
    p->data = d;  //Actualiza los datos del nodo pasado por parametro
}


tPosL findItem(tUserName d, tList L) { //Recorre todos los items hasta encontrar el que coincida con el username pasado por parametro
    tPosL temp = L;
    while (temp != LNULL) {
        if (strcmp(temp->data.userName, d) == 0) {
            return temp;
        }
        temp = temp->next;
    }
    return LNULL;
}
