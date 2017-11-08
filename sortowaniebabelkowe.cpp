# include <iostream> 
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{ int tab[8]={3,2,5,7,6,1,4,8};
	
	
	for(int i=0;i<8;i++)
	{ 
		cout << tab[i]<<"  " ;
	}
	cout << endl; 
	
	bool isSorted;
	
	for( int i=0;i<8;i++)
	{ 
	isSorted=true;
	for(int j=0;j<7;j++)
	{
		if(tab[j]>tab[j+1])
		{ 
			swap(tab[j],tab[j+1]);
		}
		isSorted=false;
	}
	if(true==isSorted)
	{
		break;
	}	
	
}
	for ( int i=0; i<8 ; i++)
	 cout << tab[i] << "  " ;
	
	
	return 0;
}
