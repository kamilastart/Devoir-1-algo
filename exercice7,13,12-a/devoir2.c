import random
from math import gcd

# -------------------------------
# OUTILS MATHÉMATIQUES
# -------------------------------

def est_premier(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def generer_premier(min_val=100, max_val=300):
    while True:
        p = random.randint(min_val, max_val)
        if est_premier(p):
            return p

def inverse_modulaire(e, phi):
    for d in range(1, phi):
        if (e * d) % phi == 1:
            return d
    return None

# -------------------------------
# GÉNÉRATION DES CLÉS RSA
# -------------------------------

def generer_cles_rsa():
    p = generer_premier()
    q = generer_premier()
    while q == p:
        q = generer_premier()

    n = p * q
    phi = (p - 1) * (q - 1)

    e = random.randint(2, phi - 1)
    while gcd(e, phi) != 1:
        e = random.randint(2, phi - 1)

    d = inverse_modulaire(e, phi)

    return (e, n), (d, n)

# -------------------------------
# CHIFFREMENT / DÉCHIFFREMENT
# -------------------------------

def chiffrer_rsa(message, cle_publique):
    e, n = cle_publique
    return pow(message, e, n)

def dechiffrer_rsa(message_chiffre, cle_privee):
    d, n = cle_privee
    return pow(message_chiffre, d, n)

# -------------------------------
# TEST
# -------------------------------

cle_publique, cle_privee = generer_cles_rsa()

message = 42
message_chiffre = chiffrer_rsa(message, cle_publique)
message_dechiffre = dechiffrer_rsa(message_chiffre, cle_privee)

print("Message :", message)
print("Chiffré :", message_chiffre)
print("Déchiffré :", message_dechiffre)
