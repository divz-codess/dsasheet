class LRUCache {
public:
    map<int, list<pair<int, int>>::iterator> m; // key and address stored in it
    list<pair<int, int>> l; // key and value stored in it
    int cap;
    int siz;
    
    LRUCache(int capacity) {
        cap = capacity;
        siz = 0;
    }
    
    int get(int key) {
        if(m.find(key) == m.end()) return -1;
        pair<int, int> pp = *(m[key]);
        l.erase(m[key]);
        l.push_front(pp);
        m[key] = l.begin();
        return pp.second;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            l.erase(m[key]);
            m.erase(key);
            siz--;
        }
        if(siz == cap){
            int k = l.back().first;
            l.pop_back();
            m.erase(k);
            siz--;
        }
        siz++;
        l.push_front({key, value});
        m[key] = l.begin();
    }
};
