
public class ep1_ex2_java {
    public static void main(String[] args) {
        Runnable hello1 = new helloworld1();
        Runnable hello2 = new helloworld2();
        Runnable hello3 = new helloworld3();
        Runnable hello4 = new helloworld4();
        Runnable hello5 = new helloworld5();
        Runnable hello6 = new helloworld6();
        Thread thread1 = new Thread(hello1);
        Thread thread2 = new Thread(hello2);
        Thread thread3 = new Thread(hello3);
        Thread thread4 = new Thread(hello4);
        Thread thread5 = new Thread(hello5);
        Thread thread6 = new Thread(hello6);
        thread1.start();
        thread2.start();        
        thread3.start();
        thread4.start();
        thread5.start();
        thread6.start();
    }
}

class helloworld1 implements Runnable {
    public void run(){
            System.out.println("hello world thread1");
    }
}
class helloworld2 implements Runnable  {
    public void run(){
            System.out.println("hello world thread2");
    }
}

class helloworld3 implements Runnable  {
    public void run(){
            System.out.println("hello world thread3");
    }
}

class helloworld4 implements Runnable  {
    public void run(){
            System.out.println("hello world thread4");
    }
}

class helloworld5 implements Runnable  {
    public void run(){
            System.out.println("hello world thread5");
    }
}

class helloworld6 implements Runnable  {
    public void run(){
            System.out.println("hello world thread6");
    }
}




