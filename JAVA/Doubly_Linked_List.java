package lab8;
import java.util.*;
public class Q1 {

	Node head;
	static class Node{
		Node before;
		Node next;
		int data;
		Node(){
			next=null;
			before=null;
		}
		Node(int n){
			data=n;
			next=null;
			before=null;
		}
	}
	Node getprevlink(Node a){
		return a.before;
	}
	Node getnextlink(Node a){
	return a.next;	
	}
	void setprevlink(Node copy,Node n){
		n.before=copy;
	}
	void setnextlink(Node n){
		if(head==null) {
			head=new Node();
			head.next=n;
			setprevlink(head,n);
			
		}
		else {
		Node copy=head.next;
		int flag=0;
		while(copy.next!=null) {
			if(copy.data>n.data) {
				copy.before.next=n;
				n.before=copy.before;
				n.next=copy;
				copy.before=n;
				flag=1;
				break;
			}
			copy=copy.next;
		}
		if(flag==0) {
			copy.next=n;
			setprevlink(copy,n);
			}
		}
	}
	void delete(int n) {
		Node copy=head;
		int flag=0;
		while(copy!=null) {
			if(copy.data==n) {
				flag=1;
				break;
			}
			copy=copy.next;
		}
		if(flag==1) {
			copy.before.next=copy.next;
			if(copy.next!=null) {
			copy.next.before=copy.before;}
		}
		else {
			System.out.println("Element Not Found");
		}
	}
	void show() {
		System.out.println("Previous Address \t Node \t Current Address \t Nest Address");
		Node copy=head;
		while(copy!=null) {
			System.out.println(getprevlink(copy)+"\t"+copy.data+"\t"+copy+"\t"+getnextlink(copy));
			copy=copy.next;
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		Q1 ob = new Q1();
		while(true) {
			System.out.println("Enter :- \n 1- To Print Elements \n 2- To insert elements 3- To delete elements  ");
			int c=sc.nextInt();
			if(c==1)
				ob.show();
			else if(c==2) {
				System.out.println("Enter the number of elements = ");
				int n= sc.nextInt();
				for (int i=0;i<n;i++) {
					System.out.println("Enter the element  = ");
					int n1=sc.nextInt();
					Node a=new Node(n1);
					ob.setnextlink(a);
				}
			}
			else if(c==3) {
				System.out.println("Enter the element to be deleted  = ");
				int n=sc.nextInt();
				ob.delete(n);
			}
			else {
				System.out.println("Wrong Input");
				continue;
			}
			System.out.println("Enter :- \n 1- To continue \n 2- To end ");
			int ch=sc.nextInt();
			if(ch==2) {
				System.out.println("Program End");
				break;
			}
		}
		
	}

}
