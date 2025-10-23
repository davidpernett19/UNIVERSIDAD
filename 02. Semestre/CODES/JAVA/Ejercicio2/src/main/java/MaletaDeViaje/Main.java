
package MaletaDeViaje;

// Clase principal con el método main
public class Main {
    public static void main(String[] args) {
        // Crear una instancia de MaletaDeViaje usando el constructor sin parámetros
        MaletaDeViaje maleta1 = new MaletaDeViaje();
        maleta1.setMarca("Samsonite");
        maleta1.setDescripcion("Maleta rígida para viajes largos");
        maleta1.setPrecio(120.99f);
        maleta1.setColor("Negro");

        // Crear una instancia de MaletaDeViaje usando el constructor con parámetros
        MaletaDeViaje maleta2 = new MaletaDeViaje("American Tourister", "Maleta ligera para cabina", 80.50f, "Rojo");

        // Mostrar la información de las maletas
        System.out.println("Maleta 1: " + maleta1);
        System.out.println("Maleta 2: " + maleta2);
    }
}
