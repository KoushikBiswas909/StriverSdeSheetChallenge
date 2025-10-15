import java.util.*;

public class Main {
    public static void main(String[] args) {
      for(int i=0;i<5;i++){
        for(int k=0;k<i;k++){
          System.out.print(" ");
        }
        for(int j=5*2-i;j>i+1;j--){
          System.out.print("*");
        }
        System.out.println();
      }
  }
}

/*
Output:

*********
 *******
  *****
   ***
    *

*/
