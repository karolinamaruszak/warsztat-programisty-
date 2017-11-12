//Sortowanie przez wstawianie
#include <iostream>

using namespace std;

int main()
{
    int tab[8]={8,2,1,4,5,7,9,6};
    for(int i=0; i<8; i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
     for(int i=0; i<8; i++)
     {
         for(int j=8;j>0;j--)
         {  int temp;
             if(tab[j]<tab[j-1])
             {
                 temp=tab[j];
                 tab[j]=tab[j-1];
                 tab[j-1]=temp;
             }
         }

     }

     for(int i=0; i<8; i++)
     {
         cout<<tab[i]<<" ";
     }
    return 0;
}
