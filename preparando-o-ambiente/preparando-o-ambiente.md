# Ambiente de Desenvolvimento

## 🖥️ IDE e Compilador
Nesta disciplina, sugerimos utilizar a IDE **Visual Studio Code** para codificação e o compilador **GCC** para compilar e rodar programas via linha de comando.

### 🔧 Terminais recomendados:
- **Windows**: PowerShell
- **Linux**: Bash (Ubuntu nativo ou Ubuntu via Windows Subsystem for Linux - WSL)

---
## 📥 Instalação do VS Code
1. Faça o download do instalador apropriado para seu sistema operacional no site oficial do [Visual Studio Code](https://code.visualstudio.com/).
2. Após o download, siga os passos de instalação.

> ⚠️ **Recomendação:** Utilize o VS Code apenas como editor de código-fonte. A instalação e uso de extensões é opcional, mas busque não depender delas. Ser curioso é essencial, mas é importante saber programar sem auxílios externos.

---
## 🖥️ Abrindo um Terminal

### 📌 No Linux (Ubuntu e outras distribuições)
O shell é acessado por padrão. Basta executar o programa **Terminal**.

### 📌 No Windows
- É possível utilizar o **Windows Subsystem for Linux (WSL)** para simular um terminal Ubuntu. Para isso, siga as [instruções de instalação](https://docs.microsoft.com/pt-br/windows/wsl/install).
- Também é possível utilizar o **PowerShell**, que já vem instalado no Windows.

---
## ⚙️ Preparação do Terminal
Para compilar e rodar códigos em C no VS Code, sugerimos utilizar o terminal integrado da IDE junto com o compilador **GCC**.

### 📥 Instalação do GCC

#### Ubuntu/Linux (incluindo WSL)
No terminal, execute o seguinte comando:
```bash
sudo apt install gcc
```

#### Windows
Para instalar o GCC no Windows, a melhor opção é utilizar o **MinGW**. Um tutorial detalhado pode ser encontrado [aqui](https://phoenixnap.com/kb/install-gcc-windows) (qualquer problema ou dificuldade avisar no grupo).

---
## 🚀 Como Compilar e Executar seu Código

### 📌 Compilando
No terminal, utilize o seguinte comando:
```bash
gcc -Wall -o nome_executavel codigo_fonte.c
```
> 💡 Caso esteja usando PowerShell ou WSL no Windows, a extensão `.exe` será adicionada automaticamente ao `nome_executavel`.

### 📌 Executando

#### No Linux:
```bash
./nome_executavel
```

#### No Windows PowerShell:
```powershell
.\nome_executavel.exe
```

