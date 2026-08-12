class Solution {
    public boolean isPalindrome(int x) {
        int temp=x,reverse=0,r;
        if(x<0)
        return false;
        while(x!=0){
             r=x%10;
             reverse=reverse*10+r;
            x/=10;
        }
        if(temp==reverse)
        return true;
    return false;
    }
}