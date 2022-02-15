/* 1688. Count of Matches in Tournament */
/* https://leetcode.com/problems/count-of-matches-in-tournament/ */
int numberOfMatches(int n){
    int matches=0;
    while(n>1)
    {
        matches=matches+n/2;
        if(n%2==1)
        {
            n=n/2+1;
        }
        else
        {
            n=n/2;
        }
    }
    return matches;
}
