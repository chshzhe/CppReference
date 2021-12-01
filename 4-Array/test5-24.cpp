#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m[5];
    int n[5][5];
    for (int i = 0; i < 5; i++)
    cin>>m[i];
    for (int j = 0; j < 5; j++)
    {
            for (int i = 4; i >=0 ; i--)
        {
           n[j][i]=m[j]%10;
           m[j]/=10;
        }
    }
     int b1[7][7];
     int sum=0,tem=0;
     for (int i = 0; i < 7; i++)
     {
          b1[0][i]=0;
          b1[i][0]=0;
          b1[6][i]=0;
          b1[i][6]=0;
     }
     
     for (int i = 1; i < 6; i++)
          for (int t = 0; t < 6; t++)
              b1[i][t]=n[i-1][t-1];
     for (int i = 1; i < 6; i++)
     {
          for (int j = 1; j<6; j++)
          {
              if (b1[i][j]==0&&b1[i-1][j]==0&&b1[i][j-1]==0&&b1[i+1][j]==0&&b1[i][j+1]==0)
              {
                   b1[i][j]=1;
                   b1[i-1][j]=1;
                   b1[i+1][j]=1;
                   b1[i][j-1]=1;
                   b1[i][j+1]=1;
                   ++sum;
              }
              
          }
          
     }
     
      for (int i = 1; i < 6; i++)
          for (int j = 1; j<6; j++)
              if (b1[i][j]==0)
                ++tem;

      if (tem==0)
        cout<<sum<<endl;
      else 
        cout<<"-1"<<endl;    
    

     system("pause");
     return 0;
}
