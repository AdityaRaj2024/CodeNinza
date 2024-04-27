<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmStudentDetails
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
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
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Label1 = New Label()
        Label2 = New Label()
        Roll_Num = New NumericUpDown()
        Label3 = New Label()
        txtSName = New TextBox()
        Label4 = New Label()
        Hobbies = New Label()
        Label6 = New Label()
        Label7 = New Label()
        Label8 = New Label()
        Label9 = New Label()
        dtp_dob = New DateTimePicker()
        GroupBox1 = New GroupBox()
        rdbOthers = New RadioButton()
        rdbFemale = New RadioButton()
        rdbMale = New RadioButton()
        Panel1 = New Panel()
        chkbMovie = New CheckBox()
        chkbRead = New CheckBox()
        chkbMusic = New CheckBox()
        Panel2 = New Panel()
        mtxtPin = New MaskedTextBox()
        lstState = New ListBox()
        cmbCity = New ComboBox()
        txtaddress = New TextBox()
        ptbphoto = New PictureBox()
        llbSelectPhoto = New LinkLabel()
        OpenPhoto1 = New OpenFileDialog()
        btnsubmit = New Button()
        btnclose = New Button()
        CType(Roll_Num, ComponentModel.ISupportInitialize).BeginInit()
        GroupBox1.SuspendLayout()
        Panel1.SuspendLayout()
        Panel2.SuspendLayout()
        CType(ptbphoto, ComponentModel.ISupportInitialize).BeginInit()
        SuspendLayout()
        ' 
        ' Label1
        ' 
        Label1.Dock = DockStyle.Top
        Label1.Font = New Font("Algerian", 18F, FontStyle.Bold, GraphicsUnit.Point, CByte(0))
        Label1.Location = New Point(0, 0)
        Label1.Name = "Label1"
        Label1.Size = New Size(1130, 32)
        Label1.TabIndex = 0
        Label1.Text = "Personal Information"
        Label1.TextAlign = ContentAlignment.MiddleCenter
        ' 
        ' Label2
        ' 
        Label2.AutoSize = True
        Label2.Font = New Font("Segoe UI Semibold", 13.8F, FontStyle.Bold Or FontStyle.Italic, GraphicsUnit.Point, CByte(0))
        Label2.Location = New Point(73, 160)
        Label2.Name = "Label2"
        Label2.Size = New Size(119, 31)
        Label2.TabIndex = 1
        Label2.Text = "Roll No :- "
        ' 
        ' Roll_Num
        ' 
        Roll_Num.Location = New Point(292, 160)
        Roll_Num.Maximum = New Decimal(New Integer() {150, 0, 0, 0})
        Roll_Num.Minimum = New Decimal(New Integer() {1, 0, 0, 0})
        Roll_Num.Name = "Roll_Num"
        Roll_Num.Size = New Size(150, 38)
        Roll_Num.TabIndex = 2
        Roll_Num.Value = New Decimal(New Integer() {1, 0, 0, 0})
        ' 
        ' Label3
        ' 
        Label3.AutoSize = True
        Label3.Font = New Font("Segoe UI Semibold", 13.8F, FontStyle.Bold, GraphicsUnit.Point, CByte(0))
        Label3.Location = New Point(73, 94)
        Label3.Name = "Label3"
        Label3.Size = New Size(97, 31)
        Label3.TabIndex = 3
        Label3.Text = "Name :-"
        ' 
        ' txtSName
        ' 
        txtSName.Location = New Point(292, 86)
        txtSName.Name = "txtSName"
        txtSName.Size = New Size(186, 38)
        txtSName.TabIndex = 4
        ' 
        ' Label4
        ' 
        Label4.AutoSize = True
        Label4.Font = New Font("Segoe UI Semibold", 13.8F, FontStyle.Bold, GraphicsUnit.Point, CByte(0))
        Label4.Location = New Point(73, 228)
        Label4.Name = "Label4"
        Label4.Size = New Size(151, 31)
        Label4.TabIndex = 5
        Label4.Text = "Date Of Birth"
        ' 
        ' Hobbies
        ' 
        Hobbies.AutoSize = True
        Hobbies.Location = New Point(3, 10)
        Hobbies.Name = "Hobbies"
        Hobbies.Size = New Size(122, 31)
        Hobbies.TabIndex = 6
        Hobbies.Text = "Hobbies :-"
        ' 
        ' Label6
        ' 
        Label6.AutoSize = True
        Label6.Location = New Point(3, 14)
        Label6.Name = "Label6"
        Label6.Size = New Size(125, 31)
        Label6.TabIndex = 7
        Label6.Text = "Address :- "
        ' 
        ' Label7
        ' 
        Label7.AutoSize = True
        Label7.Location = New Point(16, 106)
        Label7.Name = "Label7"
        Label7.Size = New Size(54, 31)
        Label7.TabIndex = 8
        Label7.Text = "City"
        ' 
        ' Label8
        ' 
        Label8.AutoSize = True
        Label8.Location = New Point(28, 323)
        Label8.Name = "Label8"
        Label8.Size = New Size(133, 31)
        Label8.TabIndex = 9
        Label8.Text = "Pin Code :- "
        ' 
        ' Label9
        ' 
        Label9.AutoSize = True
        Label9.Location = New Point(16, 166)
        Label9.Name = "Label9"
        Label9.Size = New Size(93, 31)
        Label9.TabIndex = 10
        Label9.Text = "State :- "
        ' 
        ' dtp_dob
        ' 
        dtp_dob.Format = DateTimePickerFormat.Short
        dtp_dob.Location = New Point(278, 228)
        dtp_dob.MaxDate = New Date(2004, 12, 31, 0, 0, 0, 0)
        dtp_dob.MinDate = New Date(1999, 1, 1, 0, 0, 0, 0)
        dtp_dob.Name = "dtp_dob"
        dtp_dob.Size = New Size(200, 38)
        dtp_dob.TabIndex = 11
        dtp_dob.Value = New Date(2001, 1, 1, 0, 0, 0, 0)
        ' 
        ' GroupBox1
        ' 
        GroupBox1.Controls.Add(rdbOthers)
        GroupBox1.Controls.Add(rdbFemale)
        GroupBox1.Controls.Add(rdbMale)
        GroupBox1.Font = New Font("Segoe UI Semibold", 13.8F, FontStyle.Bold, GraphicsUnit.Point, CByte(0))
        GroupBox1.Location = New Point(73, 285)
        GroupBox1.Name = "GroupBox1"
        GroupBox1.Size = New Size(455, 162)
        GroupBox1.TabIndex = 12
        GroupBox1.TabStop = False
        GroupBox1.Text = "Gender"
        ' 
        ' rdbOthers
        ' 
        rdbOthers.AutoSize = True
        rdbOthers.Location = New Point(210, 106)
        rdbOthers.Name = "rdbOthers"
        rdbOthers.Size = New Size(104, 35)
        rdbOthers.TabIndex = 2
        rdbOthers.TabStop = True
        rdbOthers.Text = "Others"
        rdbOthers.UseVisualStyleBackColor = True
        ' 
        ' rdbFemale
        ' 
        rdbFemale.AutoSize = True
        rdbFemale.Location = New Point(210, 65)
        rdbFemale.Name = "rdbFemale"
        rdbFemale.Size = New Size(109, 35)
        rdbFemale.TabIndex = 1
        rdbFemale.TabStop = True
        rdbFemale.Text = "Female"
        rdbFemale.UseVisualStyleBackColor = True
        ' 
        ' rdbMale
        ' 
        rdbMale.AutoSize = True
        rdbMale.Location = New Point(210, 15)
        rdbMale.Name = "rdbMale"
        rdbMale.Size = New Size(94, 35)
        rdbMale.TabIndex = 0
        rdbMale.TabStop = True
        rdbMale.Text = "MALE"
        rdbMale.UseVisualStyleBackColor = True
        ' 
        ' Panel1
        ' 
        Panel1.Controls.Add(chkbMovie)
        Panel1.Controls.Add(chkbRead)
        Panel1.Controls.Add(chkbMusic)
        Panel1.Controls.Add(Hobbies)
        Panel1.Location = New Point(73, 471)
        Panel1.Name = "Panel1"
        Panel1.Size = New Size(469, 150)
        Panel1.TabIndex = 13
        ' 
        ' chkbMovie
        ' 
        chkbMovie.AutoSize = True
        chkbMovie.Location = New Point(210, 94)
        chkbMovie.Name = "chkbMovie"
        chkbMovie.Size = New Size(111, 35)
        chkbMovie.TabIndex = 9
        chkbMovie.Text = "Movies"
        chkbMovie.UseVisualStyleBackColor = True
        ' 
        ' chkbRead
        ' 
        chkbRead.AutoSize = True
        chkbRead.Location = New Point(210, 53)
        chkbRead.Name = "chkbRead"
        chkbRead.Size = New Size(120, 35)
        chkbRead.TabIndex = 8
        chkbRead.Text = "Reading"
        chkbRead.UseVisualStyleBackColor = True
        ' 
        ' chkbMusic
        ' 
        chkbMusic.AutoSize = True
        chkbMusic.Location = New Point(210, 3)
        chkbMusic.Name = "chkbMusic"
        chkbMusic.Size = New Size(97, 35)
        chkbMusic.TabIndex = 7
        chkbMusic.Text = "Music"
        chkbMusic.UseVisualStyleBackColor = True
        ' 
        ' Panel2
        ' 
        Panel2.Controls.Add(mtxtPin)
        Panel2.Controls.Add(lstState)
        Panel2.Controls.Add(cmbCity)
        Panel2.Controls.Add(txtaddress)
        Panel2.Controls.Add(Label6)
        Panel2.Controls.Add(Label8)
        Panel2.Controls.Add(Label7)
        Panel2.Controls.Add(Label9)
        Panel2.Location = New Point(626, 300)
        Panel2.Name = "Panel2"
        Panel2.Size = New Size(479, 381)
        Panel2.TabIndex = 14
        ' 
        ' mtxtPin
        ' 
        mtxtPin.Location = New Point(193, 316)
        mtxtPin.Mask = "000000"
        mtxtPin.Name = "mtxtPin"
        mtxtPin.PromptChar = "#"c
        mtxtPin.Size = New Size(201, 38)
        mtxtPin.TabIndex = 12
        ' 
        ' lstState
        ' 
        lstState.FormattingEnabled = True
        lstState.ItemHeight = 31
        lstState.Items.AddRange(New Object() {"Bihar", "Jharkhand", "Uttar Pradesh", "West Bengal"})
        lstState.Location = New Point(193, 162)
        lstState.Name = "lstState"
        lstState.Size = New Size(245, 128)
        lstState.TabIndex = 11
        ' 
        ' cmbCity
        ' 
        cmbCity.FormattingEnabled = True
        cmbCity.Items.AddRange(New Object() {"Patna", "Gaya", "Motihari", "BhagalPur", "Ranchi", "Bokaro", "Dhanbad", "Benaras", "Prayagraj", "Lucknow", "Kolkata", "Malda", "Durgapur", "Silliguri"})
        cmbCity.Location = New Point(193, 98)
        cmbCity.Name = "cmbCity"
        cmbCity.Size = New Size(245, 39)
        cmbCity.TabIndex = 9
        ' 
        ' txtaddress
        ' 
        txtaddress.Location = New Point(193, 14)
        txtaddress.Multiline = True
        txtaddress.Name = "txtaddress"
        txtaddress.ScrollBars = ScrollBars.Vertical
        txtaddress.Size = New Size(259, 63)
        txtaddress.TabIndex = 8
        ' 
        ' ptbphoto
        ' 
        ptbphoto.Location = New Point(844, 55)
        ptbphoto.Name = "ptbphoto"
        ptbphoto.Size = New Size(147, 156)
        ptbphoto.TabIndex = 15
        ptbphoto.TabStop = False
        ' 
        ' llbSelectPhoto
        ' 
        llbSelectPhoto.AutoSize = True
        llbSelectPhoto.Location = New Point(847, 234)
        llbSelectPhoto.Name = "llbSelectPhoto"
        llbSelectPhoto.Size = New Size(144, 31)
        llbSelectPhoto.TabIndex = 16
        llbSelectPhoto.TabStop = True
        llbSelectPhoto.Text = "Select Photo"
        ' 
        ' OpenPhoto1
        ' 
        OpenPhoto1.FileName = "OpenFileDialog1"
        ' 
        ' btnsubmit
        ' 
        btnsubmit.Location = New Point(340, 749)
        btnsubmit.Name = "btnsubmit"
        btnsubmit.Size = New Size(116, 46)
        btnsubmit.TabIndex = 17
        btnsubmit.Text = "&Submit"
        btnsubmit.UseVisualStyleBackColor = True
        ' 
        ' btnclose
        ' 
        btnclose.Location = New Point(577, 749)
        btnclose.Name = "btnclose"
        btnclose.Size = New Size(119, 46)
        btnclose.TabIndex = 18
        btnclose.Text = "&Close"
        btnclose.UseVisualStyleBackColor = True
        ' 
        ' frmStudentDetails
        ' 
        AutoScaleDimensions = New SizeF(13F, 31F)
        AutoScaleMode = AutoScaleMode.Font
        AutoScroll = True
        ClientSize = New Size(1130, 837)
        Controls.Add(btnclose)
        Controls.Add(btnsubmit)
        Controls.Add(llbSelectPhoto)
        Controls.Add(ptbphoto)
        Controls.Add(Panel2)
        Controls.Add(Panel1)
        Controls.Add(GroupBox1)
        Controls.Add(dtp_dob)
        Controls.Add(Label4)
        Controls.Add(txtSName)
        Controls.Add(Label3)
        Controls.Add(Roll_Num)
        Controls.Add(Label2)
        Controls.Add(Label1)
        Font = New Font("Segoe UI Semibold", 13.8F, FontStyle.Bold, GraphicsUnit.Point, CByte(0))
        Margin = New Padding(4)
        Name = "frmStudentDetails"
        StartPosition = FormStartPosition.CenterScreen
        Text = "Student Details"
        CType(Roll_Num, ComponentModel.ISupportInitialize).EndInit()
        GroupBox1.ResumeLayout(False)
        GroupBox1.PerformLayout()
        Panel1.ResumeLayout(False)
        Panel1.PerformLayout()
        Panel2.ResumeLayout(False)
        Panel2.PerformLayout()
        CType(ptbphoto, ComponentModel.ISupportInitialize).EndInit()
        ResumeLayout(False)
        PerformLayout()
    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Roll_Num As NumericUpDown
    Friend WithEvents Label3 As Label
    Friend WithEvents txtSName As TextBox
    Friend WithEvents Label4 As Label
    Friend WithEvents Hobbies As Label
    Friend WithEvents Label6 As Label
    Friend WithEvents Label7 As Label
    Friend WithEvents Label8 As Label
    Friend WithEvents Label9 As Label
    Friend WithEvents dtp_dob As DateTimePicker
    Friend WithEvents GroupBox1 As GroupBox
    Friend WithEvents rdbOthers As RadioButton
    Friend WithEvents rdbFemale As RadioButton
    Friend WithEvents rdbMale As RadioButton
    Friend WithEvents Panel1 As Panel
    Friend WithEvents chkbMovie As CheckBox
    Friend WithEvents chkbRead As CheckBox
    Friend WithEvents chkbMusic As CheckBox
    Friend WithEvents Panel2 As Panel
    Friend WithEvents txtaddress As TextBox
    Friend WithEvents cmbCity As ComboBox
    Friend WithEvents lstState As ListBox
    Friend WithEvents mtxtPin As MaskedTextBox
    Friend WithEvents ptbphoto As PictureBox
    Friend WithEvents llbSelectPhoto As LinkLabel
    Friend WithEvents OpenPhoto1 As OpenFileDialog
    Friend WithEvents btnsubmit As Button
    Friend WithEvents btnclose As Button
End Class
