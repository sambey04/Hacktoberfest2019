import java.io.IOException;
import java.util.Scanner;
import java.text.DecimalFormat;


/**
 * IMPORTANT:
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {

    public static void main(String[] args) throws IOException {

        /**
         * Escreva a sua solução aqui
         * Code your solution here
         * Escriba su solución aquí
         */
        int casos;
        float valores[] = new float[3];
        int pesos[] = {2, 3, 5};
        int peso = 10;
        float media;
        Scanner input = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("0.0");

        casos = input.nextInt();

        for (int i=0; i<casos; i++){
            media = 0;
            for(int j=0;  j < 3; j++ ){
                valores[j] = input.nextFloat();
                //char buffer = input.nextChar();
                valores[j] *= pesos[j];
                media += valores[j];
            }
            media = media / peso;
            System.out.print(df.format(media) + "\n");
        }


    }

}
