import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num;
        num = scan.nextInt();
        for(int i = num; i <= num && i > 0; i--){
            System.out.print(i +" ");
        }
                
    }
}