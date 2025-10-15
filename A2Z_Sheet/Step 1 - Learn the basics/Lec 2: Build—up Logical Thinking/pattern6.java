import java.util.*;

public class Main {
    public static void main(String[] args) {
      for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
          System.out.print(j+1);
        }
        System.out.println();
      }
  }
}


/*
Output:

12345
1234
123
12
1

*/
