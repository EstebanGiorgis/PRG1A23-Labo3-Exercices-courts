#include <iostream>

using namespace std;

// ré-écrivez le code suivant sans utiliser les
// mots clés switch, break, continue et goto

int main() {

   while(true) {
      int n;
      cin >> n;
      cin.ignore(numeric_limits<streamsize>::max(),'\n');

      switch (n) {
         case 1 :
            cout << "1";
         case 3 :
            cout << "3";
            break;
         case 2 :
            cout << "2";
            continue;
         case 4 :
            cout << "4";
            return 0;
         default:
            cout << "D";
      }
      cout << endl;
   }


   /*
     int n;
     cin >> n;
     cin.ignore(numeric_limits<streamsize>::max(),'\n');

     if(n==1){
	cout << "13" << endl;
     }else if(n==2){
	cout << "2" << endl;
     }else if(n==3){
	cout << "3" << endl;
     }else if(n==4){
	cout << 4 << endl;
     }else{
	cout << "D" << endl;
     }
    */
}