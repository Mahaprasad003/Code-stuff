#include<bits/stdc++.h>
using namespace std;


int square(int);

int main()
{
     int n;
     cout<<"Enter total number of points: ";
     cin>>n;
     int x[n], y[n];
     cout<<"Enter all X points: ";
     for(int i=0;i<n;i++)
     {
          cin>>x[i];
     }
     cout<<"Enter all Y points: ";
     for(int i=0;i<n;i++)
     {
          cin>>y[i];
     }

     int sum_x = 0; // summation x
     for(int i=0;i<n;i++)
     {
          sum_x += x[i];
     }

     int sum_y = 0; //summation y
     for(int i=0;i<n;i++)
     {
          sum_y += y[i];
     }

     int sum_x_square = 0; // summation x^2
     for(int i=0;i<n;i++)
     {
          int temp = square(x[i]);
          sum_x_square += temp;
     }

     int sum_y_square = 0; // summation y^2
     for(int i=0;i<n;i++)
     {
          int temp = square(y[i]);
          sum_y_square += temp;
     }

     int sum_xy = 0; // summation xy
     for(int i=0;i<n;i++)
     {
          int temp = x[i] * y[i];
          sum_xy += temp;
     }

     int sum_x_wholesq = square(sum_x);
     int sum_y_wholesq = square(sum_y);

     float a_num = ((sum_y * sum_x_square) - (sum_x * sum_xy));
     float den_ind = (n*sum_x_square) - (sum_x_wholesq);
     float a = a_num/den_ind;

     float b_num = (n * sum_xy) - (sum_x * sum_y);
     float b = b_num/den_ind;

     cout<<"\n\n\nIndependent equation is: ";
     cout<<"y = "<<a<<" + "<<b<<"x";

     float c_num = (sum_x * sum_y_square) - (sum_y * sum_xy);
     float den_dep = (n * sum_y_square) - (sum_y_wholesq);
     float c = c_num/den_dep;

     float d_num = (n * sum_xy) - (sum_x * sum_y);
     float d = d_num/den_dep;

     cout<<"\n\n\nDependent equation is: ";
     cout<<"x = "<<c<<" + "<<d<<"y";
}

int square(int a)
{
     return a*a;
}
