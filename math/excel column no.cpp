int Solution::titleToNumber(string A) 
{
    int j=0;
    int sum=0;
    for(int i=A.size()-1;i>=0;i--)
    {
        sum=sum+(A[i]-'A'+1)*pow(26,j);
        j++;
    }

    return sum;
}
