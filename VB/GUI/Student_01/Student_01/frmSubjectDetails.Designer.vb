<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmSubjectDetails
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
        Dim TreeNode1 As TreeNode = New TreeNode("Communicative English")
        Dim TreeNode2 As TreeNode = New TreeNode("Basic Mathematics")
        Dim TreeNode3 As TreeNode = New TreeNode("Information Technology & Application")
        Dim TreeNode4 As TreeNode = New TreeNode("Principles of Management & Organisation")
        Dim TreeNode5 As TreeNode = New TreeNode("Python Programming")
        Dim TreeNode6 As TreeNode = New TreeNode("First Semester", New TreeNode() {TreeNode1, TreeNode2, TreeNode3, TreeNode4, TreeNode5})
        Dim TreeNode7 As TreeNode = New TreeNode("Business English")
        Dim TreeNode8 As TreeNode = New TreeNode("Numerical Mathematics")
        Dim TreeNode9 As TreeNode = New TreeNode("System Analysis & Design")
        Dim TreeNode10 As TreeNode = New TreeNode("C Programming")
        Dim TreeNode11 As TreeNode = New TreeNode("Operating System & Unix")
        Dim TreeNode12 As TreeNode = New TreeNode("Second Semester", New TreeNode() {TreeNode7, TreeNode8, TreeNode9, TreeNode10, TreeNode11})
        Dim TreeNode13 As TreeNode = New TreeNode("FYBCA", New TreeNode() {TreeNode6, TreeNode12})
        Dim TreeNode14 As TreeNode = New TreeNode("OPPS using C++")
        Dim TreeNode15 As TreeNode = New TreeNode("Web Designing")
        Dim TreeNode16 As TreeNode = New TreeNode("Software Engineering")
        Dim TreeNode17 As TreeNode = New TreeNode("JAVA Programming")
        Dim TreeNode18 As TreeNode = New TreeNode("Third Semester", New TreeNode() {TreeNode14, TreeNode15, TreeNode16, TreeNode17})
        Dim TreeNode19 As TreeNode = New TreeNode("Relational Database Management System")
        Dim TreeNode20 As TreeNode = New TreeNode("Digital Electronics")
        Dim TreeNode21 As TreeNode = New TreeNode("Data Structure & Algorithms")
        Dim TreeNode22 As TreeNode = New TreeNode("Introduction To Statistics")
        Dim TreeNode23 As TreeNode = New TreeNode("Fourth Semester", New TreeNode() {TreeNode19, TreeNode20, TreeNode21, TreeNode22})
        Dim TreeNode24 As TreeNode = New TreeNode("SYBCA", New TreeNode() {TreeNode18, TreeNode23})
        Dim TreeNode25 As TreeNode = New TreeNode("VB . net")
        Dim TreeNode26 As TreeNode = New TreeNode("Graphics & Multimedia")
        Dim TreeNode27 As TreeNode = New TreeNode("Computer Network")
        Dim TreeNode28 As TreeNode = New TreeNode("Business Accounting & ERP")
        Dim TreeNode29 As TreeNode = New TreeNode("Fifth Semester", New TreeNode() {TreeNode25, TreeNode26, TreeNode27, TreeNode28})
        Dim TreeNode30 As TreeNode = New TreeNode("Web Technology")
        Dim TreeNode31 As TreeNode = New TreeNode("E-Commerce")
        Dim TreeNode32 As TreeNode = New TreeNode("Project & Viva")
        Dim TreeNode33 As TreeNode = New TreeNode("Sixth Semester", New TreeNode() {TreeNode30, TreeNode31, TreeNode32})
        Dim TreeNode34 As TreeNode = New TreeNode("TYBCA", New TreeNode() {TreeNode29, TreeNode33})
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(frmSubjectDetails))
        TabControl1 = New TabControl()
        TabPage1 = New TabPage()
        SplitContainer1 = New SplitContainer()
        trvSubjects = New TreeView()
        TabPage2 = New TabPage()
        ToolStrip1 = New ToolStrip()
        ToolStripButton1 = New ToolStripButton()
        TabControl1.SuspendLayout()
        TabPage1.SuspendLayout()
        CType(SplitContainer1, ComponentModel.ISupportInitialize).BeginInit()
        SplitContainer1.Panel1.SuspendLayout()
        SplitContainer1.Panel2.SuspendLayout()
        SplitContainer1.SuspendLayout()
        ToolStrip1.SuspendLayout()
        SuspendLayout()
        ' 
        ' TabControl1
        ' 
        TabControl1.Controls.Add(TabPage1)
        TabControl1.Controls.Add(TabPage2)
        TabControl1.Dock = DockStyle.Fill
        TabControl1.Location = New Point(0, 0)
        TabControl1.Name = "TabControl1"
        TabControl1.SelectedIndex = 0
        TabControl1.Size = New Size(766, 560)
        TabControl1.TabIndex = 0
        ' 
        ' TabPage1
        ' 
        TabPage1.Controls.Add(SplitContainer1)
        TabPage1.Location = New Point(4, 38)
        TabPage1.Name = "TabPage1"
        TabPage1.Padding = New Padding(3)
        TabPage1.Size = New Size(758, 518)
        TabPage1.TabIndex = 0
        TabPage1.Text = "Core Subjects"
        TabPage1.UseVisualStyleBackColor = True
        ' 
        ' SplitContainer1
        ' 
        SplitContainer1.Dock = DockStyle.Fill
        SplitContainer1.Location = New Point(3, 3)
        SplitContainer1.Name = "SplitContainer1"
        ' 
        ' SplitContainer1.Panel1
        ' 
        SplitContainer1.Panel1.Controls.Add(trvSubjects)
        ' 
        ' SplitContainer1.Panel2
        ' 
        SplitContainer1.Panel2.Controls.Add(ToolStrip1)
        SplitContainer1.Size = New Size(752, 512)
        SplitContainer1.SplitterDistance = 250
        SplitContainer1.TabIndex = 0
        ' 
        ' trvSubjects
        ' 
        trvSubjects.Dock = DockStyle.Fill
        trvSubjects.Location = New Point(0, 0)
        trvSubjects.Name = "trvSubjects"
        TreeNode1.Name = "nCEnglish"
        TreeNode1.Text = "Communicative English"
        TreeNode2.Name = "nMath"
        TreeNode2.Text = "Basic Mathematics"
        TreeNode3.Name = "nIT"
        TreeNode3.Text = "Information Technology & Application"
        TreeNode4.Name = "nPOM"
        TreeNode4.Text = "Principles of Management & Organisation"
        TreeNode5.Name = "nPython"
        TreeNode5.Text = "Python Programming"
        TreeNode6.Name = "nSem1"
        TreeNode6.Text = "First Semester"
        TreeNode7.Name = "nBEnglish"
        TreeNode7.Text = "Business English"
        TreeNode8.Name = "nNumMath"
        TreeNode8.Text = "Numerical Mathematics"
        TreeNode9.Name = "nSAD"
        TreeNode9.Text = "System Analysis & Design"
        TreeNode10.Name = "nC"
        TreeNode10.Text = "C Programming"
        TreeNode11.Name = "nOS"
        TreeNode11.Text = "Operating System & Unix"
        TreeNode12.Name = "nSem2"
        TreeNode12.Text = "Second Semester"
        TreeNode13.Name = "nFY"
        TreeNode13.Text = "FYBCA"
        TreeNode14.Name = "nC++"
        TreeNode14.Text = "OPPS using C++"
        TreeNode15.Name = "nWD"
        TreeNode15.Text = "Web Designing"
        TreeNode16.Name = "nSE"
        TreeNode16.Text = "Software Engineering"
        TreeNode17.Name = "nJAVA"
        TreeNode17.Text = "JAVA Programming"
        TreeNode18.Name = "nSem3"
        TreeNode18.Text = "Third Semester"
        TreeNode19.Name = "nDBMS"
        TreeNode19.Text = "Relational Database Management System"
        TreeNode20.Name = "nDE"
        TreeNode20.Text = "Digital Electronics"
        TreeNode21.Name = "nDS"
        TreeNode21.Text = "Data Structure & Algorithms"
        TreeNode22.Name = "nStat"
        TreeNode22.Text = "Introduction To Statistics"
        TreeNode23.Name = "nSem4"
        TreeNode23.Text = "Fourth Semester"
        TreeNode24.Name = "nSY"
        TreeNode24.Text = "SYBCA"
        TreeNode25.Name = "nVB"
        TreeNode25.Text = "VB . net"
        TreeNode26.Name = "nGp"
        TreeNode26.Text = "Graphics & Multimedia"
        TreeNode27.Name = "nCN"
        TreeNode27.Text = "Computer Network"
        TreeNode28.Name = "nBA"
        TreeNode28.Text = "Business Accounting & ERP"
        TreeNode29.Name = "nSem5"
        TreeNode29.Text = "Fifth Semester"
        TreeNode30.Name = "nWT"
        TreeNode30.Text = "Web Technology"
        TreeNode31.Name = "nEC"
        TreeNode31.Text = "E-Commerce"
        TreeNode32.Name = "nPV"
        TreeNode32.Text = "Project & Viva"
        TreeNode33.Name = "nSem6"
        TreeNode33.Text = "Sixth Semester"
        TreeNode34.Name = "nTY"
        TreeNode34.Text = "TYBCA"
        trvSubjects.Nodes.AddRange(New TreeNode() {TreeNode13, TreeNode24, TreeNode34})
        trvSubjects.Size = New Size(250, 512)
        trvSubjects.TabIndex = 0
        ' 
        ' TabPage2
        ' 
        TabPage2.Location = New Point(4, 30)
        TabPage2.Name = "TabPage2"
        TabPage2.Padding = New Padding(3)
        TabPage2.Size = New Size(758, 526)
        TabPage2.TabIndex = 1
        TabPage2.Text = "Electives"
        TabPage2.UseVisualStyleBackColor = True
        ' 
        ' ToolStrip1
        ' 
        ToolStrip1.ImageScalingSize = New Size(20, 20)
        ToolStrip1.Items.AddRange(New ToolStripItem() {ToolStripButton1})
        ToolStrip1.Location = New Point(0, 0)
        ToolStrip1.Name = "ToolStrip1"
        ToolStrip1.Size = New Size(498, 28)
        ToolStrip1.TabIndex = 0
        ToolStrip1.Text = "ToolStrip1"
        ' 
        ' ToolStripButton1
        ' 
        ToolStripButton1.DisplayStyle = ToolStripItemDisplayStyle.Text
        ToolStripButton1.Image = CType(resources.GetObject("ToolStripButton1.Image"), Image)
        ToolStripButton1.ImageTransparentColor = Color.Magenta
        ToolStripButton1.Name = "ToolStripButton1"
        ToolStripButton1.Size = New Size(45, 25)
        ToolStripButton1.Text = "Font"
        ' 
        ' frmSubjectDetails
        ' 
        AutoScaleDimensions = New SizeF(14F, 29F)
        AutoScaleMode = AutoScaleMode.Font
        ClientSize = New Size(766, 560)
        Controls.Add(TabControl1)
        Font = New Font("Microsoft Sans Serif", 13.8F, FontStyle.Regular, GraphicsUnit.Point, CByte(0))
        Margin = New Padding(5, 4, 5, 4)
        Name = "frmSubjectDetails"
        StartPosition = FormStartPosition.CenterScreen
        Text = "Subject Details"
        TabControl1.ResumeLayout(False)
        TabPage1.ResumeLayout(False)
        SplitContainer1.Panel1.ResumeLayout(False)
        SplitContainer1.Panel2.ResumeLayout(False)
        SplitContainer1.Panel2.PerformLayout()
        CType(SplitContainer1, ComponentModel.ISupportInitialize).EndInit()
        SplitContainer1.ResumeLayout(False)
        ToolStrip1.ResumeLayout(False)
        ToolStrip1.PerformLayout()
        ResumeLayout(False)
    End Sub

    Friend WithEvents TabControl1 As TabControl
    Friend WithEvents TabPage1 As TabPage
    Friend WithEvents TabPage2 As TabPage
    Friend WithEvents SplitContainer1 As SplitContainer
    Friend WithEvents trvSubjects As TreeView
    Friend WithEvents ToolStrip1 As ToolStrip
    Friend WithEvents ToolStripButton1 As ToolStripButton
End Class
