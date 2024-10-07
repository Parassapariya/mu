<html>

<head>
    <title>sort array using form</title>
</head>

<body>
    <form method="post">
        <h2>please enter number(comma sqprated...)</h2>
        <input type="text" name="sort" require><br><br>
        <input type="submit" value="submit">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        //code of implord and explord using sort array of input textbox
        $number = $_POST['sort'];
        $array = explode(',', $number);
        sort($array);
        echo "sorted array:";
        echo "<p>" . implode(',', $array) . "</p>";
    }
    ?>
</body>

</html>