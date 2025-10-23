
package InstrumentosMusicales;

public class Bateria extends InstrumentoMusical {
    private int numeroDeTambores;
    public Bateria (String nombre, String tipo, int numeroDeTambores) {
        super(nombre, tipo);
        this.numeroDeTambores = numeroDeTambores;
    }
    public int getNumeroDeTeclas() {
        return numeroDeTambores;
    }
    public void setNumeroDeTeclas(int numeroDeTeclas) {
        this.numeroDeTambores = numeroDeTeclas;
    }
    @Override
    public void tocar() {
        System.out.println("Tocando el piano con " + numeroDeTambores + " teclas.");
    }
}