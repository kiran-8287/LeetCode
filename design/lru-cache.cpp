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
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    

    unordered_map<int , Node*> map;
    LRUCache(int capacity) {
        this->capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if (map.find(key) == map.end()) {
            return -1;
        }
        Node* node = map[key];
        node->prev->next = node->next;
        node->next->prev = node->prev;
        node->next = NULL;
        node->prev = NULL;
        Node* newNode = node;
        Node* temp = head->next;
        head->next = newNode;
        newNode->next = temp;
        temp->prev = newNode;
        newNode->prev = head;
        map[key] = newNode;
        return newNode->val;
    }
    
    void put(int key, int value) {
        if(map.size() == capacity){
            Node* temp = tail->prev;
            temp->prev->next = tail;
            tail->prev = temp->prev;
            temp->next = NULL;
            temp->prev = NULL;
            map.erase(temp->key);
        }
        Node* newNode = new Node(key,value);
        Node* temp = head->next;
        head->next = newNode;
        newNode->next = temp;
        temp->prev = newNode;
        newNode->prev = head;
        map[key] = newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */