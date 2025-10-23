package Parcial2;

public class Vehiculo {
    String tipo;
    double precioBase;
   
    public Vehiculo(String tipo, double precioBase) {
        this.tipo = tipo;
        this.precioBase = precioBase;
    }
    public Vehiculo(String tipo) {
        this.tipo = tipo;
        this.precioBase = 0.0;
    }
    public double calcularvalortotal() {
        double iva = 0.19;
        double impuesto = 0.0;

        switch (tipo.toLowerCase()) {
            case "publico":
                impuesto = 0.037;
                break;
            case "particular":
                impuesto = 0.027;
                break;
            case "motocicleta":
                impuesto = 0.017;
                break;
            default:
                System.out.println("Tipo de vehículo no válido.");
                return 0.0;
        }

        double valorIVA = precioBase * iva;
        double valorImpuesto = precioBase * impuesto;
        return precioBase + valorIVA + valorImpuesto;
    }

    public void PrecioBase(double precioBase) {
        this.precioBase = precioBase;
    }
}
