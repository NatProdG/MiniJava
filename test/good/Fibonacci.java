class Fibonacci {
    public static void main(String[] args) {
        System.out.println(new Fibo().fibo());
    }
}

class Fibo {
    public int fibo() {
        int x;
        x = 5;
        do {
            x++;
        }
        while(x<15);
        return x;
    }
}