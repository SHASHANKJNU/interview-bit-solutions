int factorial(int n)
{
    if(n<=1)
    return 1;
    return (n *factorial(n-1))%1000003;
}
int Solution::findRank(string A) 
{
    int sum=0;
    for(int i=0;i<A.size();i++)
    {
        int count=0;
        for(int j=i+1;j<A.size();j++)
        {
            if(A[i]>A[j])
            count++;
        }
    
        sum=sum+((count*factorial(A.size()-i-1))%1000003);
    }

    return (sum+1)%1000003;
}
