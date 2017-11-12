// Sortowanie babelkowe z flaga
#include <iostream>

using namespace std;

int main()
{ int tab[8]={2,4,6,1,8,0,9,5};
 for(int i=0;i<8;i++)
 {
     cout<<tab[i]<<" ";
 }
 cout<<endl<<endl;
     for(int i=0;i<8;i++)
     {
         cout<<"i= "<<i<<endl;
         bool isSorted=true;
         int temp;
         for(int i=0;i<8;i++)
         {
             for(int j=0;j<7;j++)
             {
                 if(tab[j]>tab[j+1])
                 {
                     temp=tab[j];
                     tab[j]=tab[j+1];
                     tab[j+1]=temp;
                     isSorted=false;
                 }
             }
             if(isSorted)
                break;
         }
     }
     cout<<endl;
     for(int i=0;i<8;i++)
     {
         cout<<tab[i]<<" ";
     }

    return 0;
}
