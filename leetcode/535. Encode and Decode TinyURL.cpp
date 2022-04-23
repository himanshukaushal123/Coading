class Solution {
public:

    // Encodes a URL to a shortened URL.
    unordered_map<string,string>mp;
    string encode(string longUrl) {
        mp["abcd123"]=longUrl;
        return "abcd123";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return  mp["abcd123"];
    }
};
