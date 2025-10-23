package Ejemplos;
import java.io.*;

public class Prog36 {
    public static void main(String[] args)throws IOException {
        int a,b,c,d,r,f;
        a=0;b=0;c=0;d=0;r=0;f=1;
        String valor;
        BufferedReader Entrada=new BufferedReader (new InputStreamReader(System.in));
        System.out.print("Dijite el primer valor  ");
        valor= Entrada.readLine();
        a=Integer.parseInt(valor);
        System.out.print("Dijite el segundo valor  ");
        valor= Entrada.readLine();
        b=Integer.parseInt(valor);
        System.out.print("Dijite el tercer valor  ");
        valor= Entrada.readLine();
        c=Integer.parseInt(valor);
        System.out.print("Dijite el cuarto valor  ");
        valor= Entrada.readLine();
        d=Integer.parseInt(valor);
        if ((a>0)&&(b>0)&&(d>0)&&(c>0)) 
            {
                if ((a>b)&&(a>c)&&(a>d))
                {
                r=a%2;
                if (r==0)
                System.out.println(""+a+"Par");    
                else
                System.out.println(""+a+"Impar"); 
                }
                else
                {
                    if ((b>c)&&(b>d))
                    {
                    r=b%2;
                    if (r==0)
                    System.out.println(""+b+"par");
                    else
                    System.out.println(""+b+"Impar");
                    }
                    else     
                    {
                        if (c>d)
                         {
                        r=c%2;
                        if (r==0) 
                        System.out.println(""+c+"Par");
                        else
                        System.out.println(""+c+"Impar");
                         }
                        else
                        {
                        r=d%2;
                        if (r==0)
                        System.out.println(""+d+"Par");
                        else
                        System.out.println(""+d+"Impar");                           
                        }
                        }
                    }
            
            if ((a<b)&&(a<c)&&(a<d)) 
            {
            f=f*a;
            System.out.println(""+a+""+f);
            }
            else
            {
                if ((b<c)&&(b<d)) 
                {
                    f=f*b;
                    System.out.println(""+b+""+f);    
                }
                else
                {
                    if (c<d) 
                    {
                        f=f*c;
                        System.out.println(""+c+""+f);    
                    }
                    else
                    f=f*d;
                    System.out.println(""+d+""+f);
                }
            }
            }
            else            
            System.out.println("valor invalido");
                           
        }
}    
                
