class Solution {
public:
    int calculateScore(int a, int b) {
        string binary_a= format("{:b}", a);
        string binary_b= format("{:b}", b);

        int a_cnt=0;
        int b_cnt=0;
        for(char ch: binary_a){
            if(ch=='1') a_cnt++;
        }
        for(char ch: binary_b){
            if(ch=='1') b_cnt++;
        }
        if(a_cnt>=b_cnt) return a_cnt*b_cnt;
        else return b_cnt/a_cnt;

    }
};