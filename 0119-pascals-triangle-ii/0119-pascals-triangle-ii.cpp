class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int a=0;
        vector<int> vec;
        while(a!=rowIndex){
            vec.push_back(1);
            int i=vec.size()-1;
            while(i>0){
                vec[i]=vec[i]+vec[i-1];
                i--;
            }
            a++;
        }
        vec.insert(vec.end(),1);
        return vec;

    }
void operator delete(void* ptr) {}
void operator delete[](void* ptr) {}
};