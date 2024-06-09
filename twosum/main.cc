// status: accepted

#include <iostream>
#include <vector>
class Solution{
    public:
    std::vector<int> twoSum(std::vector<int> &nums, int target){
        std::vector<int> indices;
        for(size_t i = 0; i < nums.size(); i++){
            for(size_t j = 0; j < nums.size(); j++){
               if(nums[i] + nums[j] == target && i != j){
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
               }    
            }
        }

        return indices;
    }
};
template<typename T>
std::ostream &operator<<(std::ostream &stream, const std::vector<T> &v) noexcept{
    for(auto &elem: v){
        stream << elem << ' ';
    }
    return stream;
}
int main(){
    std::vector t1{2,7,11,15};
    std::vector t2{3,2,4};
    std::vector t3{3,2,3};
    Solution s;
    auto r1 = s.twoSum(t1, 9);
    auto r2 = s.twoSum(t2, 6);
    auto r3 = s.twoSum(t3,6);
    std::cout << "r1 = " << r1 << '\n';
    std::cout << "r2 = " << r2 << '\n';
    std::cout << "r2 = " << r3 << '\n';
    return 0;
}
