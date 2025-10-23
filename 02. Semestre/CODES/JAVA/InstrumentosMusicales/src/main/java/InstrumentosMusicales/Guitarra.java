
package InstrumentosMusicales;

public class Guitarra extends InstrumentoMusical {

    private int numeroDeCuerdas;
    public Guitarra(String nombre, String tipo, int numeroDeCuerdas) {
        super(nombre, tipo);  // Llama al constructor de la superclase
        this.numeroDeCuerdas = numeroDeCuerdas;
    }
    public int getNumeroDeCuerdas() {
        return numeroDeCuerdas;
    }
    public void setNumeroDeCuerdas(int numeroDeCuerdas) {
        this.numeroDeCuerdas = numeroDeCuerdas;
    }
    @Override
    public void tocar() {
        System.out.println("Tocando la guitarra con " + numeroDeCuerdas + " cuerdas.");
    }
}

