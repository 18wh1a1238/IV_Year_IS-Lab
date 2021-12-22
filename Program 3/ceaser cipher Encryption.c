Ceaser Cipher

import java.util.*;
public class CaesarCipherProgram {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println(" Input the plaintext message : ");
        String plaintext = sc.nextLine();
        System.out.println(" Enter the value by which each character in the plaintext message gets shifted : ");
        int shift = sc.nextInt();
        String ciphertext = "";
        char alphabet;
        for(int i=0; i < plaintext.length();i++) 
        {
             // Shift one character at a time
            alphabet = plaintext.charAt(i);
            
            // if alphabet lies between a and z 
            if(alphabet >= 'a'||alphabet >='A' && alphabet <= 'z' || alphabet <='Z') 
            {
             // shift alphabet
             alphabet = (char) (alphabet + shift);
             
             }
             ciphertext = ciphertext + alphabet;
          
        
    }
    System.out.println(" ciphertext : " + ciphertext);
  }
}
