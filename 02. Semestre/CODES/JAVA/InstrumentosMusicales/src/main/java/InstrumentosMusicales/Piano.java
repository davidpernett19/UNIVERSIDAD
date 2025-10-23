
package InstrumentosMusicales;

public class Piano extends InstrumentoMusical {
    private int numeroDeTeclas;
    public Piano(String nombre, String tipo, int numeroDeTeclas) {
        super(nombre, tipo);
        this.numeroDeTeclas = numeroDeTeclas;
    }
    public int getNumeroDeTeclas() {
        return numeroDeTeclas;
    }
    public void setNumeroDeTeclas(int numeroDeTeclas) {
        this.numeroDeTeclas = numeroDeTeclas;
    }
    @Override
    public void tocar() {
        System.out.println("Tocando el piano con " + numeroDeTeclas + " teclas.");
    }
}
