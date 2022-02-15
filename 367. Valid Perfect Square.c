/* 367. Valid Perfect Square */
/* https://leetcode.com/problems/valid-perfect-square/submissions/ */
bool isPerfectSquare(int num){
    if (num==1) return num;
    unsigned int i = 0;
    while (i*i<num){
        i++;
    }
    return i*i == num;
}
