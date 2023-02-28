package com.mycompany._notas_e_moedas;

// importação de bibliotecas
import java.io.IOException;  
import java.util.Scanner;  // biblioteca para fazer leitura de dados

public class App {

    public static void main(String[] args) {
        // declaração de var
        float din;  // var que guarda o valor do dinheiro a ser trocado
        float aux;  // var aux para calculo de cedulas
        int aux1;  //  var aux para saída de dados
        
        // entrada da quantidade de dinheiro
        Scanner input = new Scanner(System.in);  // para fazer a leitura de dados
        din = input.nextFloat();  // entrada de um dado do tipo float
        
        // saída e contagem de notas e moedas
        // saída das notas
        System.out.println("NOTAS:");
        aux = din/100;
        aux1 = (int) aux;
        System.out.printf("%d nota(s) de R$ 100.00 \n", aux1);
        din = din - aux1*100;
        aux = din/50;
        aux1 = (int) aux;
        System.out.printf("%d nota(s) de R$ 50.00 \n", aux1);
        din = din - aux1*50;
        aux = din/20;
        aux1 = (int) aux;
        System.out.printf("%d nota(s) de R$ 20.00 \n", aux1);
        din = din - aux1*20;
        aux = din/10;
        aux1 = (int) aux;
        System.out.printf("%d nota(s) de R$ 10.00 \n", aux1);
        din = din - aux1*10;
        aux = din/5;
        aux1 = (int) aux;
        System.out.printf("%d nota(s) de R$ 5.00 \n", aux1);
        din = din - aux1*5;
        aux = din/2;
        aux1 = (int) aux;
        System.out.printf("%d nota(s) de R$ 2.00 \n", aux1);
        din = din - aux1*2;
        
        // saida dos volores em moedas
        System.out.println(din);
        System.out.println("MOEDAS:");
        aux = din/1;
        System.out.printf("%d nota(s) de R$ 1.00 \n", aux1);
        din = din - aux;
        aux = (float) (din/(0.5));
        System.out.printf("%d nota(s) de R$ 0.50 \n", aux1);
        din = din - aux;
        aux = (float) (din/(0.25));
        System.out.printf("%d nota(s) de R$ 0.25 \n", aux1);
        din = din - aux;
        aux = (float) (din/(0.1));
        System.out.printf("%d nota(s) de R$ 0.10 \n", aux1);
        din = din - aux;
        aux = (float) (din/(0.05));
        System.out.printf("%d nota(s) de R$ 0.05 \n", aux1);
        din = din - aux;
        aux = (float) (din/(0.01));
        System.out.printf("%d nota(s) de R$ 0.01 \n", aux1);

    }
}
