
package Cudrado;
import javax.swing.*;
public class POO3 {
int lados,area, perimetro;

    public void leerNumeros() {
        lados = Integer.parseInt(JOptionPane.showInputDialog("Dijite un numero "));
            }
            public void area(){
            area = lados*lados;
            }
            public void perimetro(){
                perimetro = lados*4;
            }
            public void mostarResultados(){
                System.out.println("El AREA del cuadrado es "+area);
                System.out.println("El PERIMETRO del cuadrado es "+perimetro);
            }
}
