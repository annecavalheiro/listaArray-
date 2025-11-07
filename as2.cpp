# Calculadora simples em Python

print("=== Calculadora Simples ===")

# Lê dois números do usuário
num1 = float(input("Digite o primeiro número: "))
num2 = float(input("Digite o segundo número: "))

# Mostra as opções
print("\nEscolha a operação:")
print("1 - Soma")
print("2 - Subtração")
print("3 - Multiplicação")
print("4 - Divisão")

# Lê a escolha
opcao = input("Digite o número da operação: ")

# Faz o cálculo de acordo com a escolha
if opcao == "1":
    resultado = num1 + num2
    print(f"\nResultado: {resultado}")
elif opcao == "2":
    resultado = num1 - num2
    print(f"\nResultado: {resultado}")
elif opcao == "3":
    resultado = num1 * num2
    print(f"\nResultado: {resultado}")
elif opcao == "4":
    if num2 != 0:
        resultado = num1 / num2
        print(f"\nResultado: {resultado}")
    else:
        print("\nErro: divisão por zero!")
else:
    print("\nOpção inválida 😅")

print("\n=== Fim do programa ===")
