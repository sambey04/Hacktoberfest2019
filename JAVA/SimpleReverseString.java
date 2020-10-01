public class SimpleReverseString {
// Work from Java version 1.5
    public static void main(String[] args) {
        String str = "string not empty";
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.reverse();
        System.out.println("input string: "+str);
        System.out.println("reverse string: "+sb.toString());
    }

}
