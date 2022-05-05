#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4];
    int parr[4][4];
    int res[4][4];
    int pres[4][4];

    cout<<"Enter elements of first matrix: ";
    for(int i=0;i<4;i++)
    {
         for(int j=0;j<4;j++)
         {
              cin>>arr[i][j];
         }
    }

    cout<<"Enter elements of second matrix: ";
    for(int i=0;i<4;i++)
    {
         for(int j=0;j<4;j++)
         {
              cin>>parr[i][j];
         }
    }

    for(int i=0;i<4;i++)
    {
         for(int j=0;j<4;j++)
         {
              res[i][j] = 0;
              for(int k=0;k<4;k++)
              {
                   res[i][j] = arr[i][k] * parr[i][j];
              }
         }

    }
    for(int i=0;i<4;i++)
    {
         for(int j=0;j<4;j++)
         {
              pres[i][j] = 0;
              for(int k=0;k<4;k++)
              {
                   pres[i][j] = parr[i][k] * arr[i][j];
              }

         }
    }

    //comparing
    for(int i=0;i<4;i++)
    {
         for(int j=0;j<4;j++)
         {
              if(res[i][j] != pres[i][j])
              {
                   cout<<"They are not equal"<<endl;
                   break;
              }
         }
    }
    cout<<"Matrix multiplication is not commutative";


}
