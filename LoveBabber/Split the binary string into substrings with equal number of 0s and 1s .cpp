 int maxSubStr(string str){
        //Write your code here
        int count1=0,count0=0,ans=0;
        if(str[0]=='0')count0++;
        if(str[0]=='1')count1++;
        for(int i=1;i<str.size();i++){
            if(count0==count1){count0=0;count1=0;ans++;}
            if(str[i]=='0')count0++;
            if(str[i]=='1')count1++;
        }
        if(count0==count1)ans++;
        else return -1;
        return ans;
    }
