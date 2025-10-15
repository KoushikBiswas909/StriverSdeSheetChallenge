import java.util.*;

public class Main {
    public static void main(String[] args) {
      for(int i=0;i<5;i++){
        for(int k=5;k>i+1;k--){
          System.out.print(" ");
        }
        for(int j=0;j<2*i+1;j++){
          System.out.print("*");
        }
        System.out.println();
      }
  }
}

/*
Output:

    *
   ***
  *****
 *******
*********

*/
