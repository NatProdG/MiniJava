class While {
    public static void main(String[] args) {
        System.out.println(new WhileClass().w());
    }
}

class WhileClass {
    public int w() {
        int x;
        x = 5;
        while(x<15){
            x++;
        }
        return x;
    }
}