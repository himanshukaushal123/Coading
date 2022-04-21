class MyHashSet {
public:
    unordered_map<int,int>mp;
    MyHashSet() {
        mp[0]=0;
    }
    
    void add(int key) {
        if(mp[key]>0){
            return;
        }else{
            mp[key]=1;
        }
    }
    
    void remove(int key) {
        if(mp[key]>0){
            mp[key]=0;
        }
        return;
    }
    
    bool contains(int key) {
        if(mp[key]>0){
            return true;
        }
        return false;
    }
};
