#include <LinkedList.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
Liste l;

l = NULL;

l = ajoutTete ("cacahuetes",l);
l = ajoutTete ("des", l);
l = ajoutTete ("mange", l);
l= ajoutTete ("je", l);

afficheListe_i(l);

detruire_r(l);
}