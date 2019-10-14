
import java.util.StringTokenizer;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user
 */
public class Tokenizer {
    
    public static void main(String []args){
    String url="http:/Maduranga/java.sun.com/j2se/1.4/docs/api";
    
    StringTokenizer tokenUrl=new StringTokenizer(url,"/");
    
    System.out.println("No of tokens = "+tokenUrl.countTokens());
    
    while(tokenUrl.hasMoreTokens()){
    
    System.out.println(tokenUrl.nextToken());
    
    
    
    }
    
    
    
    
    
}
}