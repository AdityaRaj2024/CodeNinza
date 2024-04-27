Imports System.Console

Module Program
    Sub Main(args As String())
        Dim r, c, i, j As Integer
        Write("Enter Row Size of Array :- ")
        r = CInt(ReadLine())
        Write("Enter column Size of Array :- ")
        c = CInt(ReadLine())
        Dim a(r, c) As Integer
        WriteLine("Enter " & r & " X " & c & " Matrix Array :- ")
        For i = 0 To r - 1
            For j = 0 To c - 1
                a(i, j) = CInt(ReadLine())
            Next
        Next
        WriteLine("Array is :")
        For i = 0 To r - 1
            For j = 0 To c - 1
                Write(a(i, j) & vbTab)
            Next
            WriteLine(" ")
        Next
        Read()
    End Sub
End Module
