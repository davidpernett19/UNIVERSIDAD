package Usuario;

public class Usuario {
    String genero;
    String piel;
    int edad;
    double altura;
           
    public Usuario (String genero, String piel, int edad, double altura){
        
        genero = this.genero;
        piel = this.piel;
        edad = this.edad;
        altura = this.altura;    
    }
    public void mostrardatos(){
            System.out.println("El genero de la persona es: "+genero);
            System.out.println("el color de piel es: "+piel);
            System.out.println("la edad es: "+edad);
            System.out.println("La altura es; "+altura);
    }
}
