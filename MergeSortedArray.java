class MergeSortedArray{
    public int[] merge(int[] nums1, int m, int[] nums2, int n) {
        if (n == 0) {
            return nums1;
        }
        int temp;
        int x = m + n - 1, y = n - 1;

        for (int i = 0; i < (m + n); i++){
            if (nums1[x] == 0) {
                temp = nums1[x];
                nums1[x] = nums2[y];
                nums2[y] = temp;
                x--;
                y--;
            } 
            else {
                if (Math.min(nums1[x], nums2[y]) == nums1[x]) {
                    x--;
                }
                else if(Math.min(nums1[x], nums2[y]) == nums2[y]){
                    temp = nums1[x];
                    nums1[x] = nums2[y];
                    nums2[y] = temp;
                    x--;
                }
            }
        }
        return nums1;
    }
    public static void main(String [] args){
        MergeSortedArray merger = new MergeSortedArray();
        int[] nums1 = {1,2,3,0,0,0}; // nums1 has extra space for nums2
        int[] nums2 = {1,2,3,0,0,0};
        int m = 3; // Number of elements in nums1
        int n = 3; // Number of elements in nums
        int[] result = merger.merge(nums1, m, nums2, n);

        for (int num : result) {
            System.out.print(num + " ");}
    }
    
}