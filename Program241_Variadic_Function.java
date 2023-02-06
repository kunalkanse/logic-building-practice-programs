
class Var_Fun
{
    public void Variadic(int ... a)
    {    
        System.out.println("Number of arguments are : "+a.length);
    }
}

public class Program241_Variadic_Function 
{
    public static void main(String[] args) 
    {
        Var_Fun vobj = new Var_Fun();
        vobj.Variadic(10,20,30);
    }    
}
