Imports System

Module Program
    Sub Main(args As String())
        Dim i%, j%
        Console.WriteLine("Hello world")
        For i = 0 To 10 Step 1

            For j = 0 To i Step 1
                Console.Write(" * ")
            Next
            Console.WriteLine()
        Next
        Dim a%, b%
        For a = 10 To 0 Step -1
            For b = 0 To a Step 1
                Console.Write(" + ")
            Next
            Console.Write(vbCrLf)
        Next
    End Sub
End Module
