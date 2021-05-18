class Inc {
    public static void main(String[] args) {
        System.out.println(new A().init());
    }
}

class A {
    public int init() {
        boolean b;
        b = true;
        // Incrementation of non integer
        b++; 
        return 0;
    }
}