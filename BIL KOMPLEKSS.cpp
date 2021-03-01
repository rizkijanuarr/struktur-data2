#include<iostream>
#include <stdlib.h>
using namespace std;
system ("color A");
struct
{
float r1;
float r2;
float i1;
float i2;
}bil;

int main(int argc, char** argv){
	
cout <<"--------------------------"<<endl;
cout <<"_OPERASI BILANGAN KOMPLEK_"<<endl;
cout <<"--------------------------"<<endl<<endl;

cout<<"bilangan real 1 = "; cin>>bil.r1;
cout<<"bilangan imajiner 1 = "; cin>>bil.i1;
cout<<endl<<endl;
cout<<"bilangan real 2 = "; cin>>bil.r2;
cout<<"bilangan imajiner 2 = "; cin>>bil.i2;
cout<<endl<<endl;
cout<<"* PENJUMLAHAN *"<<endl;
cout<<"("<<bil.r1<<"+"<<bil.i1<<"i) "
<<" + "<<"("<<bil.r2<<"+"<<bil.i2<<"i) = "<<bil.r1 + bil.r2 <<"+"<<bil.i1 + bil.i2<<"i"<<endl;
cout<<endl<<endl;
cout<<"* PENGURANGAN *"<<endl;
cout<<"("<<bil.r1<<"+"<<bil.i1<<"i) "
<<" - "<<"("<<bil.r2<<"+"<<bil.i2<<"i) = "<<bil.r1 - bil.r2 <<"+"<<bil.i1 - bil.i2<<"i"<<endl;
cout<<endl<<endl;
cout<<"* PERKALIAN *"<<endl;
cout<<"("<<bil.r1<<"+"<<bil.i1<<"i) "
<<" * "<<"("<<bil.r2<<"+"<<bil.i2<<"i) = "<<bil.r1*bil.r2<<"+"<<bil.r1*bil.i2<<"i"
<<" + "<<bil.r2*bil.i1<<"i"<<" - "<<bil.i1*bil.i2<<" = "<<(bil.r1*bil.r2) - (bil.i1*bil.i2)<<" + "
<<(bil.r1*bil.i2) + (bil.r2*bil.i1)<<"i"<<endl;
return 0;
}
