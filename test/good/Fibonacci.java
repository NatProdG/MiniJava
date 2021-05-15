class Fibonacci {
    public static void main(String[] args) {
        System.out.println(new Fibo().fibo());
    }
}

class Fibo {
    public int fibo() {
        int i;
        int x;
        x = 5;
        x = x+1;
        for (i=12; i>10;i--){
            x++;
        }
        return x;
    }
}