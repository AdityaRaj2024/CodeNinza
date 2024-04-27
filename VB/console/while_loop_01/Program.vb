Imports System

Module Program
    Sub Main(args As String())
        Console.WriteLine("Hello World!")
        'Armstong Number
        Dim n, j, c, r, s As Integer
        Console.Write("Enter Any Number :- ")
        n = CInt(Console.ReadLine())
        j = n
        While n > 0
            c = c + 1
            n = n \ 10
        End While
        n = j
        'Console.WriteLine(n)
        While n > 0
            r = n Mod 10
            s = s + CInt(Math.Pow(r, c))
            n = n \ 10

        End While
        If s = j Then
            Console.WriteLine(j & " is a Armstrong Number.")
        Else

            Console.WriteLine(j & " is not a Armstrong Number.")
        End If
    End Sub
End Module
