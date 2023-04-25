class SmallestInfiniteSet {
public:
map<int,int>mp;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++)
            mp[i]++;
    }
    
    int popSmallest() {
        int p=mp.begin()->first;
        mp.erase(p);
        return p;
    }
    
    void addBack(int num) {
        mp[num]++;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */