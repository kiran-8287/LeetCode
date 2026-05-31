class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long curr = mass;
        for(int ast: asteroids){
            if(curr >= ast){
                curr = curr + (long long)ast;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};