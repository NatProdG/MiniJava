class Inc1 {
    public static void main(String[] args) {
        System.out.println(new A().init());
    }
}

class A {
    public int init() {
        
        // incrementation of constant
        5++;
        return 5;
    }
}