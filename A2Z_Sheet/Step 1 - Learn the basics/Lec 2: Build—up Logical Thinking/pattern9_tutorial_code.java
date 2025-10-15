import java.util.*;

public class Main {
    public static void main(String[] args) {
      
      int rows = 5;
      
      // Upper Part
      for(int i=0;i<rows;i++){
        
        for(int s=0;s<rows-i-1;s++){
          System.out.print(" ");
        }
        
        for(int j=0;j<2*i+1;j++){
          System.out.print("*");
        }
        
        System.out.println();
      }
      
      // Lower Part
      for(int i=rows-1; i>=0; i--){
        
        for(int s=0;s<rows-i-1;s++){
          System.out.print(" ");
        }
        
        for (int j=0;j<2*i+1 ;j++ ){
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
*********
 *******
  *****
   ***
    *
*/
