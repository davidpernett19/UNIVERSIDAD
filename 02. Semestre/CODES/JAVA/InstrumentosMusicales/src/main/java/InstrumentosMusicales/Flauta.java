
package InstrumentosMusicales;

public class Flauta extends InstrumentoMusical{
    private String material;
    public Flauta (String nombre, String tipo, String material){
        super (nombre, tipo);
        this.material = material;
    }
    public String getMaterial(){
        return material;
    }
    public void setMaterial(String material){
        this.material = material;
    }
    @Override
    public void tocar(){
        System.out.println("Tocando la Flauta hecga de "+material+".");
    }
}