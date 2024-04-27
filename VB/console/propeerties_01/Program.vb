'02-02-2024
Imports System.Console

Public Class student
    Private name As String
    Private location As String
    Public Sub New(ByVal n As String, ByVal l As String)
        name = n
        location = l
    End Sub
    Public ReadOnly Property SName As String
        Get
            Return name
        End Get
    End Property
    Public ReadOnly Property SLocation As String
        Get
            Return location
        End Get
    End Property
End Class
Module Program
    Sub Main(args As String())
        Dim obj As student = New student("Sanket", "Hajipur")
        'Dim obj As New student("Sanket", "Hajipur")
        WriteLine("Name Of Student IS " & obj.SName)
        WriteLine("Location Of " & obj.SName & " IS " & obj.SLocation)
        WriteLine("Hello World!")
    End Sub
End Module
