class For {
    public static void main(String[] args) {
        System.out.println(new ForClass().f());
    }
}

class ForClass {
    public int f() {
        int x;
        int i;
        x = 5;
        // Missing parameters in for
        for(i=0; i<10;){
            x++;
        }
        return x;
    }
}