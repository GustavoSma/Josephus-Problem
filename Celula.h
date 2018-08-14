#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED

class Celula {

	private:
	std::string info;
	Celula * prox;

	public:
	Celula(std::string n, Celula * p);
	std::string getInfo();
	void setInfo(std::string n);
	Celula * getProx();
	void setProx(Celula * p);
};

#endif // CELULA_H_INCLUDED
