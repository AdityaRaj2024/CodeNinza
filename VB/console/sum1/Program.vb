Imports System

Module Program
    Sub Main()
        Dim a, b, add, subt, mult, div As Integer
        Console.WriteLine("Enter Two Number :-")
        a = Console.ReadLine()
        b = Console.ReadLine()
        add = a + b
        subt = a - b
        mult = a * b
        div = a \ b
        Console.WriteLine("The Addition of " & a & " and " & b & " is :- " & add)
        Console.WriteLine("The Subtraction of " & a & " and " & b & " is :- " & subt)
        Console.WriteLine("The Multiplication of " & a & " and " & b & " is :- " & mult)
        Console.WriteLine("The Division of " & a & " and " & b & " is :- " & div)

    End Sub
End Module
