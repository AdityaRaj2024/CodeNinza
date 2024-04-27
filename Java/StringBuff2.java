//StringBuffer Example
class StringBuff2 {
    public static void main(String[] args) {
        StringBuffer sb1 = new StringBuffer("Welcome TO Java");
        StringBuffer sb2 = new StringBuffer("Welcome TO Java");
        System.out.println(sb1.equals(sb2));
        System.out.println(sb1.hashCode());
        System.out.println(sb1.getClass());
        // System.out.println(sb1.toString());
        System.out.println(sb1.substring(7, 10));
        System.out.println(sb1.charAt(3));
        System.out.println(sb1.indexOf("e"));
        System.out.println(sb1.lastIndexOf("e"));
        System.out.println(sb1.capacity());
        System.out.println(sb1.length());
        System.out.println(sb1.append(" Programming."));
        System.out.println(sb1.replace(8, 10, "In"));
        System.out.println(sb1.delete(7, 10));
        System.out.println(sb1.deleteCharAt(24));
        System.out.println(sb1 == sb2);
    }
}
