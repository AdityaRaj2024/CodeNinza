Imports System.Console

Module Program
    Public Class DivideByZeroEx : Inherits ApplicationException
        Sub New(msg As String)
            MyBase.New(msg)
        End Sub
    End Class
    Dim a, b, c As Single
    Public Class x
        Sub divide()
            'WriteLine("Enter 2 Numbers :- ")
            a = 10
            b = 0
            If b = 0 Then
                Throw (New DivideByZeroEx("000000000000"))
            End If
        End Sub
    End Class
    Sub Main(args As String())
        Dim a1 As New x
        Try

            a1.divide()
            WriteLine("Division: ", a / b)
        Catch ex As DivideByZeroEx
            WriteLine("Error :- ", ex.Message)
        End Try
    End Sub
End Module
