#include <LinkedListofMusic.h>

int main (void){
    FILE * spit = fopen("music.csv", 'r');

     while (fgets(ligne,200,f) != NULL) {
        ligneextraite = strdup(ligne);
       listemusique[i].name = strsep(&ligneextraite,",");
        listemusique[i].artiste = strsep(&ligneextraite,",");
        listemusique[i].album = strsep(&ligneextraite,",");
        listemusique[i].genre = strsep(&ligneextraite,",");
        listemusique[i].number = atoi(strsep(&ligneextraite,","));
        listemusique[i].tracknumber = atoi( strsep(&ligneextraite,",") );
        listemusique[i].year = atoi( strsep(&ligneextraite,",") );
        liste = ajoutFin_r(&(listemusique[i]), liste);
        i++;
    }

}