//que1


#include <iostream>
using namespace std;
int main() 
{
      int i,j,k;
      int n=7;
      for(j=0;j<7;j++)
      {
          for(k=0;k<j;k++)
              cout<<" ";
          for(i=1+j;i<=7;i++)
          {
              cout<<i<<" ";
          }
          cout<<endl;
      }
      for(j=1;j<7;j++)
      {
          for(k=5-j;k>=0;k--)
              cout<<" ";
          for(i=7-j;i<=7;i++)
          {
              cout<<i<<" ";
          }
          cout<<endl;
      }
      return 0;    
}


