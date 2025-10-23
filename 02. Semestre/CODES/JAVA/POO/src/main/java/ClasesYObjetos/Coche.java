package ClasesYObjetos;
public class Coche {
    String color;
    String marca;
    String silleteria;
    int km;
    public static void main(String[] args) {
        Coche coche1 = new Coche();
        coche1.color = "Blanco";
        coche1.marca = "Audi";
        coche1.km = 0;
        coche1.silleteria = "Cuero";
        
        System.out.println("El color de el coche es: "+coche1.color);
        System.out.println("La marca del coche es: "+coche1.marca);
        System.out.println("El Kilometraje del coche es de: "+coche1.km);
        System.out.println("El Kilometraje del coche es de: "+coche1.silleteria);
        System.out.println("  ");
        
        Coche coche2 = new Coche();
        coche2.color = "Rojo";
        coche2.marca = "Ferrari";
        coche2.km = 100;
        coche2.silleteria = "Sintetico";
        
        System.out.println("El color de el coche es: "+coche2.color);
        System.out.println("La marca del coche es: "+coche2.marca);
        System.out.println("El Kilometraje del coche es de: "+coche2.km);
        System.out.println("El Kilometraje del coche es de: "+coche2.silleteria);
        System.out.println("  ");
        
        Coche coche3 = new Coche();
        coche3.color = "Verde";
        coche3.marca = "Dodge";
        coche3.km = 99;
        coche3.silleteria = "Semi-sintetico";
        
        System.out.println("El color de el coche es: "+coche3.color);
        System.out.println("La marca del coche es: "+coche3.marca);
        System.out.println("El Kilometraje del coche es de: "+coche3.km);
        System.out.println("El Kilometraje del coche es de: "+coche3.silleteria);
        System.out.println("  ");
    }
}
