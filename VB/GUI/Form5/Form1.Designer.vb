<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class Form1
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
        txtname = New TextBox()
        Label2 = New Label()
        Label3 = New Label()
        Label4 = New Label()
        SuspendLayout()
        ' 
        ' Label1
        ' 
        Label1.AutoSize = True
        Label1.Font = New Font("Stencil", 10.2F, FontStyle.Italic, GraphicsUnit.Point)
        Label1.Location = New Point(153, 42)
        Label1.Name = "Label1"
        Label1.Size = New Size(54, 20)
        Label1.TabIndex = 0
        Label1.Text = "Name"
        ' 
        ' txtname
        ' 
        txtname.Location = New Point(305, 34)
        txtname.Multiline = True
        txtname.Name = "txtname"
        txtname.Size = New Size(143, 28)
        txtname.TabIndex = 1
        ' 
        ' Label2
        ' 
        Label2.AutoSize = True
        Label2.Location = New Point(153, 91)
        Label2.Name = "Label2"
        Label2.Size = New Size(56, 21)
        Label2.TabIndex = 2
        Label2.Text = "Label2"
        ' 
        ' Label3
        ' 
        Label3.AutoSize = True
        Label3.Location = New Point(153, 147)
        Label3.Name = "Label3"
        Label3.Size = New Size(56, 21)
        Label3.TabIndex = 3
        Label3.Text = "Label3"
        ' 
        ' Label4
        ' 
        Label4.AutoSize = True
        Label4.BackColor = SystemColors.ControlDarkDark
        Label4.Location = New Point(151, 208)
        Label4.Name = "Label4"
        Label4.Size = New Size(56, 21)
        Label4.TabIndex = 4
        Label4.Text = "Label4"
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(9F, 21F)
        AutoScaleMode = AutoScaleMode.Font
        BackColor = SystemColors.ActiveCaption
        ClientSize = New Size(800, 450)
        Controls.Add(Label4)
        Controls.Add(Label3)
        Controls.Add(Label2)
        Controls.Add(txtname)
        Controls.Add(Label1)
        ForeColor = SystemColors.Desktop
        Name = "Form1"
        Text = "Form1"
        ResumeLayout(False)
        PerformLayout()
    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents txtname As TextBox
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents Label4 As Label
End Class
