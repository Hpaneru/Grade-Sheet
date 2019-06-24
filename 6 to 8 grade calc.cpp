#include<iostream>
//#include<conio.h>
using namespace std;
int main() {
	float nth, npr, eth, epr, mth, ssth, sspr, sth, spr, hth, hpr, cimth, cimpr, obtth, obtpr, cth, cpr, cnth, cnpr, ceth, cepr, cmth, cssth, csspr, csth, cspr, chth, chpr, ccimth, ccimpr, cobtth, cobtpr, ccth, ccpr, fgn, fge,
	fgm, fgss, fgs, fgh, fgcim, fgobt, fgc, gpn, gpe, gpm, gpss, gps, gph, gpcim, gpobt,gpc, gpa;
	cout<<"THIS SOFTWARE IS ONLY APPLICABLE FOR CLASS 6 TO CLASS 8"<<endl<<endl;
	cout<<"IF YOU WANT TO USE IT PRESS ANY KEY TO CONTINUE:- "<<endl<<endl;
	getch();
	cout<<"--------------------------------------------------------------------------------------"<<endl;
	cout<<"						WELCOME TO GRADE CALCULATION SOFTWARE"<<endl<<endl;
	cout<<"--------------------------------------------------------------------------------------"<<endl;
	cout<<"ENTER THE OBTAINED MARK ON SUBJECT NEPALI:-  \nTH= ";
	cin>>nth;
	cout<<"PR= ";
	cin>>npr;
	cout<<"ENTER THE OBTAINED MARK ON SUBJECT ENGLISH:-  \nTH= ";
	cin>>eth;
	cout<<"PR= ";
	cin>>epr;
	cout<<"ENTER THE OBTAINED MARK ON SUBJECT MATHEMATICS :-  \nTH= ";
	cin>>mth;
	cout<<"ENTER THE OBTAINED MARK ON SUBJECT SOCIAL STUDIES:-  \nTH= ";
	cin>>ssth;
	cout<<"PR= ";
	cin>>sspr;
	cout<<"ENTER THE OBTAINED MARK ON SUBJECT SCIENCE & POPULATION:-  \nTH= ";
	cin>>sth;
	cout<<"PR= ";
	cin>>spr;
	cout<<"ENTER THE OBTAINED MARK ON SUBJECT HEALTH & PHYSICAL EDU.:-  \nTH= ";
	cin>>hth;
	cout<<"PR= ";
	cin>>hpr;
	cout<<"ENTER THE OBTAINED MARK ON SUBJECT CIVIC & MORAL:-  \nTH= ";
	cin>>cimth;
	cout<<"PR= ";
	cin>>cimpr;
	cout<<"ENTER THE OBTAINED MARK ON SUBJECT O.B.T:-  \nTH= ";
	cin>>obtth;
	cout<<"PR= ";
	cin>>obtpr;
	cout<<"ENTER THE OBTAINED MARK ON SUBJECT COMPUTER:-  \nTH= ";
	cin>>cth;
	cout<<"PR= ";
	cin>>cpr;
	//converting the mark on garde as:- 
	cnth=(nth/75)*100;//th of eng
	cnpr=(npr/25)*100;
	ceth=(eth/75)*100;
	cepr=(epr/25)*100;
	cmth=(mth/100)*100;
	cssth=(ssth/75)*100;
	csspr=(sspr/25)*100;
	csth=(sth/75)*100;
	cspr=(spr/25)*100;
	chth=(hth/30)*100;
	chpr=(hpr/20)*100;
	ccimth=(cimth/25)*100;
	ccimpr=(cimpr/25)*100;
	cobtth=(obtth/50)*100;
	cobtpr=(obtpr/50)*100;
	ccth=(cth/50)*100;
	ccpr=(cpr/50)*100;
	//final grade of all subjects as:- 
	fgn=(cnth+cnpr)/2;
	fge=(ceth+cepr)/2;
	fgm=cmth;
	fgss=(csth+cspr)/2;
	fgs=(csth+cspr)/2;
	fgh=(chth+chpr)/2;
	fgcim=(ccimth+ccimpr)/2;
	fgobt=(cobtth+cobtpr)/2;
	fgc=(ccth+ccpr)/2;
	//th of nepali....
	cout<<endl<<"CONVERTED MARKS ON GRADE:-------------";
	cout<<endl<<"NEPALI:- "<<endl;
	if (cnth>=90)
		cout<<"GRADE ON THEORY 'A+'";
		else if (cnth>=80)
		cout<<"GRADE ON THEORY 'A'";
		
		else if (cnth>=70)
		cout<<"GRADE ON THEORY 'B+'";
		
		else if (cnth>=60)
		cout<<"GRADE ON THEORY 'B'";
	
		else if (cnth>=50)
		cout<<"GRADE ON THEORY 'C+'";
	
		else if (cnth>=40)
		cout<<"GRADE ON THEORY 'C'";
		
		else if (cnth>=30)
		cout<<"GRADE ON THEORY 'D+'";
		
		else if (cnth>=20)
		cout<<"GRADE ON THEORY 'D'";
	
		else if (cnth>=10)
		cout<<"GRADE ON THEORY 'E'";
	//pr of nepali....
		if (cnpr>=90)
		cout<<endl<<"GRADE ON PRACTICAL 'A+'";
		else if (cnpr>=80)
		cout<<endl<<"GRADE ON PRACTICAL 'A'";
		
		else if (cnpr>=70)
		cout<<endl<<"GRADE ON PRACTICAL 'B+'";
		
		else if (cnpr>=60)
		cout<<endl<<"GRADE ON PRACTICAL 'B'";
	
		else if (cnpr>=50)
		cout<<endl<<"GRADE ON PRACTICAL 'C+'";
	
		else if (cnpr>=40)
		cout<<endl<<"GRADE ON PRACTICAL 'C'";
		
		else if (cnpr>=30)
		cout<<endl<<"GRADE ON PRACTICAL 'D+'";
		
		else if (cnpr>=20)
		cout<<endl<<"GRADE ON PRACTICAL 'D'";
	
		else if (cnpr>=10)
		cout<<endl<<"GRADE ON PRACTICAL 'E'";
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"ENGLISH:- "<<endl;//theory for  english
		if (ceth>=90)
		cout<<"GRADE ON THEORY 'A+'";
		
		else if (ceth>=80)
		cout<<"GRADE ON THEORY 'A'";
		
		else if (ceth>=70)
		cout<<"GRADE ON THEORY 'B+'";
		
		else if (ceth>=60)
		cout<<"GRADE ON THEORY 'B'";
	
		else if (ceth>=50)
		cout<<"GRADE ON THEORY 'C+'";
	
		else if (ceth>=40)
		cout<<"GRADE ON THEORY 'C'";
		
		else if (ceth>=30)
		cout<<"GRADE ON THEORY 'D+'";
		
		else if (ceth>=20)
		cout<<"GRADE ON THEORY 'D'";
	
		else if (ceth>=10)
		cout<<"GRADE ON THEORY 'E'";
	//pr of ENGLISH....
		if (cepr>=90)
		cout<<endl<<"GRADE ON PRACTICAL 'A+'";
	
		else if (cepr>=80)
		cout<<endl<<"GRADE ON PRACTICAL 'A'";
		
		else if (cepr>=70)
		cout<<endl<<"GRADE ON PRACTICAL 'B+'";
		
		else if (cepr>=60)
		cout<<endl<<"GRADE ON PRACTICAL 'B'";
	
		else if (cepr>=50)
		cout<<endl<<"GRADE ON PRACTICAL 'C+'";
	
		else if (cepr>=40)
		cout<<endl<<"GRADE ON PRACTICAL 'C'";
		
		else if (cepr>=30)
		cout<<endl<<"GRADE ON PRACTICAL 'D+'";
		
		else if (cepr>=20)
		cout<<endl<<"GRADE ON PRACTICAL 'D'";
	
		else if (cepr>=10)
		cout<<endl<<"GRADE ON PRACTICAL 'E'";
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"MATHEMATICS:- "<<endl;//theory for  MATHs
		if (cmth>=90)
		cout<<"GRADE ON THEORY 'A+'";
		
		else if (cmth>=80)
		cout<<"GRADE ON THEORY 'A'";
		
		else if (cmth>=70)
		cout<<"GRADE ON THEORY 'B+'";
		
		else if (cmth>=60)
		cout<<"GRADE ON THEORY 'B'";
	
		else if (cmth>=50)
		cout<<"GRADE ON THEORY 'C+'";
	
		else if (cmth>=40)
		cout<<"GRADE ON THEORY 'C'";
		
		else if (cmth>=30)
		cout<<"GRADE ON THEORY 'D+'";
		
		else if (cmth>=20)
		cout<<"GRADE ON THEORY 'D'";
	
		else if (cmth>=10)
		cout<<"GRADE ON THEORY 'E'";
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<endl<<"SOCIAL STUDIES:- "<<endl;//theory for  social
		if (cssth>=90)
		cout<<"GRADE ON THEORY 'A+'";
		
		else if (cssth>=80)
		cout<<"GRADE ON THEORY 'A'";
		
		else if (cssth>=70)
		cout<<"GRADE ON THEORY 'B+'";
		
		else if (cssth>=60)
		cout<<"GRADE ON THEORY 'B'";
	
		else if (cssth>=50)
		cout<<"GRADE ON THEORY 'C+'";
	
		else if (cssth>=40)
		cout<<"GRADE ON THEORY 'C'";
		
		else if (cssth>=30)
		cout<<"GRADE ON THEORY 'D+'";
		
		else if (cssth>=20)
		cout<<"GRADE ON THEORY 'D'";
	
		else if (cssth>=10)
		cout<<"GRADE ON THEORY 'E'";
	//pr of social....
		if (csspr>=90)
		cout<<endl<<"GRADE ON PRACTICAL 'A+'";
	
		else if (csspr>=80)
		cout<<endl<<"GRADE ON PRACTICAL 'A'";
		
		else if (csspr>=70)
		cout<<endl<<"GRADE ON PRACTICAL 'B+'";
		
		else if (csspr>=60)
		cout<<endl<<"GRADE ON PRACTICAL 'B'";
	
		else if (csspr>=50)
		cout<<endl<<"GRADE ON PRACTICAL 'C+'";
	
		else if (csspr>=40)
		cout<<endl<<"GRADE ON PRACTICAL 'C'";
		
		else if (csspr>=30)
		cout<<endl<<"GRADE ON PRACTICAL 'D+'";
		
		else if (csspr>=20)
		cout<<endl<<"GRADE ON PRACTICAL 'D'";
	
		else if (csspr>=10)
		cout<<endl<<"GRADE ON PRACTICAL 'E'";
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"SCIENCE:- "<<endl;//theory of science:- 
	if (csth>=90)
		cout<<"GRADE ON THEORY 'A+'";
		
		else if (csth>=80)
		cout<<"GRADE ON THEORY 'A'";
		
		else if (csth>=70)
		cout<<"GRADE ON THEORY 'B+'";
		
		else if (csth>=60)
		cout<<"GRADE ON THEORY 'B'";
	
		else if (csth>=50)
		cout<<"GRADE ON THEORY 'C+'";
	
		else if (csth>=40)
		cout<<"GRADE ON THEORY 'C'";
		
		else if (csth>=30)
		cout<<"GRADE ON THEORY 'D+'";
		
		else if (csth>=20)
		cout<<"GRADE ON THEORY 'D'";
	
		else if (csth>=10)
		cout<<"GRADE ON THEORY 'E'";
	//pr of science.....
		if (cspr>=90)
		cout<<endl<<"GRADE ON PRACTICAL 'A+'";
		
		else if (cspr>=80)
		cout<<endl<<"GRADE ON PRACTICAL 'A'";
		
		else if (cspr>=70)
		cout<<endl<<"GRADE ON PRACTICAL 'B+'";
		
		else if (cspr>=60)
		cout<<endl<<"GRADE ON PRACTICAL 'B'";
	
		else if (cspr>=50)
		cout<<endl<<"GRADE ON PRACTICAL 'C+'";
	
		else if (cspr>=40)
		cout<<endl<<"GRADE ON PRACTICAL 'C'";
		
		else if (cspr>=30)
		cout<<endl<<"GRADE ON PRACTICAL 'D+'";
		
		else if (cspr>=20)
		cout<<endl<<"GRADE ON PRACTICAL 'D'";
	
		else if (cspr>=10)
		cout<<endl<<"GRADE ON PRACTICAL 'E'";
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<endl<<"HEALTH:- "<<endl;//theory of HEALTH:- 
	if (chth>=90)
		cout<<"GRADE ON THEORY 'A+'";
		
		else if (chth>=80)
		cout<<"GRADE ON THEORY 'A'";
		
		else if (chth>=70)
		cout<<"GRADE ON THEORY 'B+'";
		
		else if (chth>=60)
		cout<<"GRADE ON THEORY 'B'";
	
		else if (chth>=50)
		cout<<"GRADE ON THEORY 'C+'";
	
		else if (chth>=40)
		cout<<"GRADE ON THEORY 'C'";
		
		else if (chth>=30)
		cout<<"GRADE ON THEORY 'D+'";
		
		else if (chth>=20)
		cout<<"GRADE ON THEORY 'D'";
	
		else if (chth>=10)
		cout<<"GRADE ON THEORY 'E'";
	//pr of health.....
		if (chpr>=90)
		cout<<endl<<"GRADE ON PRACTICAL 'A+'";
		
		else if (chpr>=80)
		cout<<endl<<"GRADE ON PRACTICAL 'A'";
		
		else if (chpr>=70)
		cout<<endl<<"GRADE ON PRACTICAL 'B+'";
		
		else if (chpr>=60)
		cout<<endl<<"GRADE ON PRACTICAL 'B'";
	
		else if (chpr>=50)
		cout<<endl<<"GRADE ON PRACTICAL 'C+'";
	
		else if (chpr>=40)
		cout<<endl<<"GRADE ON PRACTICAL 'C'";
		
		else if (chpr>=30)
		cout<<endl<<"GRADE ON PRACTICAL 'D+'";
		
		else if (chpr>=20)
		cout<<endl<<"GRADE ON PRACTICAL 'D'";
	
		else if (chpr>=10)
		cout<<endl<<"GRADE ON PRACTICAL 'E'";
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"CIVIC & MORAL:- ";//theory civic and moral
		if (ccimth>=90)
		cout<<endl<<"GRADE ON THEORY 'A+'";
		else if (ccimth>=80)
		cout<<endl<<"GRADE ON THEORY 'A'";
		
		else if (ccimth>=70)
		cout<<endl<<"GRADE ON THEORY 'B+'";
		
		else if (ccimth>=60)
		cout<<endl<<"GRADE ON THEORY 'B'";
	
		else if (ccimth>=50)
		cout<<endl<<"GRADE ON THEORY 'C+'";
	
		else if (ccimth>=40)
		cout<<endl<<"GRADE ON THEORY 'C'";
		
		else if (ccimth>=30)
		cout<<endl<<"GRADE ON THEORY 'D+'";
		
		else if (ccimth>=20)
		cout<<endl<<"GRADE ON THEORY 'D'";
	
		else if (ccimth>=10)
		cout<<endl<<"GRADE ON THEORY 'E'";
	//practical of civic and moral
		if (ccimpr>=90)
		cout<<endl<<"GRADE ON PRACTICAL 'A+'";
		else if (ccimpr>=80)
		cout<<endl<<"GRADE ON PRACTICAL 'A'";
		
		else if (ccimpr>=70)
		cout<<endl<<"GRADE ON PRACTICAL 'B+'";
		
		else if (ccimpr>=60)
		cout<<endl<<"GRADE ON PRACTICAL 'B'";
	
		else if (ccimpr>=50)
		cout<<endl<<"GRADE ON PRACTICAL 'C+'";
	
		else if (ccimpr>=40)
		cout<<endl<<"GRADE ON PRACTICAL 'C'";
		
		else if (ccimpr>=30)
		cout<<endl<<"GRADE ON PRACTICAL 'D+'";
		
		else if (ccimpr>=20)
		cout<<endl<<"GRADE ON PRACTICAL 'D'";
	
		else if (ccimpr>=10)
		cout<<endl<<"GRADE ON PRACTICAL 'E'";
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"O.B.T:- ";//theory O.B.T
		if (cobtth>=90)
		cout<<endl<<"GRADE ON THEORY 'A+'";
		else if (cobtth>=80)
		cout<<endl<<"GRADE ON THEORY 'A'";
		
		else if (cobtth>=70)
		cout<<endl<<"GRADE ON THEORY 'B+'";
		
		else if (cobtth>=60)
		cout<<endl<<"GRADE ON THEORY 'B'";
	
		else if (cobtth>=50)
		cout<<endl<<"GRADE ON THEORY 'C+'";
	
		else if (cobtth>=40)
		cout<<endl<<"GRADE ON THEORY 'C'";
		
		else if (cobtth>=30)
		cout<<endl<<"GRADE ON THEORY 'D+'";
		
		else if (cobtth>=20)
		cout<<endl<<"GRADE ON THEORY 'D'";
	
		else if (cobtth>=10)
		cout<<endl<<"GRADE ON THEORY 'E'";
	//practical of O.B.T
		if (cobtpr>=90)
		cout<<endl<<"GRADE ON PRACTICAL 'A+'";
		else if (cobtpr>=80)
		cout<<endl<<"GRADE ON PRACTICAL 'A'";
		
		else if (cobtpr>=70)
		cout<<endl<<"GRADE ON PRACTICAL 'B+'";
		
		else if (cobtpr>=60)
		cout<<endl<<"GRADE ON PRACTICAL 'B'";
	
		else if (cobtpr>=50)
		cout<<endl<<"GRADE ON PRACTICAL 'C+'";
	
		else if (cobtpr>=40)
		cout<<endl<<"GRADE ON PRACTICAL 'C'";
		
		else if (cobtpr>=30)
		cout<<endl<<"GRADE ON PRACTICAL 'D+'";
		
		else if (cobtpr>=20)
		cout<<endl<<"GRADE ON PRACTICAL 'D'";
	
		else if (cobtpr>=10)
		cout<<endl<<"GRADE ON PRACTICAL 'E'";
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<endl<<"COMPUTER:- "<<endl;//theory of computer:- 
	if (ccth>=90)
		cout<<"GRADE ON THEORY 'A+'";
		
		else if (ccth>=80)
		cout<<"GRADE ON THEORY 'A'";
		
		else if (ccth>=70)
		cout<<"GRADE ON THEORY 'B+'";
		
		else if (ccth>=60)
		cout<<"GRADE ON THEORY 'B'";
	
		else if (ccth>=50)
		cout<<"GRADE ON THEORY 'C+'";
	
		else if (ccth>=40)
		cout<<"GRADE ON THEORY 'C'";
		
		else if (ccth>=30)
		cout<<"GRADE ON THEORY 'D+'";
		
		else if (ccth>=20)
		cout<<"GRADE ON THEORY 'D'";
	
		else if (ccth>=10)
		cout<<"GRADE ON THEORY 'E'";
	//pr of computer..............................................................................
		if (ccpr>=90)
		cout<<endl<<"GRADE ON PRACTICAL 'A+'";
		
		else if (ccpr>=80)
		cout<<endl<<"GRADE ON PRACTICAL 'A'";
		
		else if (ccpr>=70)
		cout<<endl<<"GRADE ON PRACTICAL 'B+'";
		
		else if (ccpr>=60)
		cout<<endl<<"GRADE ON PRACTICAL 'B'";
	
		else if (ccpr>=50)
		cout<<endl<<"GRADE ON PRACTICAL 'C+'";
	
		else if (ccpr>=40)
		cout<<endl<<"GRADE ON PRACTICAL 'C'";
		
		else if (ccpr>=30)
		cout<<endl<<"GRADE ON PRACTICAL 'D+'";
		
		else if (ccpr>=20)
		cout<<endl<<"GRADE ON PRACTICAL 'D'";
	
		else if (ccpr>=10)
		cout<<endl<<"GRADE ON PRACTICAL 'E'";
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"FINAL GRADE:-----"<<endl;
	cout<<endl<<"NEPALI:- "<<endl;
	if (fgn>=90) {
		cout<<"FINAL GRADE IS 'A+'";
		gpn=4.0;
		}
		else if (fgn>=80) {
		cout<<"FINAL GRADE IS 'A'";
		gpn=3.6;
		}
		else if (fgn>=70) {
		cout<<"FINAL GRADE IS 'B+'";
		gpn=3.2;
		}
		else if (fgn>=60) {
		cout<<"FINAL GRADE IS 'B'";
		gpn=2.8;
		}
		else if (fgn>=50) {
		cout<<"FINAL GRADE IS 'C+'";
		gpn=2.4;
		}
		else if (fgn>=40) {
		cout<<"FINAL GRADE IS 'C'";
		gpn=2.0;
		}
		else if (fgn>=30) {
		cout<<"FINAL GRADE IS 'D+'";
		gpn=1.6;
		}
		else if (fgn>=20) {
		cout<<"FINAL GRADE IS 'D'";
		gpn=1.2;
		}
		else if (fgn>=10) {
		cout<<"FINAL GRADE IS 'E'";
		gpn=0.8;
		}
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"ENGLISH:- "<<endl;
	if (fge>=90) {
		cout<<"FINAL GRADE IS 'A+'";
		gpe=4.0;
		}
		else if (fge>=80) {
		cout<<"FINAL GRADE IS 'A'";
		gpe=3.6;
		}
		else if (fge>=70) {
		cout<<"FINAL GRADE IS 'B+'";
		gpe=3.2;
		}
		else if (fge>=60) {
		cout<<"FINAL GRADE IS 'B'";
		gpe=2.8;
		}
		else if (fge>=50) {
		cout<<"FINAL GRADE IS 'C+'";
		gpe=2.4;
		}
		else if (fge>=40) {
		cout<<"FINAL GRADE IS 'C'";
		gpe=2.0;
		}
		else if (fge>=30) {
		cout<<"FINAL GRADE IS 'D+'";
		gpe=1.6;
		}
		else if (fge>=20) {
		cout<<"FINAL GRADE IS 'D'";
		gpe=1.2;
		}
		else if (fge>=10) {
		cout<<"FINAL GRADE IS 'E'";
		gpe=0.8;
		}
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"MATHEMATICS:- "<<endl;
	if (fgm>=90) {
		cout<<"FINAL GRADE IS 'A+'";
		gpm=4.0;
		}
		else if (fgm>=80) {
		cout<<"GFINAL GRADE IS 'A'";
		gpm=3.6;
		}
		else if (fgm>=70) {
		cout<<"FINAL GRADE IS 'B+'";
		gpm=3.2;
		}
		else if (fgm>=60) {
		cout<<"FINAL GRADE IS 'B'";
		gpm=2.8;
		}
		else if (fgm>=50) {
		cout<<"FINAL GRADE IS 'C+'";
		gpm=2.4;
		}
		else if (fgm>=40) {
		cout<<"FINAL GRADE IS 'C'";
		gpm=2.0;
		}
		else if (fgm>=30) {
		cout<<"FINAL GRADE IS 'D+'";
		gpm=1.6;
		}
		else if (fgm>=20) {
		cout<<"FINAL GRADE IS 'D'";
		gpm=1.2;
		}
		else if (fgm>=10) {
		cout<<"FINAL GRADE IS 'E'";
		gpm=0.8;
		}
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"SOCIAL STUDIES:- "<<endl;
	if (fgss>=90) {
		cout<<"FINAL GRADE IS 'A+'";
		gpss=4.0;
		}
		else if (fgss>=80) {
		cout<<"FINAL GRADE IS 'A'";
		gpss=3.6;
		}
		else if (fgss>=70) {
		cout<<"FINAL GRADE IS 'B+'";
		gpss=3.2;
		}
		else if (fgss>=60) {
		cout<<"FINAL GRADE IS 'B'";
		gpss=2.8;
		}
		else if (fgss>=50) {
		cout<<"FINAL GRADE IS 'C+'";
		gpss=2.4;
		}
		else if (fgss>=40) {
		cout<<"FINAL GRADE IS 'C'";
		gpss=2.0;
		}
		else if (fgss>=30) {
		cout<<"FINAL GRADE IS 'D+'";
		gpss=1.6;
		}
		else if (fgss>=20) {
		cout<<"GFINAL GRADE IS 'D'";
		gpss=1.2;
		}
		else if (fgss>=10) {
		cout<<"FINAL GRADE IS 'E'";
		gpss=0.8;
		}
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"SCIENCE:- "<<endl;
	if (fgs>=90) {
		cout<<"FINAL GRADE IS 'A+'";
		gps=4.0;
		}
		else if (fgs>=80) {
		cout<<"FINAL GRADE IS 'A'";
		gps=3.6;
		}
		else if (fgs>=70) {
		cout<<"FINAL GRADE IS 'B+'";
		gps=3.2;
		}
		else if (fgs>=60) {
		cout<<"FINAL GRADE IS 'B'";
		gps=2.8;
		}
		else if (fgs>=50) {
		cout<<"FINAL GRADE IS 'C+'";
		gps=2.4;
		}
		else if (fgs>=40) {
		cout<<"FINAL GRADE IS 'C'";
		gps=2.0;
		}
		else if (fgs>=30) {
		cout<<"FINAL GRADE IS 'D+'";
		gps=1.6;
		}
		else if (fgs>=20) {
		cout<<"FINAL GRADE IS 'D'";
		gps=1.2;
		}
		else if (fgs>=10) {
		cout<<"FINAL GRADE IS 'E'";
		gps=0.8;
		}
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"HEALTH:- "<<endl;
	if (fgh>=90) {
		cout<<"FINAL GRADE IS 'A+'";
		gph=4.0;
		}
		else if (fgh>=80) {
		cout<<"FINAL GRADE IS 'A'";
		gph=3.6;
		}
		else if (fgh>=70) {
		cout<<"FINAL GRADE IS 'B+'";
		gph=3.2;
		}
		else if (fgh>=60) {
		cout<<"FINAL GRADE IS 'B'";
		gph=2.8;
		}
		else if (fgh>=50) {
		cout<<"FINAL GRADE IS 'C+'";
		gph=2.4;
		}
		else if (fgh>=40) {
		cout<<"FINAL GRADE IS 'C'";
		gph=2.0;
		}
		else if (fgh>=30) {
		cout<<"FINAL GRADE IS 'D+'";
		gph=1.6;
		}
		else if (fgh>=20) {
		cout<<"FINAL GRADE IS 'D'";
		gph=1.2;
		}
		else if (fgh>=10) {
		cout<<"FINAL GRADE IS 'E'";
		gph=0.8;
		}
		cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"CIVIC & MORAL:- "<<endl;
	if (fgcim>=90) {
		cout<<"FINAL GRADE IS 'A+'";
		gpcim=4.0;
		}
		else if (fgcim>=80) {
		cout<<"FINAL GRADE IS 'A'";
		gpcim=3.6;
		}
		else if (fgcim>=70) {
		cout<<"FINAL GRADE IS 'B+'";
		gpcim=3.2;
		}
		else if (fgcim>=60) {
		cout<<"FINAL GRADE IS 'B'";
		gpcim=2.8;
		}
		else if (fgcim>=50) {
		cout<<"FINAL GRADE IS 'C+'";
		gpcim=2.4;
		}
		else if (fgcim>=40) {
		cout<<"FINAL GRADE IS 'C'";
		gpcim=2.0;
		}
		else if (fgcim>=30) {
		cout<<"FINAL GRADE IS 'D+'";
		gpcim=1.6;
		}
		else if (fgcim>=20) {
		cout<<"FINAL GRADE IS 'D'";
		gpcim=1.2;
		}
		else if (fgcim>=10) {
		cout<<"FINAL GRADE IS 'E'";
		gpcim=0.8;
		}
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<endl<<"O.B.T:- "<<endl;
	if (fgobt>=90) {
		cout<<"FINAL GRADE IS 'A+'";
		gpobt=4.0;
		}
		else if (fgobt>=80) {
		cout<<"FINAL GRADE IS 'A'";
		gpobt=3.6;
		}
		else if (fgobt>=70) {
		cout<<"FINAL GRADE IS 'B+'";
		gpobt=3.2;
		}
		else if (fgobt>=60) {
		cout<<"FINAL GRADE IS 'B'";
		gpobt=2.8;
		}
		else if (fgobt>=50) {
		cout<<"FINAL GRADE IS 'C+'";
		gpobt=2.4;
		}
		else if (fgobt>=40) {
		cout<<"FINAL GRADE IS 'C'";
		gpobt=2.0;
		}
		else if (fgobt>=30) {
		cout<<"FINAL GRADE IS 'D+'";
		gpobt=1.6;
		}
		else if (fgobt>=20) {
		cout<<"FINAL GRADE IS 'D'";
		gpobt=1.2;
		}
		else if (fgobt>=10) {
		cout<<"FINAL GRADE IS 'E'";
		gpobt=0.8;
		}
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"COMPUTER:- "<<endl;
	if (fgc>=90) {
		cout<<"FINAL GRADE IS 'A+'";
		gpc=4.0;
		}
		else if (fgc>=80) {
		cout<<"FINAL GRADE IS 'A'";
		gpc=3.6;
		}
		else if (fgc>=70) {
		cout<<"FINAL GRADE IS 'B+'";
		gpc=3.2;
		}
		else if (fgc>=60) {
		cout<<"GFINAL GRADE IS 'B'";
		gpc=2.8;
		}
		else if (fgc>=50) {
		cout<<"FINAL GRADE IS 'C+'";
		gpc=2.4;
		}
		else if (fgc>=40) {
		cout<<"FINAL GRADE IS 'C'";
		gpc=2.0;
		}
		else if (fgc>=30) {
		cout<<"FINAL GRADE IS 'D+'";
		gpc=1.6;
		}
		else if (fgc>=20) {
		cout<<"GFINAL GRADE IS 'D'";
		gpc=1.2;
		}
		else if (fgc>=10) {
		cout<<"FINAL GRADE IS 'E'";
		gpc=0.8;
		}
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"GRADE POINT:-------- ";
	cout<<endl<<"GRADE POINT OF SUBJECT NEPALI= "<<gpn;
	cout<<endl<<"GRADE POINT OF SUBJECT ENGLISH= "<<gpe;
	cout<<endl<<"GRADE POINT OF SUBJECT MATHEMATICS= "<<gpm;
	cout<<endl<<"GRADE POINT OF SUBJECT SOCIAL STUDIES= "<<gpss;		
	cout<<endl<<"GRADE POINT OF SUBJECT SCIENCE= "<<gps;
	cout<<endl<<"GRADE POINT OF SUBJECT HEALTH= "<<gph;
	cout<<endl<<"GRADE POINT OF SUBJECT CIVIC & MORAL= "<<gpcim;
	cout<<endl<<"GRADE POINT OF SUBJECT O.B.T= "<<gpobt;
	cout<<endl<<"GRADE POINT OF SUBJECT COMPUTER= "<<gpc;
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	gpa=(gpn+gpe+gpm+gpss+gps+gph+gpcim+gpobt+gpc)/9;
	cout<<endl<<"GRAND POINT AVERAGE (GPA)= "<<gpa<<endl;
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<ends<<ends<<"ALL RIGHTS RESERVED, HP, 2019";
	cout<<endl<<"CREATED BY:-HEMANT HP";
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	//getch();
	return 0;
}


