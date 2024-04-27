<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class tic_tac
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()>
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Label1 = New Label()
        Button1 = New Button()
        Button2 = New Button()
        Button3 = New Button()
        Button4 = New Button()
        Button5 = New Button()
        Button6 = New Button()
        Button7 = New Button()
        Button8 = New Button()
        Button9 = New Button()
        lblpnm = New Label()
        SuspendLayout()
        ' 
        ' Label1
        ' 
        Label1.Dock = DockStyle.Top
        Label1.Location = New Point(0, 0)
        Label1.Name = "Label1"
        Label1.Size = New Size(611, 52)
        Label1.TabIndex = 0
        Label1.Text = "Player 1 :- X and player 2 :- O"
        Label1.TextAlign = ContentAlignment.TopCenter
        ' 
        ' Button1
        ' 
        Button1.Location = New Point(36, 87)
        Button1.Name = "Button1"
        Button1.Size = New Size(137, 134)
        Button1.TabIndex = 1
        Button1.UseVisualStyleBackColor = True
        ' 
        ' Button2
        ' 
        Button2.Location = New Point(189, 87)
        Button2.Name = "Button2"
        Button2.Size = New Size(137, 134)
        Button2.TabIndex = 2
        Button2.UseVisualStyleBackColor = True
        ' 
        ' Button3
        ' 
        Button3.Location = New Point(348, 87)
        Button3.Name = "Button3"
        Button3.Size = New Size(137, 134)
        Button3.TabIndex = 3
        Button3.UseVisualStyleBackColor = True
        ' 
        ' Button4
        ' 
        Button4.Location = New Point(36, 244)
        Button4.Name = "Button4"
        Button4.Size = New Size(137, 134)
        Button4.TabIndex = 4
        Button4.UseVisualStyleBackColor = True
        ' 
        ' Button5
        ' 
        Button5.Location = New Point(189, 244)
        Button5.Name = "Button5"
        Button5.Size = New Size(137, 134)
        Button5.TabIndex = 5
        Button5.UseVisualStyleBackColor = True
        ' 
        ' Button6
        ' 
        Button6.Location = New Point(348, 244)
        Button6.Name = "Button6"
        Button6.Size = New Size(137, 134)
        Button6.TabIndex = 6
        Button6.UseVisualStyleBackColor = True
        ' 
        ' Button7
        ' 
        Button7.Location = New Point(36, 409)
        Button7.Name = "Button7"
        Button7.Size = New Size(137, 134)
        Button7.TabIndex = 7
        Button7.UseVisualStyleBackColor = True
        ' 
        ' Button8
        ' 
        Button8.Location = New Point(189, 409)
        Button8.Name = "Button8"
        Button8.Size = New Size(137, 134)
        Button8.TabIndex = 8
        Button8.UseVisualStyleBackColor = True
        ' 
        ' Button9
        ' 
        Button9.Location = New Point(348, 409)
        Button9.Name = "Button9"
        Button9.Size = New Size(137, 134)
        Button9.TabIndex = 9
        Button9.UseVisualStyleBackColor = True
        ' 
        ' lblpnm
        ' 
        lblpnm.Location = New Point(224, 579)
        lblpnm.Name = "lblpnm"
        lblpnm.Size = New Size(70, 26)
        lblpnm.TabIndex = 10
        ' 
        ' tic_tac
        ' 
        AutoScaleDimensions = New SizeF(15F, 37F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(611, 655)
        Controls.Add(lblpnm)
        Controls.Add(Button9)
        Controls.Add(Button8)
        Controls.Add(Button7)
        Controls.Add(Button6)
        Controls.Add(Button5)
        Controls.Add(Button4)
        Controls.Add(Button3)
        Controls.Add(Button2)
        Controls.Add(Button1)
        Controls.Add(Label1)
        Font = New Font("Segoe UI", 16.2F, FontStyle.Regular, GraphicsUnit.Point)
        Margin = New Padding(5)
        Name = "tic_tac"
        StartPosition = FormStartPosition.CenterScreen
        Text = "tic_tac-game"
        ResumeLayout(False)
    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents Button1 As Button
    Friend WithEvents Button2 As Button
    Friend WithEvents Button3 As Button
    Friend WithEvents Button4 As Button
    Friend WithEvents Button5 As Button
    Friend WithEvents Button6 As Button
    Friend WithEvents Button7 As Button
    Friend WithEvents Button8 As Button
    Friend WithEvents Button9 As Button
    Friend WithEvents lblpnm As Label
End Class
