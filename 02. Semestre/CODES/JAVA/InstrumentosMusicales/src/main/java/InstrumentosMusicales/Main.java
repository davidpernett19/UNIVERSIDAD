
package InstrumentosMusicales;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Registro de instrumentos musicales");
        System.out.println("1. Guitarra");
        System.out.println("2. Piano");
        System.out.println("3. Batería");
        System.out.println("4. Trompeta");
        System.out.println("5. Flauta");
        System.out.print("Seleccione el instrumento (1-5): ");
        int opcion = scanner.nextInt();
        scanner.nextLine();
        InstrumentoMusical instrumento = null;
        switch (opcion) {
            case 1:
                System.out.print("Nombre de la guitarra: ");
                String nombreGuitarra = scanner.nextLine();
                System.out.print("Tipo de guitarra: ");
                String tipoGuitarra = scanner.nextLine();
                System.out.print("Número de cuerdas: ");
                int cuerdas = scanner.nextInt();
                instrumento = new Guitarra(nombreGuitarra, tipoGuitarra, cuerdas);
                break;
            case 2:
                System.out.print("Nombre del piano: ");
                String nombrePiano = scanner.nextLine();
                System.out.print("Tipo de piano: ");
                String tipoPiano = scanner.nextLine();
                System.out.print("Número de teclas: ");
                int teclas = scanner.nextInt();
                instrumento = new Piano(nombrePiano, tipoPiano, teclas);
                break;
            case 3:
                System.out.print("Nombre de la batería: ");
                String nombreBateria = scanner.nextLine();
                System.out.print("Tipo de batería: ");
                String tipoBateria = scanner.nextLine();
                System.out.print("Número de tambores: ");
                int tambores = scanner.nextInt();
                instrumento = new Bateria(nombreBateria, tipoBateria, tambores);
                break;
            case 4:
                System.out.print("Nombre de la trompeta: ");
                String nombreTrompeta = scanner.nextLine();
                System.out.print("Tipo de trompeta: ");
                String tipoTrompeta = scanner.nextLine();
                System.out.print("Material de la trompeta: ");
                String material = scanner.nextLine();
                instrumento = new Trompeta(nombreTrompeta, tipoTrompeta, material);
                break;
            case 5:
                System.out.print("Nombre de la flauta: ");
                String nombreFlauta = scanner.nextLine();
                System.out.print("Tipo de flauta: ");
                String tipoFlauta = scanner.nextLine();
                System.out.print("Color de flauta: ");
                String color = scanner.nextLine();
                instrumento = new Trompeta(nombreFlauta, tipoFlauta, color);
                break;    
            default:
                System.out.println("Opción no válida.");
                break;
        }
        if (instrumento != null) {
            System.out.println("\nInformación del instrumento registrado:");
            System.out.println("Nombre: " + instrumento.getNombre());
            System.out.println("Tipo: " + instrumento.getTipo());
            System.out.println("El Color: " + instrumento.getTipo());
            instrumento.tocar(); // Llamada al método específico
        }

        scanner.close();
    }
}