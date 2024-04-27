Imports System

Module Program
    Public Class Arithmetic
        Dim num1 As Integer = 0
        Dim num2 As Integer = 0
        Sub New()
            Console.WriteLine("Enter first Number: ")
            num1 = CInt(Console.ReadLine())
            Console.WriteLine("Enter Second Number: ")
            num2 = CInt(Console.ReadLine())
        End Sub
        Sub value(ByRef num1 As Integer, ByRef num2 As Integer)
            num1 = Me.num1
            num2 = Me.num2
        End Sub
        Function add()
            Return num1 + num2
        End Function
        Sub add(num1 As Integer, num2 As Integer)
            num1 = num1 + num2
        End Sub
    End Class
    Sub Main(args As String())
        Console.WriteLine("Hello World!")
        Dim ari As Arithmetic
        ari = New Arithmetic()
        Dim num1, num2 As Integer
        ari.value(num1, num2)
        Console.WriteLine("Value 1: " & num1 & vbCrLf & "Value 2: " & num2)
        Console.WriteLine("Addition: " & ari.add())
        Console.Write("Addition2: ")
        ari.add(num1, num2)
        Console.WriteLine(num1)
    End Sub
End Module
