class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int correct_places=0;
        int wrong_places=0;
        string s="";
        map<char,int> m;
        for(int i=0;i<n;i++){
            m[secret.at(i)]++;
        }
        for(int i=0;i<n;i++){
            if(secret.at(i)==guess.at(i)){
                correct_places++;
                m[secret.at(i)]--;
            }
        }
        for(int i=0;i<n;i++){
            if(secret.at(i)!=guess.at(i)&&m[guess.at(i)]>0){
                wrong_places++;
                m[guess.at(i)]--;
            }
        }
          s+=to_string(correct_places);
        s+="A";
       s+=to_string(wrong_places);
        s+="B";
        return s;
    }
};
