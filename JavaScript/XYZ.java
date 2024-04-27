public class XYZ {
    public static void main(String[] args) {
        String str = "abc";
        String rev = "";

        for (int i = 0; i < str.length(); i++) {
            rev = str.charAt(i) + rev;
        }
        System.out.println(rev);
    }
}