class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      /*localizar 2 números da lista que somados resultam no target 
      eliminar os números maiores que o target. permutar todos os números menores
      usar for loops para exectuar a busca
      */
      //create a map 
      map<int,int> hash_map;
      int n = nums.size();
      for (int i = 0; i < n; i++){
          if (hash_map.find(target-nums[i])==hash_map.end()){
              hash_map[nums[i]] = i;
          }
          else{
              return {i, hash_map[target-nums[i]]};
          }
    
      }

      return {};

    }
};