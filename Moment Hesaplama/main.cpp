#include <iostream>
#include "Direk.h"
#include "Ddegis.h"
#include "Dtp1.h"
#include "Dtp2.h"
using namespace std;
int main(){
	Ddegis *sptr;
	Direk dr;
	Dtp1 dtp1;
	Dtp2 dtp2;
	sptr=&dr;
	cout<<"*****Direk Boylari ve Hesaplanmis Momentler*****"<<endl;
	cout<<"Default Direk:"<<endl;
	cout<<"-----"<<endl;
	cout<<"Direk boyu="<<sptr->DB<<endl;
	cout<<"Radyal Moment="<<sptr->radym()<<endl;
	cout<<"Ruzgar Momenti Moment="<<sptr->rzgm()<<endl;
	cout<<"Dusey  Moment="<<sptr->dm()<<endl;
	cout<<"Toplam Moment="<<sptr->moment()<<endl;
	cout<<"**************************************"<<endl;
	sptr=&dtp1;
	cout<<"Tip 1 Direk:"<<endl;
	cout<<"-----"<<endl;
	cout<<"Direk boyu="<<sptr->DB<<endl;
	cout<<"Radyal Moment="<<sptr->radym()<<endl;
	cout<<"Ruzgar Momenti Moment="<<sptr->rzgm()<<endl;
	cout<<"Dusey  Moment="<<sptr->dm()<<endl;
	cout<<"Toplam Moment="<<sptr->moment()<<endl;
	cout<<"**************************************"<<endl;
	sptr=&dtp2;
	cout<<"Tip 2 Direk:"<<endl;
	cout<<"-----"<<endl;
	cout<<"Direk boyu="<<sptr->DB<<endl;
	cout<<"Radyal Moment="<<sptr->radym()<<endl;
	cout<<"Ruzgar Momenti Moment="<<sptr->rzgm()<<endl;
	cout<<"Dusey  Moment="<<sptr->dm()<<endl;
	cout<<"Toplam Moment="<<sptr->moment()<<endl;
	return 0;
}
