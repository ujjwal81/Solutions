class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total=0;
        int tc=0;
        for(int i=0;i<gas.size();i++){
            total+=gas[i];
            tc+=cost[i];
        }
        if(total<tc){
            return -1;
        }
        int cur_fuel=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            if(cur_fuel<0){
                start=i;
                cur_fuel=0;
            }
            cur_fuel+=(gas[i]-cost[i]);
        }
        return start;
    }
};