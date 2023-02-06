
class Var_Fun
{
    public int Variadic(int ... a)
    {    
        System.out.println("Number of arguments are : "+a.length);
        
        int sum = 0;
        for(int no : a)
        {
            sum = sum + no; 
        }

        return sum;
    }
}

public class Program243_Variadic_Function 
{
    public static void main(String[] args) 
    {
        Var_Fun vobj = new Var_Fun();
        int iSum = vobj.Variadic(10,20,30,50,60);

        System.out.println("Sum is : " +iSum);
    }    
}
