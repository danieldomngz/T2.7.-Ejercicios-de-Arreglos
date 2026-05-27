import java.util.Scanner;

public class SistemaCalificaciones {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Ingrese el número de estudiantes: ");
        int n = sc.nextInt();
        sc.nextLine(); // limpiar buffer

        String[] nombres = new String[n];
        double[] notas = new double[n];
        int registrados = 0; // control de cuántos estudiantes se han ingresado

        int opcion;
        do {
            System.out.println("\n--- Menú Principal ---");
            System.out.println("1. Registrar Calificaciones");
            System.out.println("2. Mostrar Reporte Estadístico");
            System.out.println("3. Buscar Estudiante");
            System.out.println("4. Salir");
            System.out.print("Seleccione una opción: ");
            opcion = sc.nextInt();
            sc.nextLine(); // limpiar buffer

            switch (opcion) {
                case 1:
                    if (registrados < n) {
                        System.out.print("Ingrese el nombre del estudiante: ");
                        nombres[registrados] = sc.nextLine();

                        double nota;
                        do {
                            System.out.print("Ingrese la nota del examen (0-10): ");
                            while (!sc.hasNextDouble()) {
                                System.out.println("Error: debe ingresar un número válido.");
                                sc.next();
                            }
                            nota = sc.nextDouble();
                            sc.nextLine();
                            if (nota < 0 || nota > 10) {
                                System.out.println("Error: la nota debe estar entre 0 y 10.");
                            }
                        } while (nota < 0 || nota > 10);

                        notas[registrados] = nota;
                        registrados++;
                        System.out.println("Estudiante registrado correctamente.");
                    } else {
                        System.out.println("Ya se registraron todos los estudiantes.");
                    }
                    break;

                case 2:
                    if (registrados == 0) {
                        System.out.println("No hay estudiantes registrados.");
                    } else {
                        double suma = 0;
                        int aprobados = 0, reprobados = 0;
                        for (int i = 0; i < registrados; i++) {
                            suma += notas[i];
                            if (notas[i] >= 7) aprobados++;
                            else reprobados++;
                        }
                        double promedio = suma / registrados;
                        System.out.println("\n--- Reporte Estadístico ---");
                        System.out.printf("Promedio general: %.2f%n", promedio);
                        System.out.println("Total aprobados: " + aprobados);
                        System.out.println("Total reprobados: " + reprobados);
                    }
                    break;

                case 3:
                    if (registrados == 0) {
                        System.out.println("No hay estudiantes registrados.");
                    } else {
                        System.out.print("Ingrese el nombre del estudiante a buscar: ");
                        String buscado = sc.nextLine();
                        boolean encontrado = false;
                        for (int i = 0; i < registrados; i++) {
                            if (nombres[i].equalsIgnoreCase(buscado)) {
                                System.out.println("Estudiante encontrado:");
                                System.out.println("Nombre: " + nombres[i]);
                                System.out.println("Nota: " + notas[i]);
                                System.out.println("Estado: " + (notas[i] >= 7 ? "Aprobado" : "Reprobado"));
                                encontrado = true;
                                break;
                            }
                        }
                        if (!encontrado) {
                            System.out.println("El estudiante " + buscado + " no se encuentra registrado.");
                        }
                    }
                    break;

                case 4:
                    System.out.println("Saliendo del sistema...");
                    break;

                default:
                    System.out.println("Opción inválida. Intente nuevamente.");
            }
        } while (opcion != 4);

        sc.close();
    }
}
