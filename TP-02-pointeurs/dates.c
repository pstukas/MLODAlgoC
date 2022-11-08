typedef enum{
    janvier=1,
    fevrier,
    mars,
    avril,
    mai,
    juin,
    juillet,
    aout,
    septembre,
    octobre,
    novembre,
    decembre
}mois;


typedef struct{
    int jour;
    mois mois;
    int annee;
}date;

date initialiseDate (date *d){
    date->jour=scanf(&d);
    date->mois=scanf(&d);
    date->annee=scanf(&d);
    
}

void afficheDate(Date *d){
    printf("%i %i %i\n", d->jour, d->mois, d->annee);
}

date creerDateParCopie (date *d){
    date d;
    initialiserDate(&d);
    return d;
}

date* NewDate()
{
    date *d = (date*) malloc(sizeof(date));
    intisaliseDate(d);
    return d;

}
