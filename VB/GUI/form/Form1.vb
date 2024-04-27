Public Class Form1

    Dim a, b, c, d, t As Integer
    Dim p As Double
    Dim name, id, crse, gd As String

    'Public Sub subD()
    '    name = txtname.Text
    '    id = txtid.Text
    '    crse = txtcourse.Text
    '    MessageBox.Show("Name :- " & name & vbcrlf & "ID :- " & id & vbcrlf & "Course :- " & crse)
    'End Sub
    Public Sub subA()
        a = Val(txts1.Text)
        b = Val(txts2.Text)
        c = Val(txts3.Text)
        d = Val(txts4.Text)
        t = a + b + c + d
        'MessageBox.Show(t)
        If t <= 400 And t > 0 Then
            txttotal.Text = t
        Else
            txttotal.Text = "Invalid Entry"
        End If

    End Sub

    Public Sub subB()
        p = t / 4
        If p <= 100 And p >= 0 Then

            txtpcg.Text = p & " % "
        Else
            txtpcg.Text = "Invalid Entry"
        End If

    End Sub

    Public Sub subC()
        If p >= 90 And p <= 100 Then
            txtgd.Text = "A+ Grade"
            'MessageBox.Show("A+ Grade")
        ElseIf p >= 80 And p < 90 Then
            txtgd.Text = "A Grade"
            'MessageBox.Show("A Grade")
        ElseIf p >= 70 And p < 80 Then
            txtgd.Text = "B Grade"
            'MessageBox.Show("B Grade")
        ElseIf p >= 60 And p < 70 Then
            txtgd.Text = "C Grade"
            'MessageBox.Show("C Grade")
        ElseIf p >= 45 And p < 60 Then
            txtgd.Text = "D Grade"
            'MessageBox.Show("D Grade")
        ElseIf p >= 35 And p < 45 Then
            txtgd.Text = "F Grade"
            'MessageBox.Show("F Grade")
        ElseIf p >= 0 And p < 35 Then
            txtgd.Text = "Fail"
            'MessageBox.Show("Fail")
        Else
            txtgd.Text = "Invalid Entry"
        End If
    End Sub
    Public Sub btntotal_Click(sender As Object, e As EventArgs) Handles btntotal.Click
        subA()
        subB()
        subC()
        subD()
        'Dim a, b, c, d, t As Integer
        'Dim p As Double
        'a = Val(txts1.Text)
        'b = Val(txts2.Text)
        'c = Val(txts3.Text)
        'd = Val(txts4.Text)
        't = a + b + c + d
        'p = t / 4
        'txttotal.Text = t
        'txtpcg.Text = p & " % "
        'MessageBox.Show(t)
    End Sub

    Public Sub subD()
        name = txtname.Text
        id = txtid.Text
        crse = txtcourse.Text
        gd = txtgd.Text
        MessageBox.Show("Name :- " & name & vbCrLf & "ID :- " & id & vbCrLf & "Course :- " & crse & vbCrLf & "Total Marks :- " & t & vbCrLf & "Percentage :- " & p & vbCrLf & " Grade :- " & gd)
    End Sub
    Private Sub btnreset_Click(sender As Object, e As EventArgs) Handles btnreset.Click
        txts1.Text = ""
        txts2.Text = ""
        txts3.Text = ""
        txts4.Text = ""
        txttotal.Text = ""
        txtpcg.Text = ""
        txtgd.Text = ""
        txtname.Text = ""
        txtid.Text = ""
        txtcourse.Text = ""
        txtname.Focus()
    End Sub

    Private Sub btnexit_Click(sender As Object, e As EventArgs) Handles btnexit.Click
        End
    End Sub

    Private Sub btngrade_Click(sender As Object, e As EventArgs) Handles btngrade.Click
        subC()
    End Sub

    Public Sub btnpcg_Click(sender As Object, e As EventArgs) Handles btnpcg.Click
        subB()
        'MessageBox.Show(p & " % ")
    End Sub

    Private Sub btnmks_Click(sender As Object, e As EventArgs) Handles btnmks.Click
        subA()
    End Sub

End Class