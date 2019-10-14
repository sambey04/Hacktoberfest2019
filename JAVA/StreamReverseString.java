public class StreamReverseString {
//NOT PRODUCTION READY CODE, just for example. >= java 8
  public static void main(String [] args) {
    String str = "string is not empty";
    String rts = StreamSupport.stream(
                    Spliterators.spliteratorUnknownSize(
                              Stream.of(str.split(""))
                                        .collect(Collectors.toCollection(LinkedList::new))
                                        .descendingIterator(),0), false)
                    .collect(Collectors.joining());
                    
   System.out.println("input string: "+str);
   System.out.println("reverse string: "+rts);
  }
}
