class Solution {
public:
    bool isPalindrome(int x) {
        int y=0;
        int z=0;
        int a=0;
        int s=0;
        if(x<0){
        return false;
        }
        else{
        z=x;
        a=x;
        s=x;
        }
        long int i=1;
        int k=0;
        while(z>=10){
            z=z/10;
            i=i*10;
        }
        int f=0;
        int d=1;
        while(i!=0){
        int first=a/i;
        a=a%i;
        d=s%10;
        s=s/10;
        if(first==d){
            i=i/10;
            continue;
        }
        else{
            f=1;
            break;
        }
        }
        if(f==0){
            return true;
        }
        else{
            return false;
        }
    }
};