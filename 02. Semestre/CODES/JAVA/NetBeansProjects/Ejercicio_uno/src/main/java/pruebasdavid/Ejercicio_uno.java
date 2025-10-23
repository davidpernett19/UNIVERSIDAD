package pruebasdavid;
import java.util.Scanner;
public class Ejercicio_uno {

public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
String[] nombres = new String[3];
int[] notas = new int[3];
for (int i = 0; i < 3; i++) {
System.out.print("Introduce el nombre del estudiante " + (i + 1) + ": ");
nombres[i] = scanner.nextLine();
}
for (int i = 0; i < 3; i++) {
System.out.print("Introduce la nota del estudiante " + (i + 1) + ": ");
notas[i] = scanner.nextInt();
if (notas[i] < 0 || notas[i] > 50) {
System.out.println("Nota inválida. La nota debe estar entre 0 y 50.");

}
}
for (int i = 0; i < 3; i++) {
String resultado;
if (notas[i] >= 0 && notas[i] <= 29) {
resultado = "perdió";
} else if (notas[i] >= 30 && notas[i] <= 40) {
resultado = "aprobado";
} else if (notas[i] >= 41 && notas[i] <= 44) {
resultado = "excelente";
} else if (notas[i] >= 45 && notas[i] <= 50) {
resultado = "Felicitaciones";
} else {
resultado = "Nota no valida";
}
System.out.println("El estudiante " + nombres[i] + " tiene la nota " + notas[i] + " y " + resultado + ".");
}

}
}