package SealedClass;

sealed class A permits B,C
{
	A()
	{
		System.out.println("A class(sealed)!");
	}
}
sealed class B extends A permits D
{
	B()
	{
		System.out.println("B class(sealed)!");
	}
}
non-sealed class C extends A
{
	C()
	{
		System.out.println("C class(non-sealed)!");
	}
}
final class D extends B
{
	D()
	{
		System.out.println("D class(final)!");
	}
}

public class Sealed_Class_02
{
	public static void main(String[]args)
	{
		A a = new A();
		B b = new B();
		C c = new C();
		D d = new D();
	}
}