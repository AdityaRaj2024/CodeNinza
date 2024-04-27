Imports System.Console

Module Program
    Sub Main(args As String())
        Dim s%, i%, j%, t%, e%, c%
        Write("Enter Size Of Array :- ")
        s = CInt(ReadLine())
        Dim a(s) As Integer
        WriteLine("Enter " & s & " Number's :- ")
        For i = 1 To s
            a(i) = CInt(ReadLine())
        Next
        For i = 1 To s
            For j = 1 To s
                If a(i) > a(j) Then
                    t = a(i)
                    a(i) = a(j)
                    a(j) = t
                End If
            Next
        Next
        Write("All Array Elements in Ascending Order :- ")
        For i = s To 1 Step -1
            Write(a(i) & vbTab)
        Next
        WriteLine()
        Write("All Array Elements in Descending Order :- ")
        For i = 1 To s Step 1
            Write(a(i) & vbTab)
        Next
        WriteLine()
        Write("Enter Element to Search :- ")
        e = CInt(ReadLine())
        For i = 1 To s
            If e = a(i) Then
                c = c + 1
            End If
        Next
        If c > 0 Then
            WriteLine(e & " is found " & c & " times")
        Else
            WriteLine(e & " is not found")
        End If
    End Sub
End Module
