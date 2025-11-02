#include <iostream>
#include <vector >
using namespace std;
vector<vector<int> > threeSum(vector<int>& nums) {
        int x = nums.size();
        vector<vector<int> > v;
        int n = 0;
        for (int i = 0; i < x-2; i++) {
            for (int j = i + 1; j < x-1; j++) {
                for (int k = j + 1; k < x; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        v[n][0] = nums[i];
                        v[n][1] = nums[j];
                        v[n][2] = nums[k];
                        n++;
                    }
                }
            }
        }
        return v;
    }
int main(){
	vector < int > v1; 
	v1.push_back(-1);
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(-1);
	v1.push_back(-4);

vector <vector <int> > v;
v= threeSum(v1);
	
	}
	
