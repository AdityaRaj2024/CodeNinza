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
        Label2 = New Label()
        Label3 = New Label()
        Label4 = New Label()
        Label5 = New Label()
        Label6 = New Label()
        Button1 = New Button()
        TextBox1 = New TextBox()
        SuspendLayout()
        ' 
        ' Label1
        ' 
        Label1.AutoSize = True
        Label1.Location = New Point(87, 38)
        Label1.Name = "Label1"
        Label1.Size = New Size(120, 21)
        Label1.TabIndex = 0
        Label1.Text = "Student's Name"
        ' 
        ' Label2
        ' 
        Label2.AutoSize = True
        Label2.Location = New Point(87, 157)
        Label2.Name = "Label2"
        Label2.Size = New Size(118, 21)
        Label2.TabIndex = 1
        Label2.Text = "Mother's Name"
        ' 
        ' Label3
        ' 
        Label3.AutoSize = True
        Label3.Location = New Point(87, 369)
        Label3.Name = "Label3"
        Label3.Size = New Size(56, 21)
        Label3.TabIndex = 2
        Label3.Text = "Label3"
        ' 
        ' Label4
        ' 
        Label4.AutoSize = True
        Label4.Location = New Point(87, 284)
        Label4.Name = "Label4"
        Label4.Size = New Size(56, 21)
        Label4.TabIndex = 3
        Label4.Text = "Label4"
        ' 
        ' Label5
        ' 
        Label5.AutoSize = True
        Label5.Location = New Point(87, 104)
        Label5.Name = "Label5"
        Label5.Size = New Size(110, 21)
        Label5.TabIndex = 4
        Label5.Text = "Father's Name"
        ' 
        ' Label6
        ' 
        Label6.AutoSize = True
        Label6.Location = New Point(87, 223)
        Label6.Name = "Label6"
        Label6.Size = New Size(56, 21)
        Label6.TabIndex = 5
        Label6.Text = "Label6"
        ' 
        ' Button1
        ' 
        Button1.Location = New Point(87, 462)
        Button1.Name = "Button1"
        Button1.Size = New Size(94, 29)
        Button1.TabIndex = 6
        Button1.Text = "Button1"
        Button1.UseVisualStyleBackColor = True
        ' 
        ' TextBox1
        ' 
        TextBox1.Location = New Point(234, 30)
        TextBox1.Name = "TextBox1"
        TextBox1.Size = New Size(125, 29)
        TextBox1.TabIndex = 7
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(9F, 21F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(800, 739)
        Controls.Add(TextBox1)
        Controls.Add(Button1)
        Controls.Add(Label6)
        Controls.Add(Label5)
        Controls.Add(Label4)
        Controls.Add(Label3)
        Controls.Add(Label2)
        Controls.Add(Label1)
        Name = "Form1"
        Text = "Form1"
        ResumeLayout(False)
        PerformLayout()
    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents Label5 As Label
    Friend WithEvents Label6 As Label
    Friend WithEvents Button1 As Button
    Friend WithEvents TextBox1 As TextBox
End Class
