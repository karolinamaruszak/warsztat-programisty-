
#include <iostream>

using namespace std;

int main()
{
	
	 int tab[10]={4,6,7,3,4,8,9,10,3,5};
	 
	 
	 int min,max;
	 min=tab[0]; 
	min=tab[0];
	
	
 
  for( int i=0;i<10 ; i++)
     { 
		 
	   if ( tab[i] > max) max=tab[i];
	   
	   if ( tab[i]<min ) min=tab[i];
	   
		
 }
 cout<<min<<endl<<max;
 
 return 0;
}
