import subprocess

# Ouvrir le fichier généré par votre script Python
with open('test5.txt', 'r') as f:
    for line in f:
        # Exécuter la commande et récupérer le résultat
        result = subprocess.run(line.strip() + " | ./checker_linux $ARG", shell=True, capture_output=True, text=True).stdout.strip()
        
        # Vérifier si le résultat est 'KO'
        if result == "KO":
            print(f"La séquence qui a échoué est : {line.strip()}")
