package metododepago;
import javax.swing.*;
public class Tipodepago {
    
public class Main {
    double valorArticulo, iva, totalSinIva, totalConIva, totalPagar;
    int cantidadArticulos;

    public void leerDatos() {
        valorArticulo = Double.parseDouble(JOptionPane.showInputDialog("Ingrese el valor del artículo:"));
        iva = Double.parseDouble(JOptionPane.showInputDialog("Ingrese el porcentaje de IVA (ej: 19 para 19%):"));
        cantidadArticulos = Integer.parseInt(JOptionPane.showInputDialog("Ingrese la cantidad de artículos:"));
    }
    public void calcularTotalConIva() {
        totalSinIva = valorArticulo * cantidadArticulos;  // Total sin IVA
        totalConIva = totalSinIva + (totalSinIva * iva / 100);  // Añadimos el IVA
    }
    public void pagoEnEfectivo() {
        double descuento = totalConIva * 0.15;  // 15% de descuento
        totalPagar = totalConIva - descuento;
        JOptionPane.showMessageDialog(null, "Pago en efectivo: \n15% de descuento aplicado.\nTotal a pagar: $" + totalPagar);
    }
    
    public void pagoConDebito() {
        double descuento = totalConIva * 0.10;  // 10% de descuento
        totalPagar = totalConIva - descuento;
        JOptionPane.showMessageDialog(null, "Pago con tarjeta de débito: \n10% de descuento aplicado.\nTotal a pagar: $" + totalPagar);
    }

    public void pagoConCredito() {
        double descuento = totalConIva * 0.05;  // 5% de descuento
        totalPagar = totalConIva - descuento;
        JOptionPane.showMessageDialog(null, "Pago con tarjeta de crédito: \n5% de descuento aplicado.\nTotal a pagar: $" + totalPagar);
    }
    
    }
    }