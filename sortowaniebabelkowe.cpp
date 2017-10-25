# include <iostream> 
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{ int tab[50];
	
	srand(time(NULL));
	for(int i=0;i<50;i++)
	{ tab[i]=rand()%50;
		
	}
	
	
	int temp;
	for ( int i=0 ;i<50; i++)
	  { 
		  for(int j=0; j<49; j++)
		    { 
				if(tab[j]>tab[j+1])
				{ 
					temp=tab[j];
					tab[j]=tab[j+1];
					tab[j+1]=temp;
	             }
	         }
	   }
	
	
	for ( int i=0; i<50 ; i++)
	 cout << tab[i] << "  " ;
	
	
	return 0;
}
