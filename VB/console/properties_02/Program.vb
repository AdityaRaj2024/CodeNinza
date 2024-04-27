'02-02-2024
Imports System.Console

Public Class student
    Private name As String
    Private location As String

    Public WriteOnly Property SName As String
        Set(value As String)
            name = value
        End Set
    End Property

    Public WriteOnly Property SLocation As String
        Set(value As String)
            location = value
        End Set
    End Property

    Sub GetDetails()
        WriteLine("Name Of Student Is :- " & name)
        WriteLine("Location Of " & name & " Is :- " & location)
    End Sub
End Class

Module Program
    Sub Main(args As String())
        Dim obj As New student()
        obj.SName = "Ashish"
        obj.SLocation = "ThakurGang"
        obj.GetDetails()
        WriteLine("Hello World!")
    End Sub
End Module
