package ClasesyObjetos;
public class STP1 {
    int ruedas;
    int sillas;
    String marca;
    int motor;
    String placa;
    String color;
    int taximetro;
    String pasamanos;
    Double velocimetro;
    int bagones;
    String direccionales;
    int kilometraje;
    String destino;
    String transmision;
    
    public static void main(String[] args) {
        STP1 taxi = new STP1();
        taxi.ruedas = 4;
        taxi.sillas = 3;
        taxi.motor = 1;
        taxi.marca = "Hyundai Atos";
        taxi.placa = "SNU92F";
        taxi.color = "Amarillo sepia";
        taxi.taximetro = 84;
        taxi.velocimetro = 90.3;
        
        System.out.println("        TAXI      ");
        System.out.println("El taxi tiene"+" "+taxi.ruedas+" ruedas");
        System.out.println("El taxi tiene"+" "+taxi.sillas+" sillas");
        System.out.println("La marca del taxi es "+taxi.marca);
        System.out.println("El taxi tiene "+taxi.motor+" motor");
        System.out.println("La placa del Taxi es "+taxi.placa);
        System.out.println("El color del taxi es  "+taxi.color);
        System.out.println("La ultima marca de taximetro fue "+taxi.taximetro+" Unidades ");
        System.out.println("La maxima velocidad maxima registrada por el taxi fue de "+taxi.velocimetro+" Km/h");
        System.out.println("  ");
        
        STP1 sitp = new STP1();
        sitp.ruedas = 4;
        sitp.sillas = 25;
        sitp.marca = "Volvo";
        sitp.motor = 1;
        sitp.placa = "KYO923";
        sitp.color = "Azul";
        sitp.pasamanos = "Amarillo";
        sitp.kilometraje = 2500;
        sitp.velocimetro = 76.12;
        
        
        System.out.println("        S.I.T.P      ");
        System.out.println("El SITP tiene"+" "+sitp.ruedas+" ruedas");
        System.out.println("El SITP tiene"+" "+sitp.sillas+" sillas");
        System.out.println("La marca del SITP es "+sitp.marca);
        System.out.println("La placa del SITP es "+sitp.placa);
        System.out.println("El color del SITP es  "+sitp.color);
        System.out.println("La velocidad maxima registrada por el SITP fue de "+sitp.velocimetro+" Km/h");
        System.out.println("La cantidad de motores que tiene e SITP es de: "+sitp.motor);
        System.out.println("  ");
        
        STP1 transmilenio = new STP1();
        transmilenio.ruedas = 14;
        transmilenio.sillas = 53;
        transmilenio.motor = 1;
        transmilenio.marca = "Volvo ";
        transmilenio.placa = "KYO124 ";
        transmilenio.color = "ROJO ";
        transmilenio.pasamanos = "AMARILLO ";
        transmilenio.kilometraje = 2500;
        transmilenio.velocimetro = 76.12;
        transmilenio.bagones = 3;
        transmilenio.direccionales = "izquierda o derecha ";
        transmilenio.destino = "Estaciones";
        
        System.out.println("        TRANSMILENIO      ");
        System.out.println("El Transmilenio tiene"+" "+transmilenio.ruedas+" ruedas");
        System.out.println("El Transmilenio tiene"+" "+transmilenio.sillas+" sillas");
        System.out.println("La marca del Transmilenio es "+transmilenio.marca);
        System.out.println("La placa del Transmilenio es "+transmilenio.placa);
        System.out.println("El color del Transmilenio es  "+transmilenio.color);
        System.out.println("La velocidad maxima registrada por el Transmilenio fue de "+transmilenio.velocimetro+" Km/h");
        System.out.println("La cantidad de motores que tiene e Transmilenio es de: "+transmilenio.motor);
        System.out.println("El color del pasamanos del Transmilenio es "+transmilenio.pasamanos);
        System.out.println("El Transmilenio tiene "+transmilenio.bagones+" vagones");
        System.out.println("Las direccionales del Transmilenio apuntan hacia la "+transmilenio.direccionales);
        System.out.println("Los posibles destinos del Transmilenio son las "+transmilenio.destino);
        System.out.println("El Kilometraje del Transmilenio es de "+transmilenio.kilometraje+"Km");
        System.out.println("  ");
        
        STP1 moto = new STP1();
        moto.ruedas = 2;
        moto.sillas = 1;
        moto.marca = "SUSUKI ";
        moto.placa = "AQO77G ";
        moto.color = "A preferencia del usuario ";
        moto.kilometraje = 0;
        moto.velocimetro = 102.3;
        moto.direccionales = "izquierda o derecha ";
        moto.transmision = "manual";
        
        System.out.println("        MOTO      ");
        System.out.println("La Moto tiene"+" "+moto.ruedas+" ruedas");
        System.out.println("La Moto tiene"+" "+moto.sillas+" sillas");
        System.out.println("La marca de la Moto es "+moto.marca);
        System.out.println("La placa de la Moto es "+moto.placa);
        System.out.println("El color de la Moto es  "+moto.color);
        System.out.println("La velocidad maxima registrada por la Moto fue de "+moto.velocimetro+" Km/h");
        System.out.println("Las direccionales de la  Moto apuntan hacia la "+moto.direccionales);
        System.out.println("El Kilometraje de la Moto es de "+moto.kilometraje+"Km");
        System.out.println("El Kilometraje de la Moto es de "+moto.transmision);
        System.out.println("  ");
        
        STP1 particular = new STP1();
        moto.ruedas = 4;
        moto.sillas = 3;
        moto.marca = "CHEVROLET ";
        moto.placa = "JSI876 ";
        moto.color = "A preferencia del usuario ";
        moto.kilometraje = 17082;
        moto.velocimetro = 42.7;
        moto.direccionales = "izquierda o derecha ";
        moto.transmision = "manual";
        
        System.out.println("        PARTICULAR      ");
        System.out.println("El transporte particular tiene"+" "+particular.ruedas+" ruedas");
        System.out.println("El transporte particular tiene"+" "+particular.sillas+" sillas");
        System.out.println("La marca del transporte particular es "+particular.marca);
        System.out.println("La placa del transporte particular "+particular.placa);
        System.out.println("El color del transporte particular  "+particular.color);
        System.out.println("La velocidad maxima registrada por el transporte particular "+particular.velocimetro+" Km/h");
        System.out.println("Las direccionales del transporte particular apuntan hacia la "+particular.direccionales);
        System.out.println("El Kilometraje del transporte particular es de "+particular.kilometraje+"Km");
        System.out.println("El Kilometraje del transporte particular es de "+particular.transmision);
        System.out.println("  ");
    }
}
