class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>in;
    unordered_map<string,pair<int,int>>out;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        in[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        const auto &[stn,start]=in[id];
        auto &[totalDuration,tripcnt]=out[stn+","+stationName];
        totalDuration += t-start;
        ++tripcnt;
    }
    
    double getAverageTime(string startStation, string endStation) {
        auto [sum,count]=out[startStation+","+endStation];
        return (double)sum/count;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
