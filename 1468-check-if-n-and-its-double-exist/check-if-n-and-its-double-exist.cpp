class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        if(arr.size()==0||arr.size()==1)
        return false;

        //sort(arr.begin(),arr.end());
        unordered_map<int,int>m1,m2;
        for(int i=0;i<arr.size();i++){
            m1[arr[i]]++;
        }


        for(int i=0;i<arr.size();i++){
          if((m1[arr[i]*2]>0&&arr[i]!=0)||m2[arr[i]]>0)
          return true;

          m2[arr[i]*2]++;
        }
        return false;
    }
};