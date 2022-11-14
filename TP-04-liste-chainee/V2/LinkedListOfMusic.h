#include <LinkedList.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct music{
    char* Name;
    char* Artist;
    char* Album;
    char* Genre;
    int DiscNumber;
    int TrackNumber;
    int Year;
};

struct cellule_m{
    music mus;
    cellule_m* next;
};

typedef struct music Element;

typedef cellule_m* Liste;

// retourne vrai si l est vide et faux sinon
bool estVide(Liste l);

// créer une liste d'un seul élément contenant la valeur v
Liste creer(Element v);

// ajoute l'élément v en tete de la liste l
Liste ajoutTete(Element v, Liste l);

extern void afficheElement(Element e);
extern bool equalsElement (Element e1, Element e2);
extern void detruireElement(Element e);

// affiche tous les éléments de la liste l
// Attention, cette fonction doit être indépendante du type des éléments de la liste
// utiliser une fonction annexe affiche_element
// Attention la liste peut être vide !
// version itérative
void afficheListe_i(Liste l);

// version recursive
void afficheListe_r(Liste l);

// Détruit tous les éléments de la liste l
// version itérative
void detruire_i(Liste l);

// version récursive
void detruire_r(Liste l);

// retourne la liste dans laquelle l'élément v a été ajouté en fin
// version itérative
Liste ajoutFin_i(Element v, Liste l);

// version recursive
Liste ajoutFin_r(Element v, Liste l);

// Retourne un pointeur sur l'élément de la liste l contenant la valeur v ou NULL
// version itérative
Liste cherche_i(Element v,Liste l);

// version récursive
Liste cherche_r(Element v,Liste l);

// Retourne la liste modifiée dans la laquelle le premier élément ayant la valeur v a été supprimé
// ne fait rien si aucun élément possède cette valeur
// version itérative
Liste retirePremier_i(Element v, Liste l);

// version recursive
Liste retirePremier_r(Element v, Liste l);


void afficheEnvers_r(Liste l);