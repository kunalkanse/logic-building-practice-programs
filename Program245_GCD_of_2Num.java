import java.util.Scanner;

// This is the naive solution
// Ny using Euclidean formula we can create efficient solution

class Kunal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER NUMBER : ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        int digitCount = gcd(num1, num2);
        System.out.println(digitCount);
    }

    private static int gcd(int num1, int num2) {
        int res = Math.min(num1, num2);  // gcd will be smaller ot equal to the minimum number

        while (res > 0) {
            if (num1 % res == 0 && num2 % res == 0) {
                break;
            }

            res--;
        }

        return res;
    }
}
