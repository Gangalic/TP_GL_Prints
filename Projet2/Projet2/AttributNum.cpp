using namespace std;
#include <string>
#include "AttributNum.h"

AttributNum::AttributNum() {
#ifdef MAP
	cout << "Appel au constructeur par defaut de <AttributNum>" << endl;
#endif
}

AttributNum::AttributNum(string valInput, string name) {
#ifdef MAP
	cout << "Appel au constructeur de <AttributNum>" << endl;
#endif
	valeur = stod(valInput);
	nom = name;
}

void* AttributNum::getValue() {
	return &valeur;
}

AttributNum::~AttributNum() {
#ifdef MAP
	cout << "Appel au destructeur de <AttributNum>" << endl;
#endif
}