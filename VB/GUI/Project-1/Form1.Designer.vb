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
        txtid = New TextBox()
        Label2 = New Label()
        txtfee = New TextBox()
        Label3 = New Label()
        DataGridView1 = New DataGridView()
        Label4 = New Label()
        GroupBox1 = New GroupBox()
        Button1 = New Button()
        Button2 = New Button()
        Button3 = New Button()
        Button4 = New Button()
        CType(DataGridView1, ComponentModel.ISupportInitialize).BeginInit()
        GroupBox1.SuspendLayout()
        SuspendLayout()
        ' 
        ' Label1
        ' 
        Label1.AutoSize = True
        Label1.Location = New Point(12, 56)
        Label1.Name = "Label1"
        Label1.Size = New Size(52, 21)
        Label1.TabIndex = 0
        Label1.Text = "Name"
        ' 
        ' txtname
        ' 
        txtname.Location = New Point(87, 53)
        txtname.Name = "txtname"
        txtname.Size = New Size(245, 29)
        txtname.TabIndex = 1
        ' 
        ' txtid
        ' 
        txtid.Location = New Point(87, 88)
        txtid.Name = "txtid"
        txtid.Size = New Size(245, 29)
        txtid.TabIndex = 3
        ' 
        ' Label2
        ' 
        Label2.AutoSize = True
        Label2.Location = New Point(12, 91)
        Label2.Name = "Label2"
        Label2.Size = New Size(23, 21)
        Label2.TabIndex = 2
        Label2.Text = "Id"
        ' 
        ' txtfee
        ' 
        txtfee.Location = New Point(87, 125)
        txtfee.Name = "txtfee"
        txtfee.Size = New Size(245, 29)
        txtfee.TabIndex = 5
        ' 
        ' Label3
        ' 
        Label3.AutoSize = True
        Label3.Location = New Point(12, 128)
        Label3.Name = "Label3"
        Label3.Size = New Size(34, 21)
        Label3.TabIndex = 4
        Label3.Text = "Fee"
        ' 
        ' DataGridView1
        ' 
        DataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize
        DataGridView1.Location = New Point(338, 53)
        DataGridView1.Name = "DataGridView1"
        DataGridView1.RowHeadersWidth = 51
        DataGridView1.RowTemplate.Height = 31
        DataGridView1.Size = New Size(450, 279)
        DataGridView1.TabIndex = 6
        ' 
        ' Label4
        ' 
        Label4.Dock = DockStyle.Top
        Label4.Font = New Font("Segoe UI", 13.8F, FontStyle.Bold Or FontStyle.Italic, GraphicsUnit.Point)
        Label4.Location = New Point(0, 0)
        Label4.Name = "Label4"
        Label4.Size = New Size(800, 37)
        Label4.TabIndex = 7
        Label4.Text = "Welcome to Hues"
        Label4.TextAlign = ContentAlignment.MiddleCenter
        ' 
        ' GroupBox1
        ' 
        GroupBox1.Controls.Add(Button4)
        GroupBox1.Controls.Add(Button3)
        GroupBox1.Controls.Add(Button2)
        GroupBox1.Controls.Add(Button1)
        GroupBox1.ForeColor = SystemColors.ButtonFace
        GroupBox1.Location = New Point(12, 169)
        GroupBox1.Name = "GroupBox1"
        GroupBox1.Size = New Size(320, 163)
        GroupBox1.TabIndex = 8
        GroupBox1.TabStop = False
        GroupBox1.Text = "Operation"
        ' 
        ' Button1
        ' 
        Button1.AllowDrop = True
        Button1.BackColor = SystemColors.WindowText
        Button1.ForeColor = SystemColors.AppWorkspace
        Button1.Location = New Point(41, 31)
        Button1.Name = "Button1"
        Button1.Size = New Size(117, 45)
        Button1.TabIndex = 0
        Button1.Text = "Insert"
        Button1.UseVisualStyleBackColor = False
        ' 
        ' Button2
        ' 
        Button2.AllowDrop = True
        Button2.BackColor = SystemColors.WindowText
        Button2.ForeColor = SystemColors.AppWorkspace
        Button2.Location = New Point(164, 31)
        Button2.Name = "Button2"
        Button2.Size = New Size(117, 45)
        Button2.TabIndex = 1
        Button2.Text = "Update"
        Button2.UseVisualStyleBackColor = False
        ' 
        ' Button3
        ' 
        Button3.AllowDrop = True
        Button3.BackColor = SystemColors.WindowText
        Button3.ForeColor = SystemColors.AppWorkspace
        Button3.Location = New Point(164, 91)
        Button3.Name = "Button3"
        Button3.Size = New Size(117, 45)
        Button3.TabIndex = 2
        Button3.Text = "Clear"
        Button3.UseVisualStyleBackColor = False
        ' 
        ' Button4
        ' 
        Button4.AllowDrop = True
        Button4.BackColor = SystemColors.WindowText
        Button4.ForeColor = SystemColors.AppWorkspace
        Button4.Location = New Point(41, 91)
        Button4.Name = "Button4"
        Button4.Size = New Size(117, 45)
        Button4.TabIndex = 3
        Button4.Text = "Delete"
        Button4.UseVisualStyleBackColor = False
        ' 
        ' Form1
        ' 
        AutoScaleDimensions = New SizeF(9F, 21F)
        AutoScaleMode = AutoScaleMode.Font
        BackColor = SystemColors.ActiveCaptionText
        ClientSize = New Size(800, 351)
        Controls.Add(GroupBox1)
        Controls.Add(Label4)
        Controls.Add(DataGridView1)
        Controls.Add(txtfee)
        Controls.Add(Label3)
        Controls.Add(txtid)
        Controls.Add(Label2)
        Controls.Add(txtname)
        Controls.Add(Label1)
        ForeColor = SystemColors.ButtonHighlight
        Name = "Form1"
        Text = "Form1"
        CType(DataGridView1, ComponentModel.ISupportInitialize).EndInit()
        GroupBox1.ResumeLayout(False)
        ResumeLayout(False)
        PerformLayout()
    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents txtname As TextBox
    Friend WithEvents txtid As TextBox
    Friend WithEvents Label2 As Label
    Friend WithEvents txtfee As TextBox
    Friend WithEvents Label3 As Label
    Friend WithEvents DataGridView1 As DataGridView
    Friend WithEvents Label4 As Label
    Friend WithEvents GroupBox1 As GroupBox
    Friend WithEvents Button4 As Button
    Friend WithEvents Button3 As Button
    Friend WithEvents Button2 As Button
    Friend WithEvents Button1 As Button
End Class
