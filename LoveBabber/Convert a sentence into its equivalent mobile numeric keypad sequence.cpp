string printSequence(string S)
{
    //code here.
    string str="";
    map<char,string>mp;
    mp.insert({' ',"0"});
    mp.insert({'A',"2"});
    mp.insert({'B',"22"});mp.insert({'C',"222"});mp.insert({'D',"3"});mp.insert({'E',"33"});mp.insert({'F',"333"});mp.insert({'G',"4"});mp.insert({'H',"44"});mp.insert({'I',"444"});mp.insert({'J',"5"});mp.insert({'K',"55"});
    mp.insert({'L',"555"});mp.insert({'M',"6"});mp.insert({'N',"66"});mp.insert({'O',"666"});mp.insert({'P',"7"});mp.insert({'Q',"77"});mp.insert({'R',"777"});
    mp.insert({'S',"7777"});mp.insert({'T',"8"});mp.insert({'U',"88"});mp.insert({'V',"888"});mp.insert({'W',"9"});mp.insert({'X',"99"});
    mp.insert({'Y',"999"});mp.insert({'Z',"9999"});
    for(int i=0;i<S.size();i++){
        str+=mp[S[i]];
    }
    return str;
}
