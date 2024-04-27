Imports System.Windows.Forms.VisualStyles.VisualStyleElement

Public Class Form1
    Dim num As Double
    Private Sub rev_Click(sender As Object, e As EventArgs) Handles rev.Click
        num = txtfirst.Text
        Dim rev As Double = 0
        Dim d As Integer
        If num > 0 Then
            While num > 0
                d = num Mod 10
                rev = rev * 10 + d
                num = num \ 10
            End While
        Else
            num = 0 - num
            While num > 0
                d = num Mod 10
                rev = rev * 10 + d
                num = num \ 10
            End While
            rev = 0 - rev
        End If
        'MessageBox.Show(rev)
        txtresult.Text = rev
    End Sub

    Private Sub mood_Click(sender As Object, e As EventArgs) Handles mood.Click
        num = txtfirst.Text
        Dim mult As Double = 1
        Dim d As Integer
        If num > 0 Then
            While num > 0
                d = num Mod 10
                mult = mult * d
                num = num \ 10
            End While
        Else
            num = 0 - num
            While num > 0
                d = num Mod 10
                mult = mult * d
                num = num \ 10
            End While
        End If
        txtresult.Text = mult
        'MessageBox.Show(mult)
    End Sub

    Private Sub sod_Click(sender As Object, e As EventArgs) Handles sod.Click
        num = txtfirst.Text
        Dim sum As Double = 0
        Dim d As Integer
        If num > 0 Then
            While num > 0
                d = num Mod 10
                sum = sum + d
                num = num \ 10
            End While
        Else
            num = 0 - num
            While num > 0
                d = num Mod 10
                sum = sum + d
                num = num \ 10
            End While
            'sum = 0 - sum
        End If
        txtresult.Text = sum
        'MessageBox.Show(sum)
    End Sub

    'Private Sub button6_click(sender As Object, e As EventArgs) Handles sc.click
    '    num = txtfirst.Text
    '    If num > 0 Then
    '        MessageBox.Show("positive number")
    '    Else
    '        MessageBox.Show("negative number")
    '    End If
    'End Sub

    Private Sub eoc_Click(sender As Object, e As EventArgs) Handles eoc.Click
        num = txtfirst.Text
        If num Mod 2 = 0 Then
            'MessageBox.Show("Even number")
            txtresult.Text = "Even Number"
        Else
            'MessageBox.Show("Odd number")
            txtresult.Text = "odd Number"
        End If

    End Sub

    Private Sub poc_Click(sender As Object, e As EventArgs) Handles poc.Click

        num = txtfirst.Text
        Dim count As Integer = 0
        For index As Integer = 2 To num \ 2
            If num Mod index = 0 Then
                count = count + 1
            End If
        Next
        If count = 0 Then
            'MessageBox.Show("prime number")
            txtresult.Text = "prime Number"

        Else
            'MessageBox.Show("composite number")
            txtresult.Text = "Composite Number"
        End If
    End Sub

    Private Sub pld_Click(sender As Object, e As EventArgs) Handles pld.Click
        num = txtfirst.Text
        Dim rev As Double = 0
        Dim num2 As Double
        Dim d As Integer
        If num > 0 Then
            num2 = num
            While num > 0
                d = num Mod 10
                rev = rev * 10 + d
                num = num \ 10
            End While
        Else
            num = 0 - num
            num2 = num
            While num > 0
                d = num Mod 10
                rev = rev * 10 + d
                num = num \ 10
            End While
            rev = 0 - rev
        End If
        If num = num2 Then
            'MessageBox.Show("Palindrome number")
            txtresult.Text = "Palindrome Number"
        Else
            'MessageBox.Show("Not Palindrome number")
            txtresult.Text = "Not Palindrome Number"
        End If
    End Sub

    Private Sub reset_Click(sender As Object, e As EventArgs) Handles reset.Click
        txtfirst.Text = ""
        txtresult.Text = ""
        txtfirst.Focus()
    End Sub

    Private Sub exitt_Click(sender As Object, e As EventArgs) Handles exitt.Click
        Me.Close()
    End Sub
End Class