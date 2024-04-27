Imports System.Console
Imports System.Resources
Imports System.Security.Cryptography.X509Certificates

Public Class Rectangle
    Protected l, b, area, peri As Integer
    Overridable Sub getinput()
        MyBase.getinput()
        WriteLine("Enter lenght and breadth")
        l = CInt(ReadLine())
        b = CInt(ReadLine())

    End Sub
    Overridable Function findarea() As Integer
        area = l * b
        Return area
    End Function
    Sub findperi()
        peri = 2 * (l + b)
    End Sub
End Class
Class square : Inherits Rectangle
    Dim s As Integer
    Shadows area, peri As Integer
    Public Overrides Sub getinput()
        MyBase.getinput()
        WriteLine("Enter side")
        s = CInt(ReadLine())
    End Sub
    Public Overrides Function findarea() As Integer
        MyBase.findarea()
        area = s * s
        Return area
    End Function
    Public Sub calculateperi()
        peri = 4 * s
    End Sub
    Public Sub getresult()
        WriteLine("Area of square=" & area & vbNewLine
                  & "Perimeter of square=" & peri) 
        WriteLine("Area of rectangle=" & area & vbNewLine &
                  "Perimeter of rectangle=" & peri)
    End Sub

End Class
Module Program
    Sub Main()
        Dim obj As New square()
        obj.getinput()
        obj.findarea()
        obj.findperi()
        obj.getresult()
        obj.calculateperi()
        ReadKey()
    End Sub
End Module
