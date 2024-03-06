//Write a Program to Replace all 0’s with 1’s in a Number.
//For example, the number 2048 has to be replaced with 2148.
public class Replace_zeros_with_ones{
    static int replaceZerosWithOnes(int num) {
       if (num == 0) {
          return 1;
       }
       int ans = 0, tmp = 1;
       while (num > 0) {
          int d = num % 10;
          if (d == 0) {
             d = 1;
          }
          ans = d * tmp + ans;
          num = num / 10;
          tmp = tmp * 10;
       }
       return ans;
    }
 
    public static void main(String[] args) {
 
       int n = 204;
       int result = replaceZerosWithOnes(n);
       System.out.println("After replacing zeros with ones " + n + " becomes " + result);
    }
 }  