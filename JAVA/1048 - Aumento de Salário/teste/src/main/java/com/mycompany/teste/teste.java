package com.mycompany.teste;

import java.io.IOException;
import java.util.Scanner;

public class teste {
 
    public static void main(String[] args) throws IOException {
        //declaração de var
        float sal;  // salario da pessoa
        float rea = 0;  // reajuste do salário
        int por = 0;  // porcentagem de reajuste
        
        //instanciação de recebimento de dados
        Scanner scanner1 = new Scanner(System.in);
        
        //entrada do salário
        sal =  scanner1.nextFloat();
        
        if(sal >= 0 && sal <= 400){  // 15% reajuste
            rea = (float) (sal*0.15);
            sal += sal*0.15;
            por = 15; 
        }
        else if(sal >= 400.01 && sal <= 800){  // 12% reajuste
            rea = (float) (sal*0.12);
            sal += sal*0.12;
            por = 12; 
        }
        else if(sal >= 800.01 && sal <= 1200){  // 10% reajuste
            rea = (float) (sal*0.1);
            sal += sal*0.1;
            por = 10; 
        }
        else if(sal >= 1200.01 && sal <= 2000){  // 7% reajuste
            rea = (float) (sal*0.07);
            sal += sal*0.07;
            por = 7; 
        }
        else if(sal >= 2000.01){  // 4% reajuste
            rea = (float) (sal*0.04);
            sal += sal*0.04;
            por = 4; 
        }
        
        // Saída de dados
        System.out.printf("Novo salario: %.2f\n", sal);
        System.out.printf("Reajuste ganho: %.2f\n", rea);
        System.out.printf("Em percentual: %d %s\n", por, "%");
        
    }
 
}
