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
        BackgroundWorker1 = New ComponentModel.BackgroundWorker()
        txtfirst = New TextBox()
        txtsecond = New TextBox()
        Label1 = New Label()
        Label2 = New Label()
        btnadd = New Button()
        btnsub = New Button()
        btnmult = New Button()
        btndiv = New Button()
        btnreset = New Button()
        btnexit = New Button()
        Label3 = New Label()
        txtresult = New TextBox()
        SuspendLayout()
        ' 
        ' txtfirst
        ' 
        txtfirst.Location = New Point(304, 41)
        txtfirst.Name = "txtfirst"
        txtfirst.Size = New Size(125, 29)
        txtfirst.TabIndex = 0
        ' 
        ' txtsecond
        ' 
        txtsecond.Location = New Point(304, 98)
        txtsecond.Name = "txtsecond"
        txtsecond.Size = New Size(125, 29)
        txtsecond.TabIndex = 1
        ' 
        ' Label1
        ' 
        Label1.AutoSize = True
        Label1.Location = New Point(155, 44)
        Label1.Name = "Label1"
        Label1.Size = New Size(102, 21)
        Label1.TabIndex = 2
        Label1.Text = "First Number"
        ' 
        ' Label2
        ' 
        Label2.AutoSize = True
        Label2.Location = New Point(155, 107)
        Label2.Name = "Label2"
        Label2.Size = New Size(123, 21)
        Label2.TabIndex = 3
        Label2.Text = "Second Number"
        ' 
        ' btnadd
        ' 
        btnadd.Location = New Point(143, 245)
        btnadd.Name = "btnadd"
        btnadd.Size = New Size(94, 29)
        btnadd.TabIndex = 4
        btnadd.Text = "Add"
        btnadd.UseVisualStyleBackColor = True
        ' 
        ' btnsub
        ' 
        btnsub.Location = New Point(304, 238)
        btnsub.Name = "btnsub"
        btnsub.Size = New Size(94, 29)
        btnsub.TabIndex = 5
        btnsub.Text = "sub"
        btnsub.UseVisualStyleBackColor = True
        ' 
        ' btnmult
        ' 
        btnmult.Location = New Point(466, 238)
        btnmult.Name = "btnmult"
        btnmult.Size = New Size(94, 29)
        btnmult.TabIndex = 6
        btnmult.Text = "Mult"
        btnmult.UseVisualStyleBackColor = True
        ' 
        ' btndiv
        ' 
        btndiv.Location = New Point(619, 238)
        btndiv.Name = "btndiv"
        btndiv.Size = New Size(94, 29)
        btndiv.TabIndex = 7
        btndiv.Text = "Div"
        btndiv.UseVisualStyleBackColor = True
        ' 
        ' btnreset
        ' 
        btnreset.Location = New Point(143, 320)
        btnreset.Name = "btnreset"
        btnreset.Size = New Size(94, 29)
        btnreset.TabIndex = 8
        btnreset.Text = "Reset"
        btnreset.UseVisualStyleBackColor = True
        ' 
        ' btnexit
        ' 
        btnexit.Location = New Point(304, 320)
        btnexit.Name = "btnexit"
        btnexit.Size = New Size(94, 29)
        btnexit.TabIndex = 9
        btnexit.Text = "Exit"
        btnexit.UseVisualStyleBackColor = True
        ' 
        ' Label3
        ' 
        Label3.AutoSize = True
        Label3.Location = New Point(155, 159)
        Label3.Name = "Label3"
        Label3.Size = New Size(53, 21)
        Label3.TabIndex = 10
        Label3.Text = "Result"
        ' 
        ' txtresult
        ' 
        txtresult.Location = New Point(304, 156)
        txtresult.Name = "txtresult"
        txtresult.Size = New Size(125, 29)
        txtresult.TabIndex = 11
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(9F, 21F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(1146, 450)
        Controls.Add(txtresult)
        Controls.Add(Label3)
        Controls.Add(btnexit)
        Controls.Add(btnreset)
        Controls.Add(btndiv)
        Controls.Add(btnmult)
        Controls.Add(btnsub)
        Controls.Add(btnadd)
        Controls.Add(Label2)
        Controls.Add(Label1)
        Controls.Add(txtsecond)
        Controls.Add(txtfirst)
        Name = "Form1"
        Text = "Form1"
        ResumeLayout(False)
        PerformLayout()
    End Sub

    Friend WithEvents BackgroundWorker1 As System.ComponentModel.BackgroundWorker
    Friend WithEvents txtfirst As TextBox
    Friend WithEvents txtsecond As TextBox
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents btnadd As Button
    Friend WithEvents btnsub As Button
    Friend WithEvents btnmult As Button
    Friend WithEvents btndiv As Button
    Friend WithEvents btnreset As Button
    Friend WithEvents btnexit As Button
    Friend WithEvents Label3 As Label
    Friend WithEvents txtresult As TextBox
End Class
