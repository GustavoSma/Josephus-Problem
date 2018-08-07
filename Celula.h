#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED

class Celula {

	private:
	int info;
	Celula * prox;

	public:
	Celula(int n, Celula * p);
	int  getInfo();
	void setInfo(int n);
	Celula * getProx();
	void setProx(Celula * p);
};

#endif // CELULA_H_INCLUDED
