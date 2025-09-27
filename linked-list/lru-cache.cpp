class LRUCache {
public:
    int capacity;
    class Node{
        public:
            Node* next;
            Node* prev;
            int key;
            int val;
            Node(int k, int v){
                key = k;
                val = v;
                next = NULL;
                prev = NULL;
            }
    };
    unordered_map<int , Node*> map;
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    LRUCache(int capacity) {
        this->capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }
    void remove(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insert(Node* node){
        Node* temp = head->next;
        head->next = node;
        node->next = temp;
        temp->prev = node;
        node->prev = head;
    }
    int get(int key) {
        if (map.find(key) == map.end()) {
            return -1;
        }
        Node* node = map[key];
        remove(node);
        insert(node);
        return node->val;
    }
    
    void put(int key, int value) {
        if(map.find(key) != map.end()){
            map[key]->val = value;
            remove(map[key]);
            insert(map[key]);
            return;
        }
        if(map.size() == capacity){
            Node* node = tail->prev;
            remove(node);
            map.erase(node->key);
            delete node;
        }
        Node* newNode = new Node(key,value);
        insert(newNode);
        map[key] = newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */