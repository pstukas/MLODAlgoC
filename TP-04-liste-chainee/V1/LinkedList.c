#include <LinkedList.h>
#include <stdlib.h>
#include <stdio.h>

#define TODO NULL;

// retourne vrai si l est vide et faux sinon
bool estVide(Liste l) {
	return l == NULL;
}

// créer une liste d'un seul élément contenant la valeur v
Liste creer(Element v){
	Liste L = malloc(sizeof(Cellule));
    L->val=v;
	L->suiv=NULL;
	return L;
}

// ajoute l'élément v en tete de la liste l
Liste ajoutTete(Element v, Liste l) {
	Liste L = creer(v);
	L->suiv=l;
	return L;
}


extern void afficheElement(Element e) {
	printf("%i ",e);
}

// affiche tous les éléments de la liste l
// Attention, cette fonction doit être indépendante du type des éléments de la liste
// utiliser une fonction annexe affiche_element
// Attention la liste peut être vide !
// version itérative
void afficheListe_i(Liste l){
	Liste p = l;
	while(!estVide(p)){

		afficheElement(l->val);
		p=p->suiv;
	    }
	printf("\n");
	}
	

// version recursive
void afficheListe_r(Liste l) {
	Liste p = l;
	if(!estVide(p)){
		afficheElement(p->val);
		afficheListe_r(p->suiv);
	}
	else{
		printf("\n");
	}
}

extern void detruireElement(Element e) {}

// Détruit tous les éléments de la liste l
// version itérative
void detruire_i(Liste l) {

}

// version récursive
void detruire_r(Liste l){
	if(!estVide(l)){
		detruireElement(l->val);
		detruire_r(l->suiv);
		free(l);
	}
}

// retourne la liste dans laquelle l'élément v a été ajouté en fin
// version itérative
Liste ajoutFin_i(Element v, Liste l) {
	return TODO;
}

// version recursive
Liste ajoutFin_r(Element v, Liste l) {
	if(estVide(l))
		return creer(v);
	else
	     l->suiv=ajoutFin_r(v,l->suiv);
    return l;
}
// rechainage


// compare deux elements
extern bool equalsElement(Element e1, Element e2){
	return e1 == e2;
}

// Retourne un pointeur sur l'élément de la liste l contenant la valeur v ou NULL
// version itérative
Liste cherche_i(Element v,Liste l) {
	Liste p = l;
		while(!estVide(l)&&!equalsElement(v,l->val)){
				p=p->suiv;
			}
		return p;
		
}

// version récursive
Liste cherche_r(Element v,Liste l) {
}

// Retourne la liste modifiée dans la laquelle le premier élément ayant la valeur v a été supprimé
// ne fait rien si aucun élément possède cette valeur
// version itérative
Liste retirePremier_i(Element v, Liste l) {
	if(equalsElement(l->val,v)){
		detruireElement(l->val);
		return l;
	}
	else{
		while(!estVide(l->suiv)){
			if(equalsElement(v,l->suiv->val)){
				l->suiv = l->suiv->suiv;
				detruireElement(l->suiv->val);
			}
		}
	}
	
	
	return TODO;
}


// version recursive
Liste retirePremier_r(Element v, Liste l) {

}


void afficheEnvers_r(Liste l) {
	if(!estVide(l)){
		if(!estVide(l->suiv)){
			afficheEnvers_r(l->suiv);
		}
		afficheElement(l->val);
		printf("");
	}


}