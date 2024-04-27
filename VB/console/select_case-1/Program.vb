Imports System

Module Program
    Sub Main(args As String())
        Dim n As Integer
        Console.Write("Enter Day Number :- ")
        n = CInt(Console.ReadLine())
        Select Case n
            Case 1
                Console.WriteLine("Monday")
            Case 2
                Console.WriteLine("Tuesday")
            Case 3
                Console.WriteLine("Wednesday")
            Case 4
                Console.WriteLine("Thursday")
            Case 5
                Console.WriteLine("Friday")
            Case 6
                Console.WriteLine("Saturday")
            Case 7
                Console.WriteLine("Sunday")
            Case Else
                Console.WriteLine("Invalid Entry!" & vbNewLine & "Please Enter Number between 1 to 7.")
        End Select
    End Sub
End Module
