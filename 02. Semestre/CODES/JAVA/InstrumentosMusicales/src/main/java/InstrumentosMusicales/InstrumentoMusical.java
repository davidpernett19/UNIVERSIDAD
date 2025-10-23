
package InstrumentosMusicales;

public class InstrumentoMusical {
    // Atributos
    private String nombre;  // Nombre del instrumento
    private String tipo;    // Tipo de instrumento (cuerda, viento, percusión, etc.)
    public String color;      // nuemero de hucos para la flauta

    public void setColor(String color) {
        this.color = color;
    }

    public String getColor() {
        return color;
    }

    public InstrumentoMusical(String color) {
        this.color = color;
    }

    // Constructor
    public InstrumentoMusical(String nombre, String tipo) {
        this.nombre = nombre;
        this.tipo = tipo;
    }
    // Getters
    public String getNombre() {
        return nombre;
    }
    public String getTipo() {
        return tipo;
    }
    // Setters
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
    public void tocar() {
        System.out.println("Tocando el instrumento: " + nombre);
    }
}
