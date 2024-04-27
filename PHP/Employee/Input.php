<html>
	<head>
		<title>User</title>
	</head>
	<body>
		<center>
			<form method="POST">
			<table border="2px" height="200px" width="200px">
				<tr>
					<td colspan="2">Employee's details</td>
				</tr>
				<tr>
					<td>NAME:</td>
					<td><input type="text" name="name" required></td>
				</tr>
				<!--<tr>
					<td>ID:</td>
					<td><input type="number" name="id" required></td>
				</tr>-->
				<tr>
					<td>POST:</td>
					<td><input type="text" name="post" required></td>
				</tr>
				<tr>
					<td>EMAIL:</td>
					<td><input type="email" name="email" required></td>
				</tr>
				<tr>
					<td>SALARY:</td>
					<td><input type="number" name="salary" required></td>
				</tr>
				<tr>
					<td colspan="2"><input type="submit" name="submit" value="addUser"></td>
				</tr>
			</table>
		</form>
		</center>
	</body>
</html>