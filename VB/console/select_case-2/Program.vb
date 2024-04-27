Imports System.Console

Module Program
    Sub Main(args As String())
        Dim m As Integer, g As String
        Write("Enter Marks Obtained :- ")
        m = CInt(ReadLine())
        Select Case m
            Case Is > 100
                g = "Invalid Entry"
            Case Is >= 90
                g = "A+"
            Case Is >= 80
                g = "A"
            Case Is >= 70
                g = "B"
            Case Is >= 60
                g = "C"
            Case Is >= 45
                g = "D"
            Case Is >= 34
                g = "F"
            Case Is < 0
                g = "Invalid Entry"
            Case Else
                g = "Fail"

        End Select
        WriteLine("Grade :- " & g)
    End Sub
End Module
