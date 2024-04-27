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
        txt1 = New TextBox()
        Label1 = New Label()
        Label2 = New Label()
        txtresult = New TextBox()
        btncount = New Button()
        btnsum = New Button()
        btnrev = New Button()
        btnreset = New Button()
        btnexit = New Button()
        SuspendLayout()
        ' 
        ' txt1
        ' 
        txt1.Location = New Point(292, 56)
        txt1.Name = "txt1"
        txt1.Size = New Size(125, 29)
        txt1.TabIndex = 0
        ' 
        ' Label1
        ' 
        Label1.AutoSize = True
        Label1.Location = New Point(94, 64)
        Label1.Name = "Label1"
        Label1.Size = New Size(139, 21)
        Label1.TabIndex = 1
        Label1.Text = "Enter Any Number"
        ' 
        ' Label2
        ' 
        Label2.AutoSize = True
        Label2.Location = New Point(147, 130)
        Label2.Name = "Label2"
        Label2.Size = New Size(53, 21)
        Label2.TabIndex = 2
        Label2.Text = "Result"
        ' 
        ' txtresult
        ' 
        txtresult.Location = New Point(292, 122)
        txtresult.Name = "txtresult"
        txtresult.Size = New Size(125, 29)
        txtresult.TabIndex = 3
        ' 
        ' btncount
        ' 
        btncount.Location = New Point(76, 256)
        btncount.Name = "btncount"
        btncount.Size = New Size(94, 29)
        btncount.TabIndex = 4
        btncount.Text = "count"
        btncount.UseVisualStyleBackColor = True
        ' 
        ' btnsum
        ' 
        btnsum.Location = New Point(221, 256)
        btnsum.Name = "btnsum"
        btnsum.Size = New Size(94, 29)
        btnsum.TabIndex = 5
        btnsum.Text = "sum"
        btnsum.UseVisualStyleBackColor = True
        ' 
        ' btnrev
        ' 
        btnrev.Location = New Point(387, 256)
        btnrev.Name = "btnrev"
        btnrev.Size = New Size(94, 29)
        btnrev.TabIndex = 6
        btnrev.Text = "Reverse"
        btnrev.UseVisualStyleBackColor = True
        ' 
        ' btnreset
        ' 
        btnreset.Location = New Point(82, 360)
        btnreset.Name = "btnreset"
        btnreset.Size = New Size(94, 29)
        btnreset.TabIndex = 7
        btnreset.Text = "Reset"
        btnreset.UseVisualStyleBackColor = True
        ' 
        ' btnexit
        ' 
        btnexit.Location = New Point(221, 355)
        btnexit.Name = "btnexit"
        btnexit.Size = New Size(94, 29)
        btnexit.TabIndex = 8
        btnexit.Text = "Exit"
        btnexit.UseVisualStyleBackColor = True
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(9F, 21F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(800, 450)
        Controls.Add(btnexit)
        Controls.Add(btnreset)
        Controls.Add(btnrev)
        Controls.Add(btnsum)
        Controls.Add(btncount)
        Controls.Add(txtresult)
        Controls.Add(Label2)
        Controls.Add(Label1)
        Controls.Add(txt1)
        Name = "Form1"
        Text = "Form1"
        ResumeLayout(False)
        PerformLayout()
    End Sub

    Friend WithEvents txt1 As TextBox
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents txtresult As TextBox
    Friend WithEvents btncount As Button
    Friend WithEvents btnsum As Button
    Friend WithEvents btnrev As Button
    Friend WithEvents btnreset As Button
    Friend WithEvents btnexit As Button
End Class
