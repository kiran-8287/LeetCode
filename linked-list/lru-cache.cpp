class LRUCache {
public:
    class Node{
        public:
        Node* next;
        Node* prev;
        int key ,value;
        Node(int key, int value){
            this->key = key;
            this->value = value;
            this->next = nullptr;
            this->prev = nullptr;
        }
    };
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    unordered_map<int, Node*> map;
    int capacity = 0;

    void del(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
        node->prev = nullptr;
        node->next = nullptr;
        return;
    }

    void insert(Node* node){
        node->next = head->next;
        head->next->prev = node;
        node->prev = head;
        head->next = node;
    }

    LRUCache(int capacity) {
        this->capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if(map.find(key) == map.end()){
            return -1;
        }
        Node* node = map[key];
        del(node);
        insert(node);
        return map[key]->value;
    }
    
    void put(int key, int value) {
        if(map.find(key) != map.end()){
            map[key]->value = value;
            Node* node = map[key];
            del(node);
            insert(node);
            return;
        }
        if(map.size() == capacity){
            map.erase(tail->prev->key);
            del(tail->prev);

        }
        Node* node = new Node(key, value);
        insert(node);
        map[key] = node;
    }
};


/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */