package SealedClass;
sealed class Animal permits Dog,Cat,Bird{
    Animal()    
    {
        
        System.out.println("This is Ashish");
    }
}

final class Dog extends Animal{
    Dog()
    {
    System.out.println("This is Sanket");
    }
}

sealed class Bird extends Animal permits Swift{
    Bird()
    {
    System.out.println("This is the fastest bird");
    }
}


non-sealed class Cat extends Animal{
    Cat()
    {
        System.out.println("This is Russian Cat");
    }
}

final class Swift extends Bird{
    Swift()
    {
        System.out.println("This is Russian Cat");
    }
}

public class sealed_class_01
{
    public static void main(String[]args)
    {
        System.out.println("This is Animal Class");
        Animal obj = new Animal();
        System.out.println("This is Dog Class");
        Dog obj1 = new Dog();
        System.out.println("This is Bird Class");
        Bird obj2 = new Bird();
        System.out.println("This is Cat Class");
        Cat obj3 = new Cat();
        System.out.println("This is Swift Class");
        Swift obj4 = new Swift();
    }
}