class Switch {
    public static void main(String[] args) {
        System.out.println(new SwitchClass().s());
    }
}

class SwitchClass {
    public int s() {
        int x;
        x = 5;
        switch(x){
            case 4:
                x = 4;
                break;
            case 5:
                x++;
                break;
            default:
                x=0;        
        }
        return x;
    }
}