class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int bal=0,start=0,defi=0;
        for(int i=0;i<cost.size();i++)
        {
            bal+=gas[i]-cost[i];
            if(bal<0)
            {
                defi+=bal;
                start=i+1;
                bal=0;
            }
        }
        if(bal+defi>=0)return start;
        else
        return -1;
        
    }
};
