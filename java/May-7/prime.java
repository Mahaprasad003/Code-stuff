class prime
{
     public static void main(String[] args) {

          for(int i=15;i<=55;i++)
          {
               int cnt=0;
               for(int j=1;j<=i;j++)
               {
                    if(i%j==0)
                    {
                         cnt++;
                    }
               }
               if(cnt == 2)
               {
                    System.out.println(i);
               }

          }
     }
}
