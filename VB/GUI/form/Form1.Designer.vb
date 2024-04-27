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
        txtname = New TextBox()
        txtcourse = New TextBox()
        txtid = New TextBox()
        Label5 = New Label()
        Label6 = New Label()
        Label7 = New Label()
        Label8 = New Label()
        txts2 = New TextBox()
        txts3 = New TextBox()
        txts4 = New TextBox()
        txttotal = New TextBox()
        btntotal = New Button()
        btnreset = New Button()
        btnexit = New Button()
        btngrade = New Button()
        btnpcg = New Button()
        Label9 = New Label()
        txtpcg = New TextBox()
        btnmks = New Button()
        Label10 = New Label()
        txtgd = New TextBox()
        txts1 = New TextBox()
        SuspendLayout()
        ' 
        ' Label1
        ' 
        Label1.AutoSize = True
        Label1.Location = New Point(107, 42)
        Label1.Name = "Label1"
        Label1.Size = New Size(52, 21)
        Label1.TabIndex = 0
        Label1.Text = "Name"
        ' 
        ' Label2
        ' 
        Label2.AutoSize = True
        Label2.Location = New Point(130, 93)
        Label2.Name = "Label2"
        Label2.Size = New Size(25, 21)
        Label2.TabIndex = 1
        Label2.Text = "ID"
        ' 
        ' Label3
        ' 
        Label3.AutoSize = True
        Label3.Location = New Point(103, 150)
        Label3.Name = "Label3"
        Label3.Size = New Size(56, 21)
        Label3.TabIndex = 2
        Label3.Text = "course"
        ' 
        ' Label4
        ' 
        Label4.AutoSize = True
        Label4.Location = New Point(149, 228)
        Label4.Name = "Label4"
        Label4.Size = New Size(26, 21)
        Label4.TabIndex = 3
        Label4.Text = "s1"
        ' 
        ' txtname
        ' 
        txtname.Location = New Point(245, 34)
        txtname.Name = "txtname"
        txtname.Size = New Size(125, 29)
        txtname.TabIndex = 4
        ' 
        ' txtcourse
        ' 
        txtcourse.Location = New Point(245, 142)
        txtcourse.Name = "txtcourse"
        txtcourse.Size = New Size(125, 29)
        txtcourse.TabIndex = 7
        ' 
        ' txtid
        ' 
        txtid.Location = New Point(245, 85)
        txtid.Name = "txtid"
        txtid.Size = New Size(125, 29)
        txtid.TabIndex = 8
        ' 
        ' Label5
        ' 
        Label5.AutoSize = True
        Label5.Location = New Point(149, 287)
        Label5.Name = "Label5"
        Label5.Size = New Size(26, 21)
        Label5.TabIndex = 9
        Label5.Text = "s2"
        ' 
        ' Label6
        ' 
        Label6.AutoSize = True
        Label6.Location = New Point(149, 351)
        Label6.Name = "Label6"
        Label6.Size = New Size(26, 21)
        Label6.TabIndex = 10
        Label6.Text = "s3"
        ' 
        ' Label7
        ' 
        Label7.AutoSize = True
        Label7.Location = New Point(149, 422)
        Label7.Name = "Label7"
        Label7.Size = New Size(26, 21)
        Label7.TabIndex = 11
        Label7.Text = "s4"
        ' 
        ' Label8
        ' 
        Label8.AutoSize = True
        Label8.Location = New Point(133, 473)
        Label8.Name = "Label8"
        Label8.Size = New Size(42, 21)
        Label8.TabIndex = 12
        Label8.Text = "Total"
        ' 
        ' txts2
        ' 
        txts2.Location = New Point(245, 279)
        txts2.Name = "txts2"
        txts2.Size = New Size(125, 29)
        txts2.TabIndex = 13
        ' 
        ' txts3
        ' 
        txts3.Location = New Point(245, 343)
        txts3.Name = "txts3"
        txts3.Size = New Size(125, 29)
        txts3.TabIndex = 14
        ' 
        ' txts4
        ' 
        txts4.Location = New Point(245, 414)
        txts4.Name = "txts4"
        txts4.Size = New Size(125, 29)
        txts4.TabIndex = 15
        ' 
        ' txttotal
        ' 
        txttotal.Location = New Point(245, 465)
        txttotal.Name = "txttotal"
        txttotal.Size = New Size(125, 29)
        txttotal.TabIndex = 16
        ' 
        ' btntotal
        ' 
        btntotal.Location = New Point(161, 708)
        btntotal.Name = "btntotal"
        btntotal.Size = New Size(94, 29)
        btntotal.TabIndex = 17
        btntotal.Text = "Total"
        btntotal.UseVisualStyleBackColor = True
        ' 
        ' btnreset
        ' 
        btnreset.Location = New Point(328, 708)
        btnreset.Name = "btnreset"
        btnreset.Size = New Size(94, 29)
        btnreset.TabIndex = 18
        btnreset.Text = "Reset"
        btnreset.UseVisualStyleBackColor = True
        ' 
        ' btnexit
        ' 
        btnexit.Location = New Point(519, 708)
        btnexit.Name = "btnexit"
        btnexit.Size = New Size(94, 29)
        btnexit.TabIndex = 19
        btnexit.Text = "Exit"
        btnexit.UseVisualStyleBackColor = True
        ' 
        ' btngrade
        ' 
        btngrade.Location = New Point(519, 634)
        btngrade.Name = "btngrade"
        btngrade.Size = New Size(94, 29)
        btngrade.TabIndex = 20
        btngrade.Text = "Grade"
        btngrade.UseVisualStyleBackColor = True
        ' 
        ' btnpcg
        ' 
        btnpcg.Location = New Point(300, 634)
        btnpcg.Name = "btnpcg"
        btnpcg.Size = New Size(122, 29)
        btnpcg.TabIndex = 21
        btnpcg.Text = "percentage"
        btnpcg.UseVisualStyleBackColor = True
        ' 
        ' Label9
        ' 
        Label9.AutoSize = True
        Label9.Location = New Point(119, 523)
        Label9.Name = "Label9"
        Label9.Size = New Size(61, 21)
        Label9.TabIndex = 22
        Label9.Text = "Percent"
        ' 
        ' txtpcg
        ' 
        txtpcg.Location = New Point(245, 515)
        txtpcg.Name = "txtpcg"
        txtpcg.Size = New Size(125, 29)
        txtpcg.TabIndex = 23
        ' 
        ' btnmks
        ' 
        btnmks.Location = New Point(149, 634)
        btnmks.Name = "btnmks"
        btnmks.Size = New Size(94, 29)
        btnmks.TabIndex = 24
        btnmks.Text = " Marks"
        btnmks.UseVisualStyleBackColor = True
        ' 
        ' Label10
        ' 
        Label10.AutoSize = True
        Label10.Location = New Point(115, 569)
        Label10.Name = "Label10"
        Label10.Size = New Size(52, 21)
        Label10.TabIndex = 25
        Label10.Text = "Grade"
        ' 
        ' txtgd
        ' 
        txtgd.Location = New Point(245, 566)
        txtgd.Name = "txtgd"
        txtgd.Size = New Size(125, 29)
        txtgd.TabIndex = 26
        ' 
        ' txts1
        ' 
        txts1.Location = New Point(245, 221)
        txts1.Name = "txts1"
        txts1.Size = New Size(125, 29)
        txts1.TabIndex = 6
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(9F, 21F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(800, 793)
        Controls.Add(txtgd)
        Controls.Add(Label10)
        Controls.Add(btnmks)
        Controls.Add(txtpcg)
        Controls.Add(Label9)
        Controls.Add(btnpcg)
        Controls.Add(btngrade)
        Controls.Add(btnexit)
        Controls.Add(btnreset)
        Controls.Add(btntotal)
        Controls.Add(txttotal)
        Controls.Add(txts4)
        Controls.Add(txts3)
        Controls.Add(txts2)
        Controls.Add(Label8)
        Controls.Add(Label7)
        Controls.Add(Label6)
        Controls.Add(Label5)
        Controls.Add(txtid)
        Controls.Add(txtcourse)
        Controls.Add(txts1)
        Controls.Add(txtname)
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
    Friend WithEvents txtname As TextBox
    Friend WithEvents txtcourse As TextBox
    Friend WithEvents txtid As TextBox
    Friend WithEvents Label5 As Label
    Friend WithEvents Label6 As Label
    Friend WithEvents Label7 As Label
    Friend WithEvents Label8 As Label
    Friend WithEvents txts2 As TextBox
    Friend WithEvents txts3 As TextBox
    Friend WithEvents txts4 As TextBox
    Friend WithEvents txttotal As TextBox
    Friend WithEvents btntotal As Button
    Friend WithEvents btnreset As Button
    Friend WithEvents btnexit As Button
    Friend WithEvents btngrade As Button
    Friend WithEvents btnpcg As Button
    Friend WithEvents Label9 As Label
    Friend WithEvents txtpcg As TextBox
    Friend WithEvents btnmks As Button
    Friend WithEvents Label10 As Label
    Friend WithEvents txtgd As TextBox
    Friend WithEvents txts1 As TextBox
End Class
