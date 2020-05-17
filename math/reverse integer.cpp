int Solution::reverse(int A) 
{
    int reverse=0;
    while(A!=0)
    {
        int rem=A%10;
        int temp=reverse*10 +rem;
        if(temp/10 !=reverse)
            return 0;
        reverse=temp;
        A=A/10;
    }

    return reverse;
}
