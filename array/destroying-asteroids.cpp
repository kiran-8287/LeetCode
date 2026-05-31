class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        for(int ast: asteroids){
            if(mass >= ast){
                mass += ast;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};