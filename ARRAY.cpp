#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
	system ("color A");
      char string1 [] = "pensit";

      cout<<"BALIKAN STRING"<<endl;
      cout<<"---------------"<<endl;
      cout<<"string1 : "<<string1<<endl;

      _strrev(string1);
      cout<<"\nstring1 setelah dibalik : "<<string1<<endl;

      _getche();
      
}
