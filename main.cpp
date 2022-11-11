#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
  int a,b,c;
cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
   cout << "Area triangolo : " << ((a*b)/2) << endl;
   cout << "Area quadrato : " << (a*a) << endl;
   cout << "Area rettangolo : " << (a*b) << endl;
   cout << "Area trapezio : " << (((a+b)*c)/2) << endl;
 
  return 0;
}
