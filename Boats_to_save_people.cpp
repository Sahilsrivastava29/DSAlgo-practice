class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // define the size
        int n = people.size();

        // sort the array
        sort(people.begin(),people.end());

        int cnt = 0;

        // define two pointers
        int i = 0;
        int j = n-1;

        while(i<=j){
            if(people[i] + people[j] <= limit){
                i++;
                j--;
            }
            else{
                j--;
            }
            cnt++;
        }

        return cnt;
    }
};
