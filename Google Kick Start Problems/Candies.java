import java.io.*;
import java.util.*;

public class Candies {
    
    // problem and class constants
    public static final int UPDATE = 'U';
    public static final int QUERY = 'Q';
    
    // segment tree
    public static class SegmentTreeNode {
        private static long DEFAULT;
        private long val, l, r;
        SegmentTreeNode left, right;
        private long[] ar;

        public SegmentTreeNode(long[] arr, int l, int r) {
            // default should just be 0, no assumptions
            DEFAULT = 0;
            ar = arr;
            this.l = l;
            this.r = r;
            if (l == r) {
                this.val = arr[l];
            } else {
                int mid = (l + r) / 2;

                this.left = new SegmentTreeNode(arr, l, mid);
                this.right = new SegmentTreeNode(arr, mid + 1, r);
                this.val = func(arr, l, r);
            }
        }

        // Find the func between a and b inclusive
        // TODO: problem is that its just adding up vals in array, need to change query formula to include sweetness score logic in here
        public long query(int a, int b) {
            if (b < l || r < a) {
                return DEFAULT;
            }
            if (a <= l && r <= b) {
                return this.val;
            }
            return left.query(a, b) + right.query(a, b);
        }
        
        // sweetness score
        public long func(long[] a, long left, long right) {
        	long ans = 0;
        	int neg = 0;
        	// zero indexed so no IOUBE
        	for (long i = left; i <= right; i++) {
        		long t = a[(int) i] * (i + 1);
        		if (neg % 2 == 1) {
        			t *= -1;
        		}
        		ans += t;
        		neg++;
        	}
        	return ans;
        	
        }

        public long update(int index, long value) {
            if (index < l || index > r) {
                return this.val;
            }

            if (l == index && r == index) {
                this.ar[index] = value;
                this.val = func(ar, l, r);
                return this.val;
            }
            // update finds GCD of the left and right node values recursively
            this.val = left.update(index, value) + right.update(index, value);
            return this.val;
        }
    }


    
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int T = s.nextInt();
        for (int i = 1; i < T + 1; i++) {
        	int len = s.nextInt();
        	int op = s.nextInt();
        	long[] nums = new long[len];
        	// set up array
        	for (int a = 0; a < len; a++) {
        		nums[a] = s.nextLong();
        	}
        	SegmentTreeNode root = new SegmentTreeNode(nums, 0, len - 1);
        	// go thru ops
        	long ans = 0;
        	for (int j = 0; j < op; j++) {
        		char type = s.next().charAt(0);
        		int a = s.nextInt();
        		int b = s.nextInt();
        		if (type == UPDATE) {
        			root.update(a - 1, b);
        		} else if (type == QUERY) {
        			ans += root.query(a - 1, b - 1);
        		}
        	}
        	System.out.println("Case #" + i + ": " + ans);
        }
        s.close();
    }
}