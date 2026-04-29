# Uporabimo uradno GCC sliko, ker gre za C++ projekt.
FROM gcc:13

# Nastavimo delovno mapo znotraj Docker zabojnika.
WORKDIR /app

# Kopiramo glavno C++ datoteko v Docker image.
COPY main.cpp .

# Prevedemo program.
RUN g++ -std=c++17 -Wall -Wextra -o app main.cpp

# Ob zagonu zabojnika se zažene program.
CMD ["./app"]
