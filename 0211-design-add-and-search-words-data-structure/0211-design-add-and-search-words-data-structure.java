class TrieNode{
    boolean isEnd = false;
    TrieNode children[] = new TrieNode[26];
}

class WordDictionary {
    
    /** Initialize your data structure here. */
    TrieNode root;
    public WordDictionary() {
        root = new TrieNode();
    }
    
    /** Adds a word into the data structure. */
    public void addWord(String word) {
        TrieNode temp = root;
        
        for(int i=0;i<word.length();i++){
            char ch = word.charAt(i);
            if(temp.children[ch-'a'] == null) temp.children[ch-'a'] = new TrieNode();
            temp = temp.children[ch-'a'];
        }
        temp.isEnd = true;
        
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    public boolean search(String word) {

        TrieNode temp = root;
        return search(word,0,temp);
        
    }
    
    public boolean search(String word,int i, TrieNode node){
        if(node == null) return false;
        
        if(i == word.length()) return node.isEnd;
        
        char ch = word.charAt(i);
        if(ch == '.'){
            for(int k=0;k<26;k++){
                if(search(word,i+1,node.children[k])) return true;
            }
        }else{
            if(search(word,i+1,node.children[ch-'a'])) return true;
        }

        return false;
    }
}