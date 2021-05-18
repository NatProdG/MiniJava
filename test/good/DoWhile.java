class DoWhile {
    public static void main(String[] args) {
        System.out.println(new Dw().dw());
    }
}

class Dw {
    public int dw() {
        int x;
        x = 5;
        do {
            x++;
        }
        while(x<15);
        return x;
    }
}