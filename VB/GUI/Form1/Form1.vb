
Public Class Form1
    Dim a%, b%, rs%
    Private Sub btnadd_Click(sender As Object, e As EventArgs) Handles btnadd.Click
        a = Val(txtfirst.Text)
        b = Val(txtsecond.Text)
        rs = a + b
        txtresult.Text = rs
    End Sub

    Private Sub btnsub_Click(sender As Object, e As EventArgs) Handles btnsub.Click
        a = Val(txtfirst.Text)
        b = Val(txtsecond.Text)
        rs = a - b
        txtresult.Text = rs
    End Sub



    Private Sub btnreset_Click(sender As Object, e As EventArgs) Handles btnreset.Click
        txtfirst.Text = ""
        txtsecond.Text = ""
        txtresult.Text = ""
        txtfirst.Focus()
    End Sub

    Private Sub btnexit_Click(sender As Object, e As EventArgs) Handles btnexit.Click
        'Me.Close()
        End
    End Sub


    Private Sub btnmulti_Click(sender As Object, e As EventArgs) Handles btnmult.Click
        a = Val(txtfirst.Text)
        b = Val(txtsecond.Text)
        rs = a * b
        txtresult.Text = rs
    End Sub

    Private Sub btndiv_Click(sender As Object, e As EventArgs) Handles btndiv.Click
        a = Val(txtfirst.Text)
        b = Val(txtsecond.Text)
        rs = a \ b
        txtresult.Text = rs
    End Sub

    Private Sub txtfirst_TextChanged(sender As Object, e As EventArgs) Handles txtfirst.TextChanged

    End Sub
End Class
