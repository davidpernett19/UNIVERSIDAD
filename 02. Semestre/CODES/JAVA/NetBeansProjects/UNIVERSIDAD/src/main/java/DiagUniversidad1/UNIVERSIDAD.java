package DiagUniversidad1;
public class UNIVERSIDAD {
    
    int profesores;
    int estudiantes;
    int salones;
    String mesas;
    String luces;
    int cant_luces;
    String clases;
    
    
    
    
    public static void main(String[] args) {
        
        UNIVERSIDAD arquitectura = new UNIVERSIDAD ();
        arquitectura.profesores = 5;
        arquitectura.estudiantes = 21;
        arquitectura.salones = 5;
        arquitectura.mesas = "Individuales";
        arquitectura.luces = "color blanco ";
        arquitectura.cant_luces = 6;
        arquitectura.clases = "Urbanismo I";
        
        System.out.println("        LA FACULTAD DE ARQUITECTURA     ");
        System.out.println("  ");
        System.out.println("La facultad de Arquitectura tiene "+" "+arquitectura.profesores+" profesores");
        System.out.println("La facultad de Arquitectura tiene "+" "+arquitectura.estudiantes+" estudiantes");
        System.out.println("La facultad de Arquitectura tiene "+arquitectura.salones);
        System.out.println("La facultad de Arquitectura tiene las mesas tipo "+arquitectura.mesas);
        System.out.println("La facultad de Arquitectura tiene luces de "+arquitectura.luces+" por salon ");
        System.out.println("La facultad de Arquitectura tiene "+arquitectura.cant_luces+" luces por salon ");
        System.out.println("Una de las clases vistas en Arquitectura es "+arquitectura.clases);
        System.out.println("  ");
        
        UNIVERSIDAD csociales = new UNIVERSIDAD ();
        csociales.profesores = 7;
        csociales.estudiantes = 14;
        csociales.salones = 3;
        csociales.mesas = " 1 mesa 3 puestos ";
        csociales.luces = "Amarillas ";
        csociales.cant_luces = 7;
        csociales.clases = "Historia I";
        
        System.out.println("        LA FACULTAD DE CIENCIAS SOCIALES     ");
        System.out.println("  ");
        System.out.println("La facultad de Ciencias Sociales tiene "+" "+csociales.profesores+" profesores");
        System.out.println("La facultad de Ciencias Sociales tiene "+" "+csociales.estudiantes+" estudiantes");
        System.out.println("La facultad de Ciencias Sociales tiene "+csociales.salones);
        System.out.println("La facultad de Ciencias Sociales tiene las mesas tipo "+csociales.mesas);
        System.out.println("La facultad de Ciencias Sociales tiene luces de "+csociales.luces+" por salon ");
        System.out.println("La facultad de Ciencias Sociales tiene "+csociales.cant_luces+" luces por salon ");
        System.out.println("Una de las clases vistas en Ciencias Sociales es "+csociales.clases);
        System.out.println("  ");
        
        UNIVERSIDAD HCE = new UNIVERSIDAD ();
        HCE.profesores = 12;
        HCE.estudiantes = 35;
        HCE.salones = 7;
        HCE.mesas = "tipo mesa y silla ";
        HCE.luces = "color blanco ";
        HCE.cant_luces = 8;
        HCE.clases = "Emprendimiento I ";
        
        System.out.println("        LA FACULTAD DE H.C.E     ");
        System.out.println("  ");
        System.out.println("La facultad de HCE tiene "+" "+HCE.profesores+" profesores");
        System.out.println("La facultad de HCE tiene "+" "+HCE.estudiantes+" estudiantes");
        System.out.println("La facultad de HCE tiene "+HCE.salones);
        System.out.println("La facultad de HCE tiene las mesas tipo "+HCE.mesas);
        System.out.println("La facultad de HCE tiene luces de "+HCE.luces+" por salon ");
        System.out.println("La facultad de  tiene "+HCE.cant_luces+" luces por salon ");
        System.out.println("Una de las clases vistas en HCE es "+HCE.clases);
        System.out.println("  ");
        
        UNIVERSIDAD ingenieria = new UNIVERSIDAD ();
        ingenieria.profesores = 20;
        ingenieria.estudiantes = 400;
        ingenieria.salones = 10;
        ingenieria.mesas = "tipo mesa y silla ";
        ingenieria.luces = "color blanco ";
        ingenieria.cant_luces = 10;
        ingenieria.clases = "Programacion Orientada a Objetos ";
        
        System.out.println("        LA FACULTAD DE INGENIERIA     ");
        System.out.println("  ");
        System.out.println("La facultad de ingenieria tiene "+" "+ingenieria.profesores+" profesores");
        System.out.println("La facultad de ingenieria tiene "+" "+ingenieria.estudiantes+" estudiantes");
        System.out.println("La facultad de ingenieria tiene "+ingenieria.salones);
        System.out.println("La facultad de ingenieria tiene las mesas tipo "+ingenieria.mesas);
        System.out.println("La facultad de ingenieria tiene luces de "+ingenieria.luces+" por salon ");
        System.out.println("La facultad de ingenieria tiene "+ingenieria.cant_luces+" luces por salon ");
        System.out.println("Una de las clases vistas en ingenieria es "+ingenieria.clases);
        System.out.println("  ");
    }
}
