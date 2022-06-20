class Trie {
    Map<Character,Trie>child;
    boolean isEnd;
    public Trie() {
        child = new HashMap<>();
        isEnd=false;
    }
    
    public void insert(String word) {
        Trie root = this;
        for(int i=0;i<word.length();i++){
            if(root.child.get(word.charAt(i))==null){
                root.child.put(word.charAt(i) ,new Trie());
            }
            root = root.child.get(word.charAt(i));
        }
        root.isEnd=true;
    }
    
    public boolean search(String word) {
        Trie root = this;
        for(int i=0;i<word.length();i++){
            if(root.child.get(word.charAt(i))==null){
                return false;
            }
            root = root.child.get(word.charAt(i));
        }
        return root.isEnd;
    }
    
    public boolean startsWith(String word) {
        Trie root = this;
        for(int i=0;i<word.length();i++){
            if(root.child.get(word.charAt(i))==null){
                return false;
            }
            root = root.child.get(word.charAt(i));
        }
        return true;
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */