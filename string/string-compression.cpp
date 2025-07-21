class Solution {
public:
    int compress(vector<char>& chars) {
        int left = 0;
        int right = 0;
        while(right < chars.size()){
            char temp = chars[right];
            int count = 0;
            while(right < chars.size() && chars[right] == temp){
                right++;
                count++;
            }
            chars[left] = temp;
            left++;
            if (count > 1) {
                string number = to_string(count);
                for (int i = 0; i < number.length(); i++) {
                    chars[left] = number[i];
                    left++;
                }
            }
        }
        return left;
    }
};