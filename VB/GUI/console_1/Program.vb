Imports System

Module Program
    Sub Main(args As String())
        Console.WriteLine("Hello World!")
        Dim N As Integer
        Console.Write("Enter Any Number :- ")
        N = CInt(Console.ReadLine())
        If N > 0 Then
            Console.Write("+ve")
            If N = 1 Then
                Console.WriteLine("One")
            ElseIf N = 2 Then
                Console.WriteLine("Two")
            ElseIf N = 3 Then
                Console.WriteLine("Three")
            ElseIf N = 4 Then
                Console.WriteLine("Four")
            ElseIf N = 5 Then
                Console.WriteLine("Five")
            ElseIf N = 6 Then
                Console.WriteLine("Six")
            ElseIf N = 7 Then
                Console.WriteLine("Seven")
            ElseIf N = 8 Then
                Console.WriteLine("Eight")
            ElseIf N = 9 Then
                Console.WriteLine("Nine")
            Else
                Console.WriteLine("Invalid Entry")
            End If
        ElseIf N < 0 Then
            Console.WriteLine("-ve")
            If N = -1 Then
                Console.WriteLine("One")
            ElseIf N = -2 Then
                Console.WriteLine("Two")
            ElseIf N = -3 Then
                Console.WriteLine("Three")
            ElseIf N = -4 Then
                Console.WriteLine("Four")
            ElseIf N = -5 Then
                Console.WriteLine("Five")
            ElseIf N = -6 Then
                Console.WriteLine("Six")
            ElseIf N = -7 Then
                Console.WriteLine("Seven")
            ElseIf N = -8 Then
                Console.WriteLine("Eight")
            ElseIf N = -9 Then
                Console.WriteLine("Nine")
            Else
                Console.WriteLine("Invalid Entry")
                Else
            Console.WriteLine("Invalid Entry")
        End If
    End Sub
End Module
