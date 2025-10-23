
package tipotriangulo;
import javax.swing.*;

public class Main {
    int lado1, lado2, lado3;
    
    public void titulo(){
            System.out.println("Dijite 3 numeros para determinar el tipo de triangulo");
}
    
    public void leerNumeros() {
       
        lado1 = Integer.parseInt(JOptionPane.showInputDialog(" Dijite el primer lado "));
        lado2 = Integer.parseInt(JOptionPane.showInputDialog(" Dijite el segundo lado "));
        lado3 = Integer.parseInt(JOptionPane.showInputDialog(" Dijite el tercer lado "));
    }
    public void tipotriangulo(){
        if  (lado1==lado2&&lado1==lado3){
            System.out.println("Todos sus lados son iguales, es un traingulo Equilatero");
            }
            else if (lado1==lado2||lado1==lado3||lado2==lado3){
            System.out.println("Solo dos de sus lados son iguales, es un triangulo Isoceles");
            }
            else {
                System.out.println("Ninguno de sus lados son iguales, es un triangulo Escaleno");
            }
    } 
}
