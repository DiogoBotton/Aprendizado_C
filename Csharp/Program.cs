// Quando código atualizado, necessário compilar com "dotnet run" e, após isso, apertar F5
// .vscode/launch.json com configuração para aceitar entrada de dados
Console.WriteLine("Hello, World!");

// Array de nomes
string[] nomes = new string[5];

// For para adicionar nomes em cada índice do array
// nomes.Length retorna comprimento do array, no caso, 5
for (int i = 0; i < nomes.Length; i++)
{
    string nome = Console.ReadLine();

    if(!string.IsNullOrEmpty(nome))
        nomes[i] = nome;
}

for (int i = 0; i < nomes.Length; i++)
{
    Console.WriteLine($"Nome {i+1}: {nomes[i]}.");
}

Console.WriteLine();
Console.WriteLine("Fim do programa.");