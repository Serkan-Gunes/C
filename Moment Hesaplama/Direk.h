#include "Ddegis.h"
class Direk:public Ddegis{
	public:
//Yapýcý fonksiyonun tanýmlanmasý ve deðerlerin atanmasý.
	Direk()
	{
	R=850,hbatma=1.60,e=0.65,sty=5.75,hhobanustu=2.60,hhobanfider=2.15,sy=1.40;
	DB=hbatma+e+sty+sy+hhobanustu;
	a=45;
	gk=69.89,gf=65.86,gt=32.02,gb=128.23,gd=60;
	d=0.32,hz=0.70;
	I=3.25;
	f=0.24;
	lf=1.40;
	hs=(sty+e);
	hp=(hs+sy);
	ht=(e+sty+sy-0.25);
	hf=(hp+hhobanfider);
	trf=((a*1500)/R);
	trt=((a*1100)/R);
	trp=(a*1200/R);
	trs=trp;
	hpn=hs+sy/2;
	h=DB-hbatma;
	tfw=43.164,ttw=34.650,tpw=24.948,tsw=29.070,tpnw=3.566,wfk=4.538;
	d=0.32;
	wd=23.1*d*h;
	}
//Saf sanal fonksiyon kullanýlarak deðiþken deðerlerinin atanmasý ve radyal momentin hesaplanmasý.
	double radym()
	{
	mrf=hf*trf;
	mrt=ht*trt;
	mrp=hp*trp;
	mrs=hs*trs;
	MR=mrf+mrt+mrp+mrs;
	return MR;
    }
//ruzgar momenti için gerekli deðerlerin deðiþkenlere atanmasý ve hesaplamanýn yapýlmasý
    double rzgm()
	{
		mwf=tfw*hf;
		mwt=ttw*ht;
		mwp=tpw*hp;
		mws=tsw*hs;
		mwpn=tpnw*hpn;
		mwd=wd*h/2;
		mwfk=wfk*(hf+hz/2);
		mw=mwf+mwt+mwp+mws+mwpn+mwd+mwfk;
		return mw;
	}
	double dm()
	{
	mp=gk*(I-f)+gd*(I/2)+(gf*lf)+(gt*d)+(gb*I);
	return mp;
	}
	double moment()
	{
		mt=(radym()+dm())*1.5+(rzgm()*1.3);
		return mt;
	}
};
