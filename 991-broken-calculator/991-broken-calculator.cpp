class Solution {
public:
    int brokenCalc(int start, int target) {
        if(target<=start)
            return start-target;
        int steps=0;
        while(target>start)
        {
            if(target%2==0)
                target=target/2;
            else
                target+=1;
            steps++;
        }
        return steps+start-target;
    }
};