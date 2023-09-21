class TrieNode{
public:
    TrieNode *child[26];
    bool isEnd = false;
};
class Trie {
    TrieNode *root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *p = root;
        for(char w:word){
            int i = w-'a';
            if(!p->child[i]) p->child[i] = new TrieNode();
            p = p->child[i];
        }
        p->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode *p = root;
        for(auto w:word){
            int i = w-'a';
            if(!p->child[i]) return false;
            p = p->child[i];
        }
        return p->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode *p = root;
        for(auto w:prefix){
            int i = w-'a';
            if(!p->child[i]) return false;
            p = p->child[i];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
