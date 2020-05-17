string Solution::convertToTitle(int A) 
{
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string sum;
   while(A>0)
   {
       A=A-1;
       sum=s[A%26]+sum;;
       A=A/26;
   }

    return sum;
}
