Public Class Form1
    Dim f As Form2
    Dim passwd As String
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim uname, Pass As String
        uname = "Admin"
        Pass = "pass"
        If TextBox1.Text = "Admin" Then
            If TextBox2.Text = "pass" Then
                MessageBox.Show("Login Succeccfully", "Message", MessageBoxButtons.OK, MessageBoxIcon.Information, MessageBoxDefaultButton.Button1)
            Else
                MessageBox.Show("Password is Incorrect", "error", MessageBoxButtons.OK, MessageBoxIcon.Error, MessageBoxDefaultButton.Button1)

            End If
        Else
            MessageBox.Show("Username Not found", "error", MessageBoxButtons.OK, MessageBoxIcon.Error, MessageBoxDefaultButton.Button1)
        End If
    End Sub

    Private Sub TextBox2_keyPress(sender As Object, e As KeyPressEventArgs) Handles TextBox2.KeyPress
        If (e.KeyChar >= "0" And e.KeyChar <= "9") Or (e.KeyChar >= "a" And e.KeyChar <= "z") Then
            passwd = passwd + e.KeyChar
            e.KeyChar = "*"
            e.Handled = False
        ElseIf Asc(e.keyChar) = Keys.Back Then
            passwd = Mid(passwd, 1, passwd.Length - 1)
        Else
            e.Handled = True
        End If
    End Sub

    Private Sub CheckBox1_CheckedChanged(sender As Object, e As EventArgs) Handles CheckBox1.CheckedChanged
        Dim s As String = TextBox2.Text
        If CheckBox1.Checked = True Then
            TextBox2.Text = passwd
        ElseIf CheckBox1.Checked = False Then
            TextBox2.Text = s
        End If
    End Sub
End Class
