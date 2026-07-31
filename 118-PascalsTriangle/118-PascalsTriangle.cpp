// Last updated: 7/31/2026, 7:24:20 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
            if(numRows == 0) return v; 
        if(numRows==1)return {{1}};
       
        else{
            
             v.insert(v.end(),{{1},{1,1}});
          
            for(int n=2;n<numRows;n++){
            int i=0;
              vector<int> v1 = v.back();
              vector<int> curr;
              curr.push_back(1);
            while( i<v1.size()-1){
               
                  curr.push_back(v1[i] + v1[i + 1]);
              
                i++;

            }
            curr.push_back(1);
            v.push_back(curr);
            }
        }
    return v;}
};