#if ! defined (AttributID_H)
#define AttributID_H
#include "Attribut.h"

class AttributID : public Attribut {

public:

	AttributID(string valInput, string name);
	void* getValue();
	~AttributID();

protected:
	int valeur;
};

#endif