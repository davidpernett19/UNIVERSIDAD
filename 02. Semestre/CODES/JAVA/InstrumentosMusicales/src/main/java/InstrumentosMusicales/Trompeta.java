
package InstrumentosMusicales;

public class Trompeta extends InstrumentoMusical {
    private String material;
    public Trompeta(String nombre, String tipo, String material) {
        super(nombre, tipo);
        this.material = material;
    }
    public String getMaterial() {
        return material;
    }
    public void setMaterial(String material) {
        this.material = material;
    }
    @Override
    public void tocar() {
        System.out.println("Tocando la trompeta hecha de " + material + ".");
    }
}
