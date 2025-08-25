---

  `README.md`

````markdown
# 🎵 RickRolled-in-C
Rickroll your friends using a C program disguised as a calculator.  
Looks like it’s adding numbers… but instead you’ll get Rickrolled in ASCII art. 😅

---

## ⚠️ Requirements

You **must have a C compiler** installed (like **GCC**) to run this program.  
If you don’t, follow the [installation steps](#-installing-gcc--compiler).  

👉 Alternatives: You can also use **Clang** or **MinGW** as compilers.  

---

## 🚀 How to Run in VS Code

### 1️⃣ Clone this repository
```bash
git clone https://github.com/Deniish/RickRolled-in-C.git
cd RickRolled-in-C
````

### 2️⃣ Open in VS Code

```bash
code .
```

### 3️⃣ Compile the program

With **GCC**:

```bash
gcc rickrolled.c -o rickrolled
```

With **Clang**:

```bash
clang rickrolled.c -o rickrolled
```

With **MinGW (Windows)**:

```bash
mingw32-gcc rickrolled.c -o rickrolled.exe
```

### 4️⃣ Run the program

Linux / macOS:

```bash
./rickrolled
```

Windows:

```bash
rickrolled.exe
```

---

## 🛠 Installing GCC / Compiler

### 🔹 Windows (MinGW)

1. Download & install [MinGW](https://sourceforge.net/projects/mingw/).
2. Add `C:\MinGW\bin` to your **PATH** environment variable.
3. Verify installation:

   ```bash
   gcc --version
   ```

### 🔹 Linux (Ubuntu/Debian)

```bash
sudo apt update
sudo apt install build-essential -y
gcc --version
```

### 🔹 macOS

Install **Xcode Command Line Tools**:

```bash
xcode-select --install
```

Or with **Homebrew**:

```bash
brew install gcc
```

---

## ✨ Example Output

```
Enter first number: 5
Enter second number: 10
👉 Please maximize your terminal for best results!

Calculating the sum of 5 and 10.....
Surprise! Here's your result:

🎵 Never gonna give you up... (in ASCII) 🎵
```

---

💡 Pro tip: Share this with your friends who think they’re just running a “calculator” 😉

```

---

