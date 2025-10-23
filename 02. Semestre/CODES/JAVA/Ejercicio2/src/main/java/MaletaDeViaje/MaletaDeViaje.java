
package MaletaDeViaje;

// Definición de la superclase Maleta_de_viaje
public class MaletaDeViaje {
    // Atributos privados
    private String marca;
    private String descripcion;
    private float precio;
    private String color;

    // Constructor sin parámetros
    public MaletaDeViaje() {
        this.marca = "";
        this.descripcion = "";
        this.precio = 0.0f;
        this.color = "";
    }

    // Constructor con parámetros
    public MaletaDeViaje(String marca, String descripcion, float precio, String color) {
        this.marca = marca;
        this.descripcion = descripcion;
        this.precio = precio;
        this.color = color;
    }

    // Métodos getters y setters
    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getDescripcion() {
        return descripcion;
    }

    public void setDescripcion(String descripcion) {
        this.descripcion = descripcion;
    }

    public float getPrecio() {
        return precio;
    }

    public void setPrecio(float precio) {
        this.precio = precio;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    // Método toString para mostrar información de la maleta
    @Override
    public String toString() {
        return "MaletaDeViaje{" +
                "marca='" + marca + '\'' +
                ", descripcion='" + descripcion + '\'' +
                ", precio=" + precio +
                ", color='" + color + '\'' +
                '}';
    }
}
