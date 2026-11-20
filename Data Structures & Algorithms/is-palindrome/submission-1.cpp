class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=(s[i]-'A')+'a';
            }
        }
        while(left<right){
            int flag1=0;
            int flag2=0;
            if((s[left]>='a'&&s[left]<='z')||(s[left]>='0'&&s[left]<='9')){
                flag1=1;
            }
            else{
                left++;
            }
             if((s[right]>='a'&&s[right]<='z')||(s[right]>='0'&&s[right]<='9')){
                flag2=1;
            }
            else{
                right--;
            }
            if(flag1==1&&flag2==1){
                if(s[left]!=s[right]) return false;
                else{
                    left++;right--;
                }
            }
        }
        return true;
    }
};
