package Parcial2;
import java.util.Scanner;

public class MainSPT {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("¿Qué tipo de vehículo va a comprar? (publico, particular, motocicleta)");
        String tipoVehiculo = scanner.nextLine();

        System.out.println("Ingrese el valor del vehículo:");
        double valorVehiculo = scanner.nextDouble();

        Vehiculo vehiculo = new Vehiculo(tipoVehiculo, valorVehiculo);
        double valorFinal = vehiculo.calcularvalortotal();

        if (valorFinal > 0) {
            System.out.println("El valor final a pagar con IVA e impuestos es: $" + valorFinal);
        }
    }
}pup