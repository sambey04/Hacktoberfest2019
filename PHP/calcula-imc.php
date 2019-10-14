<!DOCTYPE html>
<html lang="PT-BR">
<head>
    <meta charset="UTF-8">
    <title>Meus estudos</title>
    <link rel="stylesheet" type="text/css" href="assets/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="assets/css/style.css">
</head>
<body>


    <div class="content">
        <div class="col-md-12">

            <h2 class="h2 span">CALCULADORA IMC</h2>


            <div class="container">

                <?php

                $peso = $_POST["peso"];
                $altura = $_POST["altura"];

                $massa = $peso / ($altura*$altura);
                $massa = round($massa);

                ?>

                <section class="text-center" style="margin: 30px;">

                <?php    
 
                if($massa < 18.5){
                    echo $mensagem = "<span class='alert alert-success text-center'>Abaixo do peso.</span>";
                }elseif($massa >= 18.5 && $massa <= 24.9){
                    echo $mensagem = "<span class='alert alert-success text-center'>Peso Normal</span>";
                }elseif($massa >= 25 && $massa <= 29.9){
                    echo $mensagem = "<span class='alert alert-danger text-center'>Sobrepeso</span>";
                }elseif($massa >= 30 && $massa <= 34.99){
                    echo $mensagem = "<span class='alert alert-danger text-center'>Obesidade I</span>";
                }elseif($massa >= 35 && $massa <= 39.9){
                    echo $mensagem = "<span class='alert alert-danger text-center'>Obesidade II</span>";
                }

                ?>

                </section>
            </div>
        </body>
        </html>