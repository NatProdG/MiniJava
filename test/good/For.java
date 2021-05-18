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
        for(i=0; i<10; i++){
            x++;
        }
        for(i=10; i>0; i = --i){
            x++;
        }
        return x;
    }
}