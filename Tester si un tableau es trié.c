#include<stdio.h>

//fonction pour verifier si un tableau est trie
int Est_Trie( int tab[], int Size){
	
	//parcourir le tableau a partir du 2eme element
	for(int i=1; i<Size; i++){
		//verifie si l'ement actuel est inferier aux precedent
		if(tab[i] < tab[i-1]){

			 return 0 ;// le tableau n'est pas trie
		}
	}

		return 1; // tableau est trie
}

int main(){

	int tab[100];
	int size;

	printf(" entrez la taille du tableau :");
	 scanf(" %d", &size);

	 //verifier si la taiulle est correct
	 if( size<= 0){
	 	 printf(" Taille invalide.\n");

	 	  return 1;
	 }

	 printf(" Entrez les element du tableau a trieer : \n.");
	   for(int i=0; i<size; i++){
	   	 printf("Element  %d : ", i+1);
	   	 scanf(" %d",&tab[i]);
	   }

	    //ont verifie si le tableau est trie
	   if(Est_Trie(tab, size)){
	   	 printf(" Tableau est trie.\n");
	   }else{
	   	  printf(" Tableau n'est pas trier.\n");
	   }

	   return 0;
}