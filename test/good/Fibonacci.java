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
        if(x == 0){
            x = 150;
        }
        if(x == 1){
            x = 250;
        }else{
            x = 0;
        }
        for (i=12; i>10;i--){
            x++;
        }
        return x;
    }
}