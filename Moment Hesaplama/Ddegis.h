#ifndef Ddegis_h
#define Ddegis_h
class Ddegis{
	public:
	//Fonksiyonlarýn Saf Sanal Olarak Tanýmlanmasý
	virtual double radym()=0;
	virtual double rzgm()=0;
	virtual double dm()=0;
	virtual double moment()=0;
	//Deðiþkenlerin Tanýmlanmasý
	double R,hbatma,e,sty,hhobanustu,hhobanfider,sy;
	double DB;
	double MR,mrf,mrt,mrp,mrs;
	double mws,mwf,mwt,mwp,mwpn,mwd,mwfk;
	double mw,mp;
	double gk,gf,gt,gb,gd;
	double hz,d;
	double I,f,lf;
	double a,a1,a2;
	double ht,hf,hp,hs,hpn,h;
	double trp,trs,trt,trf;
	double tfw,ttw,tpw,tsw,tpnw,wd,wfk;
	double mt;
};
#endif
