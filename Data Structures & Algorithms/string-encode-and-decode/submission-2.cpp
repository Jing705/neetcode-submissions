class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for(auto&s:strs){
            encoded_string+=s;
            int x1=s.length()/100;
            int x2=(s.length()-x1*100)/10;
            int x3=s.length()-x1*100-x2*10;
            char c1='0'+x1;
            char c2='0'+x2;
            char c3='0'+x3;
            encoded_string+='/';
            encoded_string+=c1;
            encoded_string+=c2;
            encoded_string+=c3;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        string str;
        int index=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='/'&&(i+3)<s.length()){
                int len=(s[i+3]-'0')+(s[i+2]-'0')*10+(s[i+1]-'0')*100;
                if(len==i-index){
                    decoded_strs.push_back(str);
                    str="";
                    index=i+4;
                    i=i+3;
                }
                else{
                str+=s[i];
                }
            }
            else{
                str+=s[i];
            }
        }
        return decoded_strs;
    }
};
