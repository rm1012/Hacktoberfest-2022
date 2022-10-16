/*
   1
  232
 34543
4567654
*/

import java.util.*;

public class Solution {

	public static void main(String[] args) {
		
		/* Your class should be named Solution.
	 	* Read input as specified in the question.
	 	* Print output as specified in the question.
		*/
        Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
        int k,l,m;int i;int j;
        for(i=1;i<=n;i++){
            l=i;
            for(j=n;j>i;j--){
                System.out.print(" ");
            }
            for(k=1;k<=i;k++,l++){
                System.out.print(l);
            }
            for (m = 2*(i-1);m>=i; m--) {
                if(m==0)
                    continue;
                
                System.out.print(m);
            } 
            System.out.println();
        }
	}

}
