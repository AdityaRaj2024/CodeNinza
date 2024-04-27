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
        txtfirst = New TextBox()
        txtresult = New TextBox()
        Label2 = New Label()
        mood = New Button()
        rev = New Button()
        poc = New Button()
        eoc = New Button()
        sod = New Button()
        pld = New Button()
        reset = New Button()
        exitt = New Button()
        SuspendLayout()
        ' 
        ' Label1
        ' 
        Label1.AutoSize = True
        Label1.Location = New Point(115, 52)
        Label1.Name = "Label1"
        Label1.Size = New Size(139, 21)
        Label1.TabIndex = 0
        Label1.Text = "Enter Any Number"
        ' 
        ' txtfirst
        ' 
        txtfirst.Location = New Point(355, 44)
        txtfirst.Name = "txtfirst"
        txtfirst.Size = New Size(125, 29)
        txtfirst.TabIndex = 1
        ' 
        ' txtresult
        ' 
        txtresult.Location = New Point(355, 116)
        txtresult.Name = "txtresult"
        txtresult.Size = New Size(125, 29)
        txtresult.TabIndex = 2
        ' 
        ' Label2
        ' 
        Label2.AutoSize = True
        Label2.Location = New Point(201, 124)
        Label2.Name = "Label2"
        Label2.Size = New Size(53, 21)
        Label2.TabIndex = 3
        Label2.Text = "Result"
        ' 
        ' mood
        ' 
        mood.Location = New Point(86, 201)
        mood.Name = "mood"
        mood.Size = New Size(94, 29)
        mood.TabIndex = 4
        mood.Text = "Multiply"
        mood.UseVisualStyleBackColor = True
        ' 
        ' rev
        ' 
        rev.Location = New Point(247, 201)
        rev.Name = "rev"
        rev.Size = New Size(94, 29)
        rev.TabIndex = 5
        rev.Text = "Reverse"
        rev.UseVisualStyleBackColor = True
        ' 
        ' poc
        ' 
        poc.Location = New Point(75, 270)
        poc.Name = "poc"
        poc.Size = New Size(94, 29)
        poc.TabIndex = 6
        poc.Text = "prime"
        poc.UseVisualStyleBackColor = True
        ' 
        ' eoc
        ' 
        eoc.Location = New Point(602, 201)
        eoc.Name = "eoc"
        eoc.Size = New Size(94, 29)
        eoc.TabIndex = 7
        eoc.Text = "Even/Odd"
        eoc.UseVisualStyleBackColor = True
        ' 
        ' sod
        ' 
        sod.Location = New Point(423, 201)
        sod.Name = "sod"
        sod.Size = New Size(94, 29)
        sod.TabIndex = 9
        sod.Text = "Sum"
        sod.UseVisualStyleBackColor = True
        ' 
        ' pld
        ' 
        pld.Location = New Point(237, 270)
        pld.Name = "pld"
        pld.Size = New Size(131, 29)
        pld.TabIndex = 11
        pld.Text = "palindrome"
        pld.UseVisualStyleBackColor = True
        ' 
        ' reset
        ' 
        reset.Location = New Point(423, 270)
        reset.Name = "reset"
        reset.Size = New Size(94, 29)
        reset.TabIndex = 12
        reset.Text = "Reset"
        reset.UseVisualStyleBackColor = True
        ' 
        ' exitt
        ' 
        exitt.Location = New Point(620, 270)
        exitt.Name = "exitt"
        exitt.Size = New Size(94, 29)
        exitt.TabIndex = 13
        exitt.Text = "Exit"
        exitt.UseVisualStyleBackColor = True
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(9F, 21F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(800, 450)
        Controls.Add(exitt)
        Controls.Add(reset)
        Controls.Add(pld)
        Controls.Add(sod)
        Controls.Add(eoc)
        Controls.Add(poc)
        Controls.Add(rev)
        Controls.Add(mood)
        Controls.Add(Label2)
        Controls.Add(txtresult)
        Controls.Add(txtfirst)
        Controls.Add(Label1)
        Name = "Form1"
        Text = "Form1"
        ResumeLayout(False)
        PerformLayout()
    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents txtfirst As TextBox
    Friend WithEvents txtresult As TextBox
    Friend WithEvents Label2 As Label
    Friend WithEvents mood As Button
    Friend WithEvents rev As Button
    Friend WithEvents poc As Button
    Friend WithEvents eoc As Button
    Friend WithEvents sod As Button
    Friend WithEvents pld As Button
    Friend WithEvents reset As Button
    Friend WithEvents exitt As Button
End Class
