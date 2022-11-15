class Node{
    int count=0;
    Node child[];
    Node(){
        child = new Node[26];
    }
}
class Trie {

    /** Initialize your data structure here. */
    Node root;
    public Trie() {        
        root = new Node();
    }
    
    /** Inserts a word into the trie. */
    public void insert(String word) {
        Node trie=root;
        char []words= word.toCharArray();
        for(int i=0;i<words.length;i++){
            if (trie.child[words[i]-'a']==null){
                trie.child[words[i]-'a']= new Node();
            }
            trie=trie.child[words[i]-'a'];
        }
        trie.count+=1;
    }
    
    /** Returns if the word is in the trie. */
    public boolean search(String word) {
        Node node= root;
        int ch=word.charAt(0)-'a';
        for(int i=0;i<word.length();i++){
            ch=word.charAt(i)-'a';
            if(node.child[ch]!=null)
                node=node.child[ch];
            else return false;
        }return node.count!=0;
        
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    public boolean startsWith(String word) {
         Node node= root;
        
        for(int i=0;i<word.length();i++){
            int ch=word.charAt(i)-'a';
            if(node.child[ch]!=null)
                node=node.child[ch];
            else return false;
        }return true;

        
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */