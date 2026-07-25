// we have to make simple addition, we have to add 1 into the integer array
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        for (int i = digits.size()-1; i>=0; i--) //start from last of array 
        {
            if (digits[i] < 9) //if last digit is less than 9 simply increment it and return whole array
            {
                digits[i]++;
                return digits;
            }

            digits[i] = 0; //else change that 9 to 0...therefore loop continue if next is <9 then its incremented by 1

        }
        digits.insert(digits.begin(), 1);  //if all digits are 9 i.e. 9999  therefore 1 is added in the beginning 
        return digits;
    }
};