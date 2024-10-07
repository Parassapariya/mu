<?php
$a = '32';
echo gettype($a);
echo "<hr>";
settype($a,"integer");
echo gettype($a);
echo "<br><br><br>";

$b = 32;
echo gettype($a);
echo "<hr>";
settype($b,"string");
echo gettype($b);
echo "<br><br><br>";

$c = true;
echo gettype($c);
settype($c,"integer");
echo "<hr>";
echo gettype($b);
?>