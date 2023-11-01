#include <iostream>
#include <string>

using namespace std;

// écrire la fonction sous_chaine(str,pos,len) qui
// retourne la sous-chaine de la chaine str qui commence
// a l'indice pos et compte len caractères. Si la longueur
// demandée est trop longue et dépasse de la chaine str,
// seule la partie de l'indice pos à la fin est retournée
//
// Vous pouvez uniquement utiliser la méthode length() et les
// opérateurs [] et += de la classe string.

string sous_chaine(string str, int pos, int len){
    string resultat;
    int taille_str = str.length();
    int compteur = 0;

    if(len>taille_str){
        len = taille_str;
    }
    if(pos>taille_str){
        return "";
    }

    for(int i = pos;compteur<len ; ++i){

        resultat+=str[i];
        compteur++;
    }

    return resultat;
}

int main() {

   cout << sous_chaine("hello",1,3) << endl;
   // affiche ell

   cout << sous_chaine("abcdef",3,2) << endl;
   // affiche de

   cout << sous_chaine("abcdef",2,7) << endl;
   // affiche cdef

   cout << sous_chaine("abcdef",20,7) << endl;
   // affiche une chaine vide
}