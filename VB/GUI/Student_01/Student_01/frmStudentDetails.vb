Public Class frmStudentDetails

    Private Sub llbSelectPhoto_LinkClicked(sender As Object, e As LinkLabelLinkClickedEventArgs) Handles llbSelectPhoto.LinkClicked
        If OpenPhoto1.ShowDialog = System.Windows.Forms.DialogResult.OK Then
            ptbphoto.ImageLocation = OpenPhoto1.FileName
        End If
    End Sub

    Private Sub btnclose_Click(sender As Object, e As EventArgs) Handles btnclose.Click
        Me.Close()
        'End
    End Sub

    Private Sub btnsubmit_Click(sender As Object, e As EventArgs) Handles btnsubmit.Click
        Dim info As String
        Dim res As DialogResult
        info = Roll_Num.Value & vbCrLf & txtSName.Text & vbCrLf & dtp_dob.Text & vbCrLf
        If rdbMale.Checked Then
            info = info & rdbMale.Text & vbCrLf
        ElseIf rdbFemale.Checked Then
            info = info & rdbFemale.Text & vbCrLf
        Else
            info = info & rdbOthers.Text & vbCrLf
        End If
        If chkbRead.Checked Then
            info = info & chkbRead.Text & vbCrLf
        End If
        If chkbMovie.Checked Then
            info = info & chkbMovie.Text & vbCrLf
        End If
        If chkbMusic.Checked Then
            info = info & chkbMusic.Text & vbCrLf
        End If
        info = info & txtaddress.Text & " , " & cmbCity.Text & " , " & lstState.Text & " , " & mtxtPin.Text & vbCrLf

        res = MessageBox.Show(info, "Information Entered", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question)

        If res = System.Windows.Forms.DialogResult.Yes Then
            MessageBox.Show("Submitted Successfully ", "sucess", MessageBoxButtons.OK, MessageBoxIcon.Information)
        ElseIf res = System.Windows.Forms.DialogResult.No Then
            MessageBox.Show("Try Again ", "Check Again", MessageBoxButtons.OK, MessageBoxIcon.Error)
        ElseIf res = System.Windows.Forms.DialogResult.Cancel Then
            MessageBox.Show("Cancelled ", "Cancel", MessageBoxButtons.RetryCancel, MessageBoxIcon.Warning)
        End If
    End Sub
End Class