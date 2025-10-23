
package Poli;

public class Principal {
    public static void main(String[] args) {
        Vehiculo misVehiculos[] = new Vehiculo [4];
        
        misVehiculos [0] = new Vehiculo("ABC123", "SUZUKI", "2024");
        misVehiculos [1] = new Vehiculo("DEF456", "CHEVROLET", "1999");
        misVehiculos [2] = new Vehiculo("GHI789", "RENAULT", "2000");
        misVehiculos [3] = new Vehiculo("JKL135", "FORD", "2009");
        
        for (Vehiculo vehiculos: misVehiculos){
            System.out.println(vehiculos.mostrarDatos());
            System.out.println("");
        }
    }
    
}