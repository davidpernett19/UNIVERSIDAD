
package Poli;

public class VehiculoFurgoneta extends Vehiculo{
       private int carga;
       
       public VehiculoFurgoneta (int cilindrada, String matricula, String marca, String modelo){
           super (matricula, marca, modelo);
        this.carga = cilindrada;
       }
       
       public int getCilindrada(){
           return carga;
       }
       
       @Override
       public String mostrarDatos(){
           return "Matricula: "+matricula+"\nMarca: "+marca+"\nModelo: "+modelo+"\nCarga: "+carga;
       }
    }