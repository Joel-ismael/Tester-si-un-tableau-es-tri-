Description du Code

     Ce programme en langage C vérifie si un tableau d'entiers est trié en ordre croissant. Il permet à l'utilisateur de saisir la taille du tableau ainsi que les éléments du tableau, puis il effectue la vérification.
Structure du Code
1. Inclusion de la Bibliothèque Standard
  #include<stdio.h>
Cette ligne inclut la bibliothèque standard d'entrée/sortie (stdio.h), qui permet d'utiliser les fonctions printf et scanf pour afficher des messages à l'écran et lire les entrées de l'utilisateur.
2. Fonction Est_Trie
// fonction pour verifier si un tableau est trie
int Est_Trie(int tab[], int Size) {
•	Déclaration de la Fonction : La fonction Est_Trie prend en entrée un tableau d'entiers (tab[]) et un entier (Size) représentant la taille du tableau. Elle renvoie 1 si le tableau est trié et 0 sinon.
2.1 Parcours du Tableau
    // parcourir le tableau a partir du 2eme element
    for(int i = 1; i < Size; i++) {
•	Boucle for : Cette boucle commence à l'indice 1 (le deuxième élément) et continue jusqu'à Size - 1. Elle compare chaque élément avec le précédent.
2.2 Vérification de l'Ordre
        // verifie si l'element actuel est inferieur aux precedent
        if(tab[i] < tab[i - 1]) {
•	Condition if : Vérifie si l'élément courant (tab[i]) est inférieur à l'élément précédent (tab[i - 1]). Si c'est le cas, cela signifie que le tableau n'est pas trié.
2.3 Retour de la Fonction
            return 0; // le tableau n'est pas trie
•	Retour 0 : Si la condition de tri est violée, la fonction retourne 0.
    }
    return 1; // tableau est trie
•	Retour 1 : Si la boucle se termine sans violations, la fonction retourne 1, indiquant que le tableau est trié.
3. Fonction Principale main
int main() {
•	Point d'Entrée : La fonction main est le point d'entrée du programme.
3.1 Déclaration des Variables
    int tab[100];
    int size;
•	Tableau et Taille : Déclare un tableau d'entiers de taille 100 pour stocker les éléments et une variable size pour stocker la taille du tableau.
3.2 Demande de Taille du Tableau
    printf(" entrez la taille du tableau :");
    scanf(" %d", &size);
•	Lecture de la Taille : Affiche un message demandant à l'utilisateur d'entrer la taille du tableau et lit la valeur saisie.
3.3 Vérification de la Taille
    // verifier si la taille est correcte
    if(size <= 0) {
        printf(" Taille invalide.\n");
        return 1;
    }
•	Condition de Validité : Vérifie si la taille saisie est inférieure ou égale à 0. Si c'est le cas, affiche un message d'erreur et termine le programme.
3.4 Saisie des Éléments du Tableau
    printf(" Entrez les element du tableau a trier : \n.");
    for(int i = 0; i < size; i++) {
        printf("Element %d : ", i + 1);
        scanf(" %d", &tab[i]);
    }
•	Boucle pour Saisie : Demande à l'utilisateur de saisir les éléments du tableau dans une boucle. Chaque élément est stocké dans le tableau à l'indice correspondant.
3.5 Vérification du Tri
    // on verifie si le tableau est trie
    if(Est_Trie(tab, size)) {
        printf(" Tableau est trie.\n");
    } else {
        printf(" Tableau n'est pas trier.\n");
    }
•	Appel à la Fonction Est_Trie : Vérifie si le tableau est trié en appelant la fonction Est_Trie. Affiche le résultat de la vérification.
4. Fin du Programme
    return 0;
}
•	Retour 0 : Indique que le programme s'est terminé avec succès.

