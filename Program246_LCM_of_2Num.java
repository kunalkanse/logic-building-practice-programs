import java.util.Scanner;

class Kunal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER NUMBER : ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        int digitCount = LCM(num1, num2);
        System.out.println(digitCount);
    }

    private static int LCM(int num1, int num2) {
        int res = Math.max(num1, num2); // LCM will starts from maximum number

        while (true) {
            if ((res % num1 == 0) && (res % num2 == 0)) {
                return res;
            }
            res++;
        }
    }
}
