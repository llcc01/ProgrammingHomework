//class Solution {
    //KMP
    private void jump (String s,int[] jump){//得到最长公共前后缀长度——跳跃到的位置
        jump[0]=-1;
        int j=0,k=jump[j];
        while(j<jump.length-1){
            if(k==-1||s.charAt(j)==s.charAt(k)) jump[++j]=++k;
            else k=jump[k];
        }
    }
    public int strStr(String haystack, String needle) {
        if(needle.equals("")) return 0;
        int target=0,now=0;
        int[] jump=new int[needle.length()];
        jump(needle,jump);
        while(target<haystack.length()){
            if(haystack.charAt(target)!=needle.charAt(now)){
                if(jump[now]!=-1) now=jump[now];
                else target++;
            }else{
                if(now==needle.length()-1) return target+1-needle.length();
                target++;now++;
            }
        }
        return -1;
    }
}
