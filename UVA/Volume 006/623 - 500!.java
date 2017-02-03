import java.util.Scanner;
import java.math.BigInteger;
import java.io.BufferedReader;

 
class Main{
    public static void main(String[] args){

Scanner input=new Scanner(System.in);
while(input.hasNext()){

    BigInteger fac = BigInteger.ONE;
    int num = input.nextInt();
        for(int i=2;i<=num;i++)
            fac=fac.multiply(BigInteger.valueOf(i));
            
		System.out.println(num +"!");
        System.out.println(fac);
    }
};
};
