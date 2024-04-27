Public Class tic_tac

    Private Sub tic_tac_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        lblpnm.Text = "Player 1"
    End Sub
    Sub clearcontrols()
        lblpnm.Text = "Player 1"
        Button1.Text = ""
        Button2.Text = ""
        Button3.Text = ""
        Button4.Text = ""
        Button5.Text = ""
        Button6.Text = ""
        Button7.Text = ""
        Button8.Text = ""
        Button9.Text = ""
    End Sub
    Sub checkwin()
        If (Button1.Text = Button2.Text And Button2.Text = Button3.Text And Button1.Text <> "" And Button2.Text <> "" And Button3.Text <> "") Or (Button4.Text = Button5.Text And Button5.Text = Button6.Text And Button4.Text <> "" And Button5.Text <> "" And Button6.Text <> "") Or (Button7.Text = Button8.Text And Button8.Text = Button9.Text And Button7.Text <> "" And Button8.Text <> "" And Button9.Text <> "") Or (Button2.Text = Button5.Text And Button5.Text = Button8.Text And Button2.Text <> "" And Button5.Text <> "" And Button8.Text <> "") Or (Button1.Text = Button4.Text And Button4.Text = Button7.Text And Button1.Text <> "" And Button4.Text <> "" And Button7.Text <> "") Or (Button3.Text = Button6.Text And Button6.Text = Button9.Text And Button3.Text <> "" And Button6.Text <> "" And Button9.Text <> "") Or (Button1.Text = Button5.Text And Button5.Text = Button9.Text And Button1.Text <> "" And Button5.Text <> "" And Button9.Text <> "") Or (Button3.Text = Button5.Text And Button5.Text = Button7.Text And Button3.Text <> "" And Button5.Text <> "" And Button7.Text <> "") Then
            If lblpnm.Text = "Player 1" Then
                MessageBox.Show("Player 2 Is The Winner", "Result", MessageBoxButtons.OK, MessageBoxIcon.Information)
            Else
                MessageBox.Show("Player 1 Is The Winner", "Result", MessageBoxButtons.OK, MessageBoxIcon.Information)

            End If
            clearcontrols()
        ElseIf (Button1.Text <> "" And Button2.Text <> "" And Button3.Text <> "" And Button4.Text <> "" And Button5.Text <> "" And Button6.Text <> "" And Button7.Text <> "" And Button8.Text <> "" And Button9.Text <> "") Then
            MessageBox.Show("Game Over" & vbCrLf & "Nobady wins.", "Result", MessageBoxButtons.OK, MessageBoxIcon.Exclamation)
            clearcontrols()
        End If
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click, Button2.Click, Button3.Click, Button4.Click, Button5.Click, Button6.Click, Button7.Click, Button8.Click, Button9.Click
        Dim btn1 As Button = sender
        display(btn1)
    End Sub
    Sub display(ByVal btn1 As Button)
        If (btn1.Text = "") Then
            If (lblpnm.Text = "Player1") Then
                btn1.Text = "X"
            Else
                btn1.Text = "O"
            End If
        End If
        checkwin()

    End Sub
End Class
