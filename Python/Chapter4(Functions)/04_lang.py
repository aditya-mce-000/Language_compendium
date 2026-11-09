def greet(lang):
    if lang == 'german':
        return 'Hola'
    elif lang == 'french':
        return 'Bonjour'
    else:
        return 'Hello'

print(greet('german'), 'Glenn')
print(greet('English'), 'Michael')
print(greet('french'), 'Sally')
