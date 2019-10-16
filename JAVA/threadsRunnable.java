import java.io.*;
class demo implements Runnable{
	public void run(){
		System.out.println("thread is ");
	}
}
public class nsn{

	public static void main(String[]args){
		demo obj=new demo();
		Thread(t)=new Thread(obj);
		t.start();
	}
}
