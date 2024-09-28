import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
       Scanner scan = new Scanner(System.in);
       int num = scan.nextInt();
       for(int i = 1; i < 6; i++){
        int a= num*i;
        System.out.print(a + " ");
       }
    }
}