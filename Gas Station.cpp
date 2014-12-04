/*
There are N gas stations along a circular route, where the amount of gas at station i is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.

Return the starting gas station's index if you can travel around the circuit once, otherwise return -1.
*/

class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    for (int i = 0; i < gas.size(); )  
        {  
            int leftGas = 0;   //当前汽所剩余gas
            int j = 0;  
            for (; j < gas.size(); j++)  
            {  
                int k = (i+j)%gas.size();  
                leftGas += (gas[k] - cost[k]);  
                if (leftGas < 0) break;  //只有剩余的gas大于0时，才能继续往下开
            }  
            if ( j == gas.size()) return i;  
            i+=j+1;  
/*
证明：
left(i)>0, 如果left(i+1)<0，从i+1个station重新开始测试是没有必要的；如果left(i+2) > 0呢？
那么left(i) + left(i+1)>0; left(i) + left(i+1) +left(i+2) > left(i+2)那么从i+2个station开始也是没有必要的，
以此类推……left(i) + ...+ left(k-2)>0, 那么left(i)+...+left(k-2) > left(k-1)， 
那么就是没有必要从第k-1个节点重新开始计算了，现在到了第k个station的剩油量left变为负，
也不能作为出发点，那么直接到k+1个计算就可以了。这就可以得出属性2了。
*/
}  
        return -1;  
    
    }
};
