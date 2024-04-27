Imports System.Console
'Write a VB.NET program that initializes an array of strings representing names. The program should prompt the user to enter a name and then check if that name exists in the array. If the name is found, display the index at which it is located; otherwise, display a message indicating that the name is not in the array.
Module Program
    Sub Main(args As String())
        Dim sc$
        Dim i%, s%, e%
        Write("Enter Size Of Array :- ")
        s = CInt(ReadLine())
        Dim a(s) As String
        WriteLine("Enter " & s & " Name :- ")
        For i = 1 To s
            a(i) = ReadLine()
        Next
        Write("Enter Searching Element :- ")
        sc = ReadLine()
        For i = 1 To s
            If sc = a(i) Then
                e = 1
                Exit For
            End If
        Next
        If e = 1 Then
            WriteLine(sc & " is found at " & i & " index position.")
        Else
            WriteLine(sc & " is not found.")
        End If
    End Sub
End Module
