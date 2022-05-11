//https://leetcode.com/problems/richest-customer-wealth/submissions/

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int sum,max=0;
    for(int i=0;i<accountsSize;i++)
    {
        for(int j=0;j<(*accountsColSize);j++)
        {  
            sum=sum+accounts[i][j];               
        }
        if(sum>max)
        {
            max=sum;
        }      
        sum = 0;
    }  
    return max; 
}
