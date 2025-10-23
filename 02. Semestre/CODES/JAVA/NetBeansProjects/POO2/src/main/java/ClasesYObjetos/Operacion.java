
package ClasesYObjetos;
import javax.swing.*;
public class Operacion {
    int numero1, numero2, suma, resta, multiplicacion, division, modulo;
    
    public void leerNumeros() {
        numero1 = Integer.parseInt(JOptionPane.showInputDialog("Dijite un numero "));
        numero2 = Integer.parseInt(JOptionPane.showInputDialog("Dijite un numero "));
    }
        public void sumar(){
            suma = numero1 + numero2;
        }
        public void resta (){
            resta = numero1 - numero2;
        }
        public void multiplicacion(){
            multiplicacion = numero1 * numero2;
        }
        public void division(){
            division = numero1 / numero2;
        }
        public void modulo(){
            modulo = numero1 % numero2;
        }
        public void mostrarResultados(){
            System.out.println("La suma es: "+suma);
            System.out.println("La resta es: "+resta);
            System.out.println("La multipilicacion es: "+multiplicacion);
            System.out.println("La division es: "+division);
            System.out.println("El modulo es: "+modulo);
        }
    }

