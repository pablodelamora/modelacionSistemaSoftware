#include "Noticieros.h"

class Politico{
	string news;
	MVSNoticias* mvs;
	RadioFormula* radioformula;
	Televisa* televisa;
	TVAzteca* tvazteca;
	CNNNoticias* cnnNoticias;

public:

	typedef void(MVSNoticias::*ptrMVS)(string);
	typedef void(RadioFormula::*ptrRadioFormula)(string);
	typedef void(Televisa::*ptrTelevisa)(string);
	typedef void(TVAzteca::*ptrTVAzteca)(string);
	typedef void(CNNNoticias::*ptrcnnNoticias)(string);

};
