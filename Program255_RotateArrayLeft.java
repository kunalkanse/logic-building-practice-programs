package logic-building-practice-programs
;

import java.util.Scanner;

public class Program255_RotateArrayLeft.java {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr1[] = {11,12,13,14,15,16};

        System.out.println("Hoe many times you want to rotate : ");
        int rotate = sc.nextInt();
        for (int i = 0; i < rotate; i++) {
            int temp = arr1[0];
            for (int j = 0; j < arr1.length-1; j++) {
                arr1[j] = arr1[j+1];
            }
            arr1[arr1.length-1] = temp;
        }

        for(int a : arr1){
            System.out.print(a+"\t");
        }
    }
}
