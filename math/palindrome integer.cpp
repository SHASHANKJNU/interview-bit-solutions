int Solution::isPalindrome(int A) 
{
    string s=to_string(A);
    int start=0,end=s.size()-1;
    while(start<end)
    {
        if(s[start]!=s[end])
        {
            return false;
        }
    
        start++,end--;
    }

    return true;
}
