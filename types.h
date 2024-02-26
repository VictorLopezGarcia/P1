/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: López García, Víctor LOGIN 1: victor.lopezg@udc.es
 * AUTHOR 2: García Iglesias, Iago LOGIN 1: iago.garcia.iglesias@udc.es
 * GROUP: 2.4
 * DATE: 26 / 02 / 24
 */

#ifndef PRO2_2023_P1_TYPES_H
#define PRO2_2023_P1_TYPES_H


#define NAME_LENGTH_LIMIT 25
#include <stdbool.h>
#include <string.h>

typedef char tUserName[NAME_LENGTH_LIMIT];
typedef char tSongTitle[NAME_LENGTH_LIMIT];
typedef int tNumPlay;

typedef enum {basic, pro} tUserCategory;

typedef struct tItemL {
    tUserName userName;
    tNumPlay numPlay;
    tUserCategory userCategory;
} tItemL;

typedef struct tSong{
    tSongTitle songTitle;
} tSong;

#endif //PRO2_2023_P1_TYPES_H
