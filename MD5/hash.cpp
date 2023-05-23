#include "hash.h"
#include "md5.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include<vector>

Hash::Hash()
{

}

std::string Hash::verificarHashMaq1(std::string senha) {
    int tentativas = 0;
    std::string hashGerada = "";
    std::string myHash = md5(senha);
    int tamanhoSenha = senha.size();
    std::string chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int charInicio = 0;
    int charFim = 15;

    std::vector<int> var(tamanhoSenha, chars.size() - 1);
    std::vector<int> aux(tamanhoSenha, 0);

    std::string valorGerado(tamanhoSenha, ' ');

    auto generatePassword = [&]() {
        valorGerado[0] = chars[charInicio + aux[0]];
        for (int i = 1; i < tamanhoSenha; i++) {
            valorGerado[i] = chars[aux[i]];
        }
    };

    auto incrementIndices = [&]() {
        for (int i = tamanhoSenha - 1; i >= 0; i--) {
            aux[i]++;
            if (i == 0 && aux[i] > (charFim - charInicio)) {
                break;
            } else if (aux[i] > var[i]) {
                aux[i] = 0;
            } else {
                break;
            }
        }
    };

    while (aux[0] <= (charFim - charInicio)) {
        generatePassword();
        //std::cout << "valor gerado = " << valorGerado << std::endl;
        hashGerada = md5(valorGerado);
        //std::cout << "hash gerado = " << hashGerada << std::endl;
        if (hashGerada == myHash) {
            std::string resultado = "ACHEI na Maq1 ! na pos [= ";
            resultado += std::to_string(tentativas);
            resultado += "] = ";
            resultado += valorGerado;
            resultado += "\n";
            return resultado;
        }
        tentativas++;
        incrementIndices();
    }

    return "n deu";
}
std::string Hash::verificarHashMaq2(std::string senha) {
    int tentativas = 0;
    std::string hashGerada = "";
    std::string myHash = md5(senha);
    int tamanhoSenha = senha.size();
    std::string chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int charInicio = 16;
    int charFim = 30;

    std::vector<int> var(tamanhoSenha, chars.size() - 1);
    std::vector<int> aux(tamanhoSenha, 0);

    std::string valorGerado(tamanhoSenha, ' ');

    auto generatePassword = [&]() {
        valorGerado[0] = chars[charInicio + aux[0]];
        for (int i = 1; i < tamanhoSenha; i++) {
            valorGerado[i] = chars[aux[i]];
        }
    };

    auto incrementIndices = [&]() {
        for (int i = tamanhoSenha - 1; i >= 0; i--) {
            aux[i]++;
            if (i == 0 && aux[i] > (charFim - charInicio)) {
                break;
            } else if (aux[i] > var[i]) {
                aux[i] = 0;
            } else {
                break;
            }
        }
    };

    while (aux[0] <= (charFim - charInicio)) {
        generatePassword();
        //std::cout << "valor gerado = " << valorGerado << std::endl;
        hashGerada = md5(valorGerado);
        //std::cout << "hash gerado = " << hashGerada << std::endl;
        if (hashGerada == myHash) {
            std::string resultado = "ACHEI na Maq2 ! na pos [= ";
            resultado += std::to_string(tentativas);
            resultado += "] = ";
            resultado += valorGerado;
            resultado += "\n";
            return resultado;
        }
        tentativas++;
        incrementIndices();
    }

    return "n deu";

}
std::string Hash::verificarHashMaq3(std::string senha) {
    int tentativas = 0;
    std::string hashGerada = "";
    std::string myHash = md5(senha);
    int tamanhoSenha = senha.size();
    std::string chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int charInicio = 31;
    int charFim = 45;

    std::vector<int> var(tamanhoSenha, chars.size() - 1);
    std::vector<int> aux(tamanhoSenha, 0);

    std::string valorGerado(tamanhoSenha, ' ');

    auto generatePassword = [&]() {
        valorGerado[0] = chars[charInicio + aux[0]];
        for (int i = 1; i < tamanhoSenha; i++) {
            valorGerado[i] = chars[aux[i]];
        }
    };

    auto incrementIndices = [&]() {
        for (int i = tamanhoSenha - 1; i >= 0; i--) {
            aux[i]++;
            if (i == 0 && aux[i] > (charFim - charInicio)) {
                break;
            } else if (aux[i] > var[i]) {
                aux[i] = 0;
            } else {
                break;
            }
        }
    };

    while (aux[0] <= (charFim - charInicio)) {
        generatePassword();
        //std::cout << "valor gerado = " << valorGerado << std::endl;
        hashGerada = md5(valorGerado);
        //std::cout << "hash gerado = " << hashGerada << std::endl;
        if (hashGerada == myHash) {
            std::string resultado = "ACHEI na Maq3 ! na pos [= ";
            resultado += std::to_string(tentativas);
            resultado += "] = ";
            resultado += valorGerado;
            resultado += "\n";
            return resultado;
        }
        tentativas++;
        incrementIndices();
    }

    return "n deu";

}
std::string Hash::verificarHashMaq4(std::string senha) {
    int tentativas = 0;
    std::string hashGerada = "";
    std::string myHash = md5(senha);
    int tamanhoSenha = senha.size();
    std::string chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int charInicio = 46;
    int charFim = 62;

    std::vector<int> var(tamanhoSenha, chars.size() - 1);
    std::vector<int> aux(tamanhoSenha, 0);

    std::string valorGerado(tamanhoSenha, ' ');

    auto generatePassword = [&]() {
        valorGerado[0] = chars[charInicio + aux[0]];
        for (int i = 1; i < tamanhoSenha; i++) {
            valorGerado[i] = chars[aux[i]];
        }
    };

    auto incrementIndices = [&]() {
        for (int i = tamanhoSenha - 1; i >= 0; i--) {
            aux[i]++;
            if (i == 0 && aux[i] > (charFim - charInicio)) {
                break;
            } else if (aux[i] > var[i]) {
                aux[i] = 0;
            } else {
                break;
            }
        }
    };

    while (aux[0] <= (charFim - charInicio)) {
        generatePassword();
        //std::cout << "valor gerado = " << valorGerado << std::endl;
        hashGerada = md5(valorGerado);
        //std::cout << "hash gerado = " << hashGerada << std::endl;
        if (hashGerada == myHash) {
            std::string resultado = "ACHEI na Maq4 ! na pos [= ";
            resultado += std::to_string(tentativas);
            resultado += "] = ";
            resultado += valorGerado;
            resultado += "\n";
            return resultado;
        }
        tentativas++;
        incrementIndices();
    }

    return "n deu";

}
