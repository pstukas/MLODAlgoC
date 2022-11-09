#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define CHUNK_SIZE_MAX 5

struct chunk_s {
    char* chunk;
    struct chunk_s* next;
    int chunkSize;
};

typedef struct chunk_s Chunk;

typedef Chunk* String;

estVide(String s){
    return s==NULL;
}

String string_new(char* c){
    String s = malloc(sizeof(Chunk));
    s->chunk = c;
    s->next = NULL;
    s->chunkSize = sizeof(c);
}

void afficher_chunk (char* ch){
    printf('%c',ch);
}

void afficher_string (String s){
    while(!estVide(s)){
        afficher_chunk(s->chunk);
        s=s->next;
    }
}

int string_length(String s){
    int res;
    while(!estVide(s)){
        res+=s->chunkSize;
        s=s->next;
    }
    return res;
}

//String string_insert_at(String s, int pos, char* c){
//    String res;
//    while(s->chunkSize<pos){
//        pos=pos-(s->chunkSize);
//        s=s->next;
//    }
//    int t=sizeof(c);
//    struct chunk_s* chunkfinal= s->next;
//    while(t>CHUNK_SIZE_MAX){
//        s->next=
//        s->Chunk=
//    }
//}







