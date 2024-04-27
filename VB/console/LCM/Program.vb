Imports System

Module Program
    Sub Main(args As String())
        'Console.WriteLine("Hello World!")
        Dim a, b, c, d, s As Integer
        Console.WriteLine("Enter 3 Numbers :- ")
        a = CInt(Console.ReadLine())
        b = CInt(Console.ReadLine())
        c = CInt(Console.ReadLine())
        If a > b And a > c Then
            d = a
        ElseIf b > c Then
            d = b
        Else
            d = c
        End If
        If a < b And a < c Then
            s = a
        ElseIf b < c Then
            s = b
        Else
            s = c
        End If
        'd = a > b & a > c ? and:    (b>c?b:c)
        Console.WriteLine("Greatest Number :- " & d)
        Console.WriteLine("Smallest Number :- " & s)
        While (d Mod a <> 0 Or d Mod b <> 0 Or d Mod c <> 0)
            d = d + 1
        End While
        While (a Mod s <> 0 Or b Mod s <> 0 Or c Mod s <> 0)
            s = s - 1
        End While
        Console.WriteLine("LCM of " & a & " , " & b & " and " & +c & ":- " & d)
        Console.WriteLine("HCF of " & a & " , " & b & " and " & +c & ":- " & s)
    End Sub
End Module
