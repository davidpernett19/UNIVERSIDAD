
package Corte3;

// Clase principal con el método main
public class Main {
    public static void main(String[] args) {
        // Crear una instancia de Producto usando el constructor sin parámetros
        Producto producto1 = new Producto();
        producto1.setCodigo("P001");
        producto1.setDescripcion("Laptop");
        producto1.setPrecio(750.50f);

        // Crear una instancia de Producto usando el constructor con parámetros
        Producto producto2 = new Producto("P002", "Smartphone", 350.99f);

        // Mostrar la información de los productos
        System.out.println("Producto 1: " + producto1);
        System.out.println("Producto 2: " + producto2);
    }
}
