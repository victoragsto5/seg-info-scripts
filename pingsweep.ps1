param($p1)
if (!$p1){
    echo "Ping Sweep"
    echo "Exemplo de uso: .\pingsweep.ps1 127.0.0.1"
} else {
foreach($ip in 1..254){
try {$resp = ping -n 1 "$p1.$ip" | Select-String "bytes=32"
$resp.Line.split(' ')[2] -replace ":",""
} catch{}
}
}