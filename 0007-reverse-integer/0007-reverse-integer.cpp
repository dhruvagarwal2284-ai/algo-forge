class Solution {
public:
    int reverse(int x) {
        vector<int> z;
        long long int i=1;
        long long int q=x;
        int k=0;
        int b=0;
        int s=1;
        if(q<0){
            q=-q;
            s=0;
        }
        while(q!=0){
            z.push_back(q%10);
            b=b+z[k]*i;
            i=i*10;
            q=q/10;
            k++;
        }
        long long int w=0;
        for(int p = 0; p < z.size(); p++){
            
            if(w > INT_MAX / 10 || (w == INT_MAX / 10 && z[p] > 7)){
                return 0;
            }

            w = w * 10 + z[p];
        }
        if(s==0){
            return -w;
        }
        else{
            return w;
        }
    }
};