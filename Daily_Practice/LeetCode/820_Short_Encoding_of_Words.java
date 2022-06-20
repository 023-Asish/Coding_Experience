class Solution {
    public int minimumLengthEncoding(String[] words) {
        int n=words.length;
        if(n==1){
            return 1+words[0].length();
        }
        Arrays.sort(words,(a,b)->b.length()-a.length());
        String ans="";
        for(int i=0;i<words.length;i++){
            if(ans==""){
                ans+=words[i]+"#";
            }
            else if(!ans.contains(words[i]+"#"))
            {
                ans+=words[i]+"#";
            }
        }
        System.out.println(ans);
        return ans.length();
    }
}