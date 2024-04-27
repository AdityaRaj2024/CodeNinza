Public Class Form1
    Dim a%, rs%, i%, c%, s%, j%, d%

    Private Sub btncount_Click(sender As Object, e As EventArgs) Handles btncount.Click
        a = Val(txt1.Text)
        c = 0
        While (a > 0)
            a = a \ 10
            c = c + 1
        End While
        rs = c
        txtresult.Text = rs
    End Sub

    Private Sub btnsum_Click(sender As Object, e As EventArgs) Handles btnsum.Click
        a = Val(txt1.Text)
        j = 0
        s = 0
        While (a > 0)
            j = a Mod 10
            s = s + j
            a = a \ 10
        End While
        rs = s
        txtresult.Text = rs
    End Sub

    Private Sub btnrev_Click(sender As Object, e As EventArgs) Handles btnrev.Click
        a = Val(txt1.Text)
        i = 0
        d = 0
        While (a > 0)
            i = a Mod 10
            d = d * 10 + i
            a = a \ 10
        End While
        rs = d
        txtresult.Text = rs
    End Sub

    Private Sub btnreset_Click(sender As Object, e As EventArgs) Handles btnreset.Click
        txt1.Text = ""
        txtresult.Text = ""
        txt1.Focus()
    End Sub

    Private Sub btnexit_Click(sender As Object, e As EventArgs) Handles btnexit.Click
        End
    End Sub
End Class
