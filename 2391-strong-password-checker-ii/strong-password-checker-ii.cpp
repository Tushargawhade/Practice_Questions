class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool lc = false , uc=false , dig = false , sc = false , adj = false;
        
        int n = password.size();

        string str = "!@#$%^&*()-+";

        if(n<8){
            return false;
        }
        
        for(int i=0;i<n;i++){
            if(islower(password[i])){
                lc =  true;
            }
            if(isupper(password[i])){
                uc = true;
            }
            if(isdigit(password[i])){
                dig = true;
            }
            if(str.find(password[i]) != string::npos){
                sc = true;
            }
            if(i>0 && password[i-1] == password[i]){
                adj = true;
            }
        }

        if(lc && uc && dig && sc && !adj){
            return true;
        }
        return false;

    }
};