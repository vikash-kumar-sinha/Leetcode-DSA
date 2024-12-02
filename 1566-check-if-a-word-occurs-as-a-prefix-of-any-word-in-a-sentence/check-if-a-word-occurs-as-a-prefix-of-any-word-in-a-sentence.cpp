class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
       stringstream ss(sentence);
       vector<string>v;
       string s;
       while(ss>>s){
          v.push_back(s);
       }
       
       for(int i=0;i<v.size();i++){
        if(v[i].find(searchWord)==0)
        return i+1;
       }

       return -1;
    }
};