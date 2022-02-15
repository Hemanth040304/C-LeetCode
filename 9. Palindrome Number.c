/* 9. Palindrome Number */
/* https://leetcode.com/problems/palindrome-number/submissions/ */
bool isPalindrome(int  x){
    if(x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }
    long temp,p=0;
    temp=x;
    while(temp)
    {
        p=p*10+(temp%10);
        temp/=10;
    }
    if(x==p)
    {
        return true;
    }
    else
    {
        return false;
    }
}
