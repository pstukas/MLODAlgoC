    # Description du projet

J'ai décidé de modifier le code du jeu floppy en essayant de modifier la vitesse du jeu en fonction du score. De plus, la taille du joueur est aléatoire à chaque début de partie et le score est multiplié en fonction de la taille choisie. J'ai ajouté une compétence de dash, l'oiseau fait un saut en avant quand on appuie sur la touche c, c'est disponible toutes les 5 secondes.

# Comment compiler

gcc -o floppy -Wall floppy.c -std=c99 /home/kb/Raylib.git/src/libraylib.a -lm -lrt -ldl -lX11 -IGL -Ipthread

# Comment exécuter

./floppy

# Comment utiliser le projet

Pour sauter utiliser la barre d'espace.

Pour effectuer un saut en avant appuyer sur 'C'.

# Extensions / améliorations possibles

On pourrait modifier la mecanique de dash en la mettant sur plusieurs frames pour que ce soit plus fluide, modifier le saut pour ressembler plus au jeu de base en modifiant une variable vitesse et non la position et en ajoutant de la gravité.