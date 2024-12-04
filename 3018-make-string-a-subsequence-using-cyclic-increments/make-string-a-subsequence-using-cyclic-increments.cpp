class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        if(str2.size()>str1.size())
        return false;
        else if(str1==str2)
        return true;

        int i=0,j=0;
        while(i<str1.size()&&j<str2.size()){
            char ch;
            if(str1[i]=='z')
            ch='a';
            else
            ch=str1[i]+1;
            if(str1[i]==str2[j]||ch==str2[j]){
                i++;j++;
            }else
            i++;
        }
        if(j==str2.size())
        return true;
        else
        return false;
    }
};