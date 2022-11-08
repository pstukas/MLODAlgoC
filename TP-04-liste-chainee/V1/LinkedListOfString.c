#include <LinkedList.h>
#include <stdlib.h>
#include <stdio.h>

typedef char* Element;

void afficheElement(Element e){
    printf("%s",(char*)e);
}

bool equalsElement(Element e1, Element e2){
    return strcmp((char*)e1,(char*)e2);
}

void detruireElement(Element e){
}
