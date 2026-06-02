class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int res = INT_MAX;
        int l = landStartTime.size();
        int w = waterStartTime.size();
        for(int i =0; i < l; i++){
            for(int j = 0; j < w; j++){
                int time = landStartTime[i] + landDuration[i];
                if(waterStartTime[j] > time){
                    time += waterStartTime[j] + waterDuration[j];
                }
                else{
                    time += waterDuration[j];
                }
                
                if(time < res){
                    res = time;
                }
            }
        }
        for(int i =0; i < w; i++){
            for(int j = 0; j < l; j++){
                int time = waterStartTime[i] + waterDuration[i];
                if(landStartTime[j] > time){
                    time += landStartTime[j] + landDuration[j];
                }
                else{
                    time += landDuration[j];
                }
                
                if(time < res){
                    res = time;
                }
            }
        }
        return res;
    }
};