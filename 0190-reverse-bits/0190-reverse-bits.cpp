class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t x = 0;
        int i=0;
        while(i<32){
            x <<= 1;
            x += n % 2;
            n>>=1;i++;
        }
        return x;
    }
};