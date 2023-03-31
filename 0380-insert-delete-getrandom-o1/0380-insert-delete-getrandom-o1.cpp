class RandomizedSet {
public:
    unordered_set<int>s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(s.find(val)==s.end()){
            s.insert(val);
            return true;
        }

        return false;
    }
    
    bool remove(int val) {
        if(s.find(val)!=s.end()){
            auto it=s.find(val);
            s.erase(it);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int n=rand()%s.size();
        auto it =s.begin();
        advance(it, n); // advances the iterator ‘it’ by n element positions
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */