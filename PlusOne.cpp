class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        recursive((digits.size() - 1), digits);
        return digits;
    }
    void recursive(int size, vector<int>& digits){
        if(digits[size] != 9){
            digits[size] += 1;
        }
        else if(size == 0 && digits[0] == 9){
            digits[0] = 1;
            digits.push_back(0);
            //add another element with 0 to the vector
        }
        else{
            digits[size] = 0;
            recursive((size-1), digits);
        }
    }
};