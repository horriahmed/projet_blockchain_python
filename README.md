# projet_blockchain_python

## Exemple d'utilisation du composant Hachage:

```
# python3.7
>>> from component_Hachage import component_Hachage
>>> h=component_Hachage()
>>> h.SHA256("abc")
'ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad'
>>>
```
dans le cas ou la chaine donnée en entrée est vide :

```
# python3.7
>>> from component_Hachage import component_Hachage
>>> h=component_Hachage()
>>> h.SHA256("")
ERROR input is empty
''
>>>
```
fonction de verification :

```
# python3.7
>>> from component_Hachage import component_Hachage
>>> h=component_Hachage()
>>> h.SHA256("abc")
>>> h.checkValidity("abc","ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad")
True
>>> h.checkValidity("ab","ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad")
False
>>>
```











