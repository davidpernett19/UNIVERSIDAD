
package Corte3;

public class Producto {
    // Atributos privados
    private String codigo;
    private String descripcion;
    private double precio;

    // Constructor sin argumentos (constructor por defecto)
    public Producto() {
        this.codigo = "";
        this.descripcion = "";
        this.precio = 0.0;
    }

    // Constructor con todos los atributos
    public Producto(String codigo, String descripcion, double precio) {
        this.codigo = codigo;
        this.descripcion = descripcion;
        this.precio = precio;
    }

    // Getters y Setters
    public String getCodigo() {
        return codigo;
    }

    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }

    public String getDescripcion() {
        return descripcion;
    }

    public void setDescripcion(String descripcion) {
        this.descripcion = descripcion;
    }

    public double getPrecio() {
        return precio;
    }

    public void setPrecio(double precio) {
        this.precio = precio;
    }

    // Método para representar el objeto como texto (opcional)
    @Override
    public String toString() {
        return "Producto{" +
                "codigo='" + codigo + '\'' +
                ", descripcion='" + descripcion + '\'' +
                ", precio=" + precio +
                '}';
    }
}
