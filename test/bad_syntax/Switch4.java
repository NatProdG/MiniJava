class BadSwitch {
    public static void main(String[] args) {
        System.out.println(new BadSwitchClass().s());
    }
}

class BadSwitchClass {
    public int s() {
        int x;
        int y;
        y = 2;
        x = 5;
        // Case instruction after default
        switch(x){
            case 4:
                x = 4;
                break;
            case 5:
                x++;
                break;
            default:
                x=0;
                
            case 8:
                x--;    
        }
        return x;
    }
}