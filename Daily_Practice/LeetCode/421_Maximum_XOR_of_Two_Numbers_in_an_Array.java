class Solution {
    class Trie{
        Trie child[];
        Trie(){
            child= new Trie[2];
        }
    }
    public void buildTrie(int nums[],Trie head){
        for(int i=0;i<nums.length;i++){
            Trie root =head;
            int curr=nums[i];
            for(int j=31;j>=0;j--){
                int currBit = (curr>>>j)&1;
                if(root.child[currBit]==null){
                    root.child[currBit]=new Trie();
                }
                root=root.child[currBit];
            }
        }
    }
    
    int findXor(int curr,Trie head){
        int posXor=0;
        Trie root =head;
        for(int j=31;j>=0;j--){
                int currBit = (curr>>>j)&1;
                int findBit = currBit==0?1:0;
            
                if(root.child[findBit]==null){
                   posXor =posXor*2 +currBit;
                    root=root.child[currBit];
                }
                else{
                    posXor =posXor*2 +findBit;
                    root=root.child[findBit];
                }
        }
        return posXor;
    }
    public int findMaximumXOR(int[] nums) {
        if(nums.length==0 || nums.length==1) return 0;
    
        Trie root =new Trie();
        buildTrie(nums,root);
        int ans= Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            int possibleXor = findXor(nums[i],root);
            ans = Math.max(ans,nums[i]^possibleXor);
        }
        return ans;
    }
    
}