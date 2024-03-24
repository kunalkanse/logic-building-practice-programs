import java.util.Scanner;

class Kunal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER NUMBER : ");
        int num = sc.nextInt();

        boolean status = isPrime(num);
        System.out.println(status);
    }

    private static boolean isPrime(int num) {
        // loop run only till square root of number
        for (int i = 2; i*i<num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}
