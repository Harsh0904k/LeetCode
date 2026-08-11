class Solution {
public:
std::string intToBinary(int n) {
    if (n == 0) return "0";
    
    std::string binary = "";
    while (n > 0) {
        binary += (n & 1) ? '1' : '0'; // Check if the last bit is 1 or 0
        n >>= 1;                       // Shift right by 1 bit (divide by 2)
    }
    
    std::reverse(binary.begin(), binary.end()); // Reverse to get correct order
    return binary;
}
    int hammingWeight(int n) {
        string bin = intToBinary(n);
        int count = 0;
        for(int i = 0; i<bin.length(); i++){
            if(bin[i]=='1'){
                count++;
            }
        }
        return count;
    }
};