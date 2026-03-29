class MyHashMap {
private:
    struct Node {

        int key;
        int value;
        Node *next;
        
        Node(int key, int value)
        :
        key(key),
        value(value),
        next(nullptr)
        {}
    };

    vector<Node*> mp;

    int hash(int key) {
        return key % mp.size();
    }

public:
    MyHashMap() {
        mp.resize(10000);
        for (auto& bucket : mp)
            bucket = new Node(0, 0);
    }
    
    void put(int key, int value) {
        
        Node *curr = mp[hash(key)];
        while (curr->next) {
            if (curr->next->key == key) {
                curr->next->value = value;
                return;
            }
            curr = curr->next;
        }
        curr->next = new Node(key, value);
    }
    
    int get(int key) {
        
        Node *curr = mp[hash(key)];
        while (curr->next) {
            if (curr->next->key == key) return curr->next->value;
            curr = curr->next;
        }
        return -1;
    }
    
    void remove(int key) {
        
        Node *curr = mp[hash(key)];
        while (curr->next) {
            if (curr->next->key == key) {
                Node *tmp = curr->next;
                curr->next = tmp->next;
                delete tmp;
                return;
            }
            curr = curr->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */