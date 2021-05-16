class Fibonacci {
    public static void main(String[] args) {
        System.out.println(new Fibo().fibo());
    }
}

class Fibo {
    public int fibo() {
        int x;
        x = 5;
        switch(x){
            case 4:
                x = 4;
                break;
            case 5:
                x = 6;
                break;
            default:
                x = 0;

        }
        return x;
    }
}