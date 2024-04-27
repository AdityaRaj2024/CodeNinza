Imports System.Console
'Write a VB.NET program that initializes an array of integers and then calculates and displays the sum and average of the elements in the array.
Module Program
    Sub Main(args As String())
        Dim s%, i%, j%, sum%
        Dim avg As Single
        Write("Enter Size Of Array :- ")
        s = CInt(ReadLine())
        Dim a(s) As Integer
        WriteLine("Enter " & s & " Number's :- ")
        For i = 1 To s
            a(i) = CInt(ReadLine())
        Next
        For Each i In a
            sum += i
        Next
        avg = sum / s
        WriteLine("Sum of All Elements :- " & sum)
        WriteLine("Average of All Elements :- " & avg)
    End Sub
End Module
