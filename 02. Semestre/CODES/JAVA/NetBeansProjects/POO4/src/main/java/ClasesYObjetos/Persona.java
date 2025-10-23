package ClasesYObjetos;
public class Persona {
    
    String nombre;
    int edad;
    double estatura;
    String piel;
    
    public Persona( String nombre , int edad , double estatura, String piel){
        this.nombre = nombre;
        this.edad=edad;
        this.estatura=estatura;
        this.piel=piel;
    }
    public void mostrardatos(){
        System.out.println("El nombre es: "+nombre);
        System.out.println("la edad es : "+edad);
        System.out.println("La altura es: "+estatura);
        System.out.println("El tono de piel es: "+piel);
    }
}
