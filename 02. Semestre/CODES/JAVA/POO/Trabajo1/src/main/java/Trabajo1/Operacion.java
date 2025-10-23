
package Trabajo1;

public class Operacion {
    String adminNombre, docenteProfesion, decanoProfesion, auxiliarNombre, seguridadNombre;
    
    public Operacion(String adminNombre,String docenteProfesion,String decanoProfesion, String auxiliarNombre,String seguridadNombre){
        this.adminNombre=adminNombre;
        this.docenteProfesion=docenteProfesion;
        this.decanoProfesion=decanoProfesion;
        this.auxiliarNombre=auxiliarNombre;
        this.seguridadNombre=seguridadNombre;
    }
    public Operacion (){
        this.adminNombre="";
        this.adminNombre="";
        this.docenteProfesion="";
        this.decanoProfesion="";
        this.auxiliarNombre="";
        this.seguridadNombre="";
    }
    public void leerdatos(){
        System.out.println("El nombre del administrador es: "+adminNombre);
        System.out.println("Docente: "+docenteProfesion);
        System.out.println("Decano: "+decanoProfesion);
        System.out.println("El nombre del auxiliar es: : "+auxiliarNombre);
        System.out.println("Seguridad: "+seguridadNombre);
    }
}
