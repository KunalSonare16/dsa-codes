class Solution {
public:

    string countAndSay(int n) {
        string result = "1";

        for(int i = 2 ; i <= n ; i++){
            string temp = "";

            int j = 0 ;
            while(j < result.length()){
              char ch = result[j];
              int count  = 0;
              while(j < result.length() && result[j] == ch){
                count++;
                j++;
              }

              temp += to_string(count);
              temp += ch;

            }
            result = temp;
        }
        return result;
    }
};