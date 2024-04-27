Imports System

Module Program
    Sub Main(args As String())
        Dim a, b, c, d As Integer
        Console.Write("Enter Any Number :- ")
        a = CInt(Console.ReadLine())
        d = 1
        Do
            Console.WriteLine(a * d)
            d = d + 1
        Loop Until d > 10
    End Sub
End Module
