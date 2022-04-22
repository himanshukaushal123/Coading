class MyHashMap {
public:
    map<int,int>mp;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        mp[key]=value;
    }
    
    int get(int key) {
       if(mp.find(key)!=mp.end()){
           return mp[key];
       } 
        return -1;
    }
    
    void remove(int key) {
        if(mp.find(key)!=mp.end()){
           mp[key]=-1;
       }
    }
};
