class Solution {
    public boolean isSubsequence(String s, String t) {
        if(s.length() > t.length()){
            return false;
        }
        int x = 0, y = 0;

        while(x < s.length() && y < t.length()){
            if(s.charAt(x) == t.charAt(y)){
                x++;
            }
            y++;
        }
        if(x == s.length()){
            return true;
        }
        else{
            return false;
        }
    }
}
