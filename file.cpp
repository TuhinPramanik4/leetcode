class solution{
    public :
    int max(string s){
        map<char , int >mpp;
        int l=0,r=0;
        int max_len=0;
        for ( r = 0; r <s.size(); r++)
        {
            if (mpp.find(s[r]) != mpp.end())
            {
                mpp[s[r]]++;
                while (mpp[s[r]]>2)
                {
                   mpp[s[l]]--;
                   if (mpp[s[l]]==0){
                    mpp.erase(s[l]);
                   }
                   l++;
                }
                
            }
            else{
                mpp[s[r]]++;
            }
            max_len=max(max_len,r-l+1);
        }
        return max_len;
    }
}