Imports System.Console

Module Program
    Public Sub GetDetails(ByVal id As Integer, Optional ByVal Name As String = "Suraj", Optional ByVal location As String = "Patna")
        WriteLine("Id :- " & id)
        WriteLine("Name :- " & Name)
        WriteLine("Location :- " & location)
    End Sub
    Sub Main(ByVal args As String())
        GetDetails(1)
        WriteLine(vbCrLf)
        GetDetails(1, "Rana")
        WriteLine(vbNewLine)
        GetDetails(1, "Ritik", "Gaya")
        Console.WriteLine("Hello World!")
    End Sub
End Module
