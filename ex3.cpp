#include <iostream>
#include <string>

using namespace std;

// écrire la fonction plus_petite_lettre(str) qui retourne
// le plus petite caractère (au sens du code ASCII) de la chaine
// str. Si cette lettre apparait plusieurs fois c'est la
// dernière instance qui doit être retournée.

char& plus_petite_lettre(string& sRef){

    int index;
    int taille = sRef.length();
    int compteur = 0;

    for(int i = 1; i<taille;++i){
        if(sRef[compteur]<sRef[i]){
            index=compteur;
        }else{
            compteur++;
            i=compteur+1;
        }

    }

    return sRef[index];
}

int main() {

   string s{"wisigoth"};
   plus_petite_lettre(s) = '*';
   cout << s << endl;
   // affiche wisi*oth

   s = "abraracourcix";
   plus_petite_lettre(s) = '*';
   cout << s << endl;
   // affiche abrar*courcix
}