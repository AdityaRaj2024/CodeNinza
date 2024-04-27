Imports System

Module Program
    Sub Main(args As String())
        Dim n, j, a, s, c, r As Integer
        Console.Write("Enter Any Number :- ")
        n = CInt(Console.ReadLine())
        j = n
        Do
            c = c + 1
            r = n Mod 10
            s = s + r
            a = a * 10 + r
            n = n \ 10

        Loop While n > 0
        n = j

        Console.WriteLine("Count of digit of " & n & " is :- " & c)
        Console.WriteLine("Sum of digit of " & n & " is :- " & s)
        Console.WriteLine("Reverse of digit of " & n & " is :- " & a)
    End Sub
End Module
