<html>
	<head>
		<title>
			Home Page
		</title>
		<style>
			*{
				margin:0;
				padding:0;
			}
			.container{
				background-color:white;
				height:100vh;
				width:100vw;
			}
			.head{
				background-color:black;
				height:10%;
				width:100%;
				font-color:white;
			}
			.tail{
				background-color:black;
				height:10%;
				width:100%;
			}
			.main{
				background-color:grey;
				height:80%;
				width:100%;
			}
			li{
				list-style:none;
				float:right;
			}
			li a{
				display:block;
				color:white;
				text-align:center;
				padding:3.5vh 2vw;
				text-decoration:none;
			}
			td{
				height:50%;
				width:25%;
			}
			.img1{
				background-image:url("img1.jpg");
				background-repeat:no-repeat;
				background-size:cover;
			}
			.img2{
				background-image:url("img2.jpg");
				background-repeat:no-repeat;
				background-size:cover;
			}
		</style>
	</head>
	<body>
		<div class="container">
			<div class="head">
			<ul>
				<li><a href="home.php">HOME</a></li>
				<li><a href="insert.php">INSERT</a></li>
				<li><a href="show.php">SHOW</a></li>
			</ul>
			</div>
			<div class="main">
				<table height="100%" width="100%" cellspacing="5px">
					<tr>
						<td></td>
						<td class="img1"></td>
						<td style="padding:2vw 2vh 1vw 2vh"><p><b>PHP is a server side scripting language that is embedded in HTML. It is used to manage dynamic content, databases, session tracking, even build entire e-commerce sites. It is integrated with a number of popular databases, including MySQL, PostgreSQL, Oracle, Sybase, Informix, and Microsoft SQL Server.</b></p></td>
						<td></td>
					</tr>
					<tr>
						<td></td>
						<td  style="padding:2vw 1vh 2vw 2vh"><p><b>MySQL is a relational database management system based on SQL – Structured Query Language. The application is used for a wide range of purposes, including data warehousing, e-commerce, and logging applications. The most common use for mySQL however, is for the purpose of a web database.</b></p></td>
						<td class="img2"></td>
						<td></td>
					</tr>
				</table>
			</div>
			<div class="tail">
				<center><p><font color="white">Content on this website is owned, by the Ashish Kumar Singh</p>
				<p>Site is technically designed, hosted and maintained by Myself</p>
				<p>Powered By — Myself</font></p></center>
			</div>
		</div>
	</body>
</html>