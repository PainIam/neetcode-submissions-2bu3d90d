class MyHashSet {
private:
    struct Node {
        int key;
        Node* next;

        Node(int key): key(key), next(nullptr) {};
    };

    vector<Node*> list;

    int hash(int key) {

        return key % list.size();
    }
public:
    MyHashSet() {

    list.resize(10000);
    for (auto& bucket : list)
        bucket = new Node(0);
    }
    
    void add(int key) {
        
        Node *curr = list[hash(key)];
        while (curr->next) {
            if (curr->next->key == key) return;
            curr = curr->next;
        }
        curr->next = new Node(key);
    }
    
    void remove(int key) {
        
        Node *curr = list[hash(key)];
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
    
    bool contains(int key) {
        
        Node *curr = list[hash(key)];
        while (curr->next) {
            if (curr->next->key == key) return true;
            curr = curr->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */