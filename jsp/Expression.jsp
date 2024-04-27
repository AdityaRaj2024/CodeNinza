<html>
<head>
<title>JSP Expression</title>
</head>
<body bgcolor="aqua">
<h2>Simple JSP Expression</h2>
<ul>
<li>Session id:<%=session.getId()%></li>
<li>Creation time:<%=new java.util.Date(session.getCreationTime())%></li>
<li>Time of last access :"<%=new java.util.Date(session.getLastAccessedTime())%></li>
</ul>
</body>
</html>