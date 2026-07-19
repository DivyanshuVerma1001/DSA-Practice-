#include <iostream>
using namespace std;

class TrieNode{
    public :
    TrieNode *child[26];
    bool isEndofword;
    TrieNode(){
        isEndofword= false;
        for (int i =0;i<26;i++){
            child[i]=NULL;
        }
    }
};
class Trie{
    TrieNode * root = new TrieNode();
    public :
    Trie(){
        root= new TrieNode();
    }
    void insert(string word){
        TrieNode * node=  root;
        for (char c: word){
            int index= c-'a';
            if (node->child[index]==NULL){
                node->child[index]= new TrieNode();
                node= node->child[index];
            }else{
                node=node->child[index];
            }
        }
        node->isEndofword= true;
        cout<<"word added successfully"<<endl;
    }
    bool search(string word){
        TrieNode * node= root;
        for (char c : word){
            int index= c -'a';
            if (node->child[index]==NULL) return 0;
            node = node->child[index];
        }
        return node->isEndofword;

    }
};


int main(){
    cout<<"starting of program"<<endl;
    Trie *tree= new Trie();
    tree->insert("apple");
    cout<<tree->search("apple")<<endl<<tree->search("app");
}