class Fibonacci {
    public static void main(String[] args) {
        System.out.println(new Fibo().fibo());
    }
}

class Fibo {
    public int fibo() {
        int i;
        int x;
        i = 0;
        x = 5;
        for (i=0; i<10; i++){
            x++;
        }
        return x;
    }
}