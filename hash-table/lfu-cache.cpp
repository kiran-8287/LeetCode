class LFUCache {
public:
    int capacity;
    int minFreq;
    
    class Node {
    public:
        int key, val, freq;
        Node *prev, *next;
        Node(int k, int v) {
            key = k;
            val = v;
            freq = 1;
            prev = nullptr;
            next = nullptr;
        }
    };

    class DLL {
    public:
        Node *head, *tail;
        int size;
        
        DLL() {
            head = new Node(-1, -1);
            tail = new Node(-1, -1);
            head->next = tail;
            tail->prev = head;
            size = 0;
        }

        void insertFront(Node* node) {
            node->next = head->next;
            node->prev = head;
            head->next->prev = node;
            head->next = node;
            size++;
        }

        void removeNode(Node* node) {
            node->prev->next = node->next;
            node->next->prev = node->prev;
            node->next = node->prev = nullptr;
            size--;
        }

        Node* removeLast() {
            if (size == 0) return nullptr;
            Node* node = tail->prev;
            removeNode(node);
            return node;
        }
    };

    unordered_map<int, Node*> keymap;
    unordered_map<int, DLL*> freqmap;

    LFUCache(int capacity) {
        this->capacity = capacity;
        minFreq = 0;
    }
    
    int get(int key) {
        if (capacity == 0 || keymap.find(key) == keymap.end()) return -1;
        Node* node = keymap[key];
        updateFreq(node);
        return node->val;
    }
    
    void put(int key, int value) {
        if (capacity == 0) return;

        if (keymap.find(key) != keymap.end()) {
            Node* node = keymap[key];
            node->val = value;
            updateFreq(node);
        } else {
            if ((int)keymap.size() == capacity) {
                DLL* list = freqmap[minFreq];
                Node* toRemove = list->removeLast();
                keymap.erase(toRemove->key);
                delete toRemove;
            }
            Node* newNode = new Node(key, value);
            minFreq = 1;
            if (freqmap.find(1) == freqmap.end()) {
                freqmap[1] = new DLL();
            }
            freqmap[1]->insertFront(newNode);
            keymap[key] = newNode;
        }
    }

private:
    void updateFreq(Node* node) {
        int oldFreq = node->freq;
        freqmap[oldFreq]->removeNode(node);

        if (oldFreq == minFreq && freqmap[oldFreq]->size == 0) {
            minFreq++;
        }

        node->freq++;
        if (freqmap.find(node->freq) == freqmap.end()) {
            freqmap[node->freq] = new DLL();
        }
        freqmap[node->freq]->insertFront(node);
    }
};


/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */