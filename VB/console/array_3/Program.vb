Imports System.Console
'Write a VB.NET program that initializes two arrays of integers, each representing a set of numbers. The program should find and display the common elements (intersection) between the two arrays.
Module Program
    Sub Main(args As String())
        Dim s%, n%, i%, j%
        WriteLine("Enter Size for 2 Array's :- ")
        s = CInt(ReadLine())
        n = CInt(ReadLine())
        Dim a(s), b(n) As Integer
        WriteLine("Enter " & s & " Number's in first array:- ")
        For i = 1 To s
            a(i) = CInt(ReadLine())
        Next
        WriteLine("Enter " & n & " Number's in second array:- ")
        For i = 1 To n
            b(i) = CInt(ReadLine())
        Next
        Write("Common Elements Are :-  ")
        For i = 1 To s
            For j = 1 To n
                If a(i) = b(j) Then
                    Write(a(i) & vbTab)
                End If
            Next
        Next
    End Sub
End Module
