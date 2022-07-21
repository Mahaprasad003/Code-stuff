class negativenumberexception extends exception
{
     int a;
     public negativenumberexception (int x)
     {
          a=x;
     }
     public string tostring()
     {
          return "good";
     }
}
class userdefined
{
     public static void factorial(int n)throws negativenumberexception
     {
          if(n<0)
          {
               throw new negativenumberexception(n);
          }
          else
          {
               int f=1;
               for(int i=0;i<=n;i++)
               {
                    f=f*i;
               }
          }
          sout("factorial is"+f);
     }
     public static void main(string s[])
     {
          try{
               factorial(-2);
          }
          catch(negativenumberexception e)
          {
               sout("wrong");
          }
     }
}
