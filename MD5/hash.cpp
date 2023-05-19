#include "hash.h"
#include "md5.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>

Hash::Hash()
{

}

std::string Hash::verificarHashMaq1(std::string senha){
    int tentativas = 0;
    std::string hashGerada = ""; // hash 2f53ajd4ad8ad5
    std::string myHash = md5(senha);

    int tamanhoSenha = senha.size();   //pega quantos digitos
    std::string mySenhaTratada = "";
    int aux = 1;

    char chars[] = {'0','1','2','3','4','5','6','7','8','9',
                 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int tamanho = 62; // alfabeto + num
    for (int pos1 = 0; pos1 < 15; pos1++) {
        for (int pos2 = 0; pos2 < tamanho; pos2++) {
            for (int pos3 = 0; pos3 < tamanho; pos3++) {
                for (int pos4 = 0; pos4 < tamanho; pos4++) {
                    /*for (int pos5 = 0; pos5 < tamanho; pos5++) {
                        for (int pos6 = 0; pos6 < tamanho; pos6++) {
                            for (int pos7 = 0; pos7 < tamanho; pos7++) {
                                for (int pos8 = 0; pos8 < tamanho; pos8++) {
                                    for(int pos9 = 0; pos9 < tamanho; pos9++){
                                        for(int pos10 = 0; pos10 < tamanho; pos10++){
                                            for(int pos11 = 0; pos11 < tamanho; pos11++){
                                                for(int pos12 = 0; pos12 < tamanho; pos12++){
                                                    for(int pos13 = 0; pos13 < tamanho; pos13++){
                                                        for(int pos14 = 0; pos14 < tamanho; pos14++){
                                                            for(int pos15 = 0; pos15 < tamanho; pos15++){
                                                                for(int pos16 = 0;pos16 < tamanho; pos16++){*/
                                                                    std::string valorGerado = "";
                                                                    valorGerado = valorGerado + chars[pos1] + chars[pos2] + chars[pos3] + chars[pos4] ;//+ chars[pos5] + chars[pos6] + chars[pos7] + chars[pos8] + chars[pos9] + chars[pos10] + chars[pos11]+ chars[pos12] + chars[pos13] + chars[pos14] + chars[pos15] + chars[pos16];
                                                                    //std::cout <<"valor gerado = "<<valorGerado<<std::endl;

                                                                    int indice = 0;
                                                                    if (indice >= 0 && indice < valorGerado.length()) {
                                                                        valorGerado.erase(indice, 4 - tamanhoSenha);
                                                                    hashGerada = md5(valorGerado);

                                                                    //std::cout <<"hash gerado = "<<hashGerada<<std::endl;
                                                                    if (hashGerada == myHash ) {
                                                                        std::string resultado = "ACHEI ! na pos [= " ;
                                                                        resultado += std::to_string(tentativas);
                                                                        resultado += "] = ";
                                                                        resultado += valorGerado;
                                                                        resultado += "\n";
                                                                        return resultado ;
                                                                    }
                                                                    tentativas++;
                                                                }

                                                           }

                                                       }

                                                   //}
                                               //}
                                           //}
                                       //}
                                    //}
                                //}
                            //}
                       // }
                   // }
                //}
            //}
        //}
    }
}
    return "n deu";
}
std::string Hash::verificarHashMaq2(std::string senha){
    int tentativas = 0;
    std::string hashGerada = ""; // hash 2f53ajd4ad8ad5
    std::string myHash = md5(senha);

    int tamanhoSenha = senha.size();   //pega quantos digitos
    std::string mySenhaTratada = "";

    char chars[] = {'0','1','2','3','4','5','6','7','8','9',
                 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int tamanho = 62; // alfabeto + num
    for (int pos1 = 15; pos1 < 30; pos1++) {
        for (int pos2 = 0; pos2 < tamanho; pos2++) {
            for (int pos3 = 0; pos3 < tamanho; pos3++) {
                for (int pos4 = 0; pos4 < tamanho; pos4++) {
                    /*for (int pos5 = 0; pos5 < tamanho; pos5++) {
                        for (int pos6 = 0; pos6 < tamanho; pos6++) {
                            for (int pos7 = 0; pos7 < tamanho; pos7++) {
                                for (int pos8 = 0; pos8 < tamanho; pos8++) {
                                    for(int pos9 = 0; pos9 < tamanho; pos9++){
                                        for(int pos10 = 0; pos10 < tamanho; pos10++){
                                            for(int pos11 = 0; pos11 < tamanho; pos11++){
                                                for(int pos12 = 0; pos12 < tamanho; pos12++){
                                                    for(int pos13 = 0; pos13 < tamanho; pos13++){
                                                        for(int pos14 = 0; pos14 < tamanho; pos14++){
                                                            for(int pos15 = 0; pos15 < tamanho; pos15++){
                                                                for(int pos16 = 0;pos16 < tamanho; pos16++){*/
                                                                    std::string valorGerado = "";
                                                                    valorGerado = valorGerado + chars[pos1] + chars[pos2] + chars[pos3] + chars[pos4] ;//+ chars[pos5] + chars[pos6] + chars[pos7] + chars[pos8] + chars[pos9] + chars[pos10] + chars[pos11]+ chars[pos12] + chars[pos13] + chars[pos14] + chars[pos15] + chars[pos16];
                                                                    //std::cout <<"valor gerado = "<<valorGerado<<std::endl;

                                                                    int indice = 0;
                                                                    if (indice >= 0 && indice < valorGerado.length()) {
                                                                        valorGerado.erase(indice, 4 - tamanhoSenha);
                                                                    hashGerada = md5(valorGerado);

                                                                    //std::cout <<"hash gerado = "<<hashGerada<<std::endl;
                                                                    if (hashGerada == myHash ) {
                                                                        std::string resultado = "ACHEI ! na pos [= " ;
                                                                        resultado += std::to_string(tentativas);
                                                                        resultado += "] = ";
                                                                        resultado += valorGerado;
                                                                        resultado += "\n";
                                                                        return resultado ;
                                                                    }
                                                                    tentativas++;
                                                               // }


                                                                /*}
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }*/
                    }
                }
            }
        }
    }
    return "n deu";
}
std::string Hash::verificarHashMaq3(std::string senha){
    int tentativas = 0;
    std::string hashGerada = ""; // hash 2f53ajd4ad8ad5
    std::string myHash = md5(senha);

    int tamanhoSenha = senha.size();   //pega quantos digitos
    std::string mySenhaTratada = "";


    char chars[] = {'0','1','2','3','4','5','6','7','8','9',
                 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int tamanho = 62; // alfabeto + num
    for (int pos1 = 30; pos1 < 45; pos1++) {
        for (int pos2 = 0; pos2 < tamanho; pos2++) {
            for (int pos3 = 0; pos3 < tamanho; pos3++) {
                for (int pos4 = 0; pos4 < tamanho; pos4++) {
                    /*for (int pos5 = 0; pos5 < tamanho; pos5++) {
                        for (int pos6 = 0; pos6 < tamanho; pos6++) {
                            for (int pos7 = 0; pos7 < tamanho; pos7++) {
                                for (int pos8 = 0; pos8 < tamanho; pos8++) {
                                    for(int pos9 = 0; pos9 < tamanho; pos9++){
                                        for(int pos10 = 0; pos10 < tamanho; pos10++){
                                            for(int pos11 = 0; pos11 < tamanho; pos11++){
                                                for(int pos12 = 0; pos12 < tamanho; pos12++){
                                                    for(int pos13 = 0; pos13 < tamanho; pos13++){
                                                        for(int pos14 = 0; pos14 < tamanho; pos14++){
                                                            for(int pos15 = 0; pos15 < tamanho; pos15++){
                                                                for(int pos16 = 0; pos16 < tamanho; pos16++){*/
                                                                    std::string valorGerado = "";
                                                                    valorGerado = valorGerado + chars[pos1] + chars[pos2] + chars[pos3] + chars[pos4] ;//+ chars[pos5] + chars[pos6] + chars[pos7] + chars[pos8] + chars[pos9] + chars[pos10] + chars[pos11]+ chars[pos12] + chars[pos13] + chars[pos14] + chars[pos15] + chars[pos16];
                                                                    //std::cout <<"valor gerado = "<<valorGerado<<std::endl;

                                                                    int indice = 0;
                                                                    if (indice >= 0 && indice < valorGerado.length()) {
                                                                        valorGerado.erase(indice, 4 - tamanhoSenha);
                                                                    hashGerada = md5(valorGerado);

                                                                    //std::cout <<"hash gerado = "<<hashGerada<<std::endl;
                                                                    if (hashGerada == myHash ) {
                                                                        std::string resultado = "ACHEI ! na pos [= " ;
                                                                        resultado += std::to_string(tentativas);
                                                                        resultado += "] = ";
                                                                        resultado += valorGerado;
                                                                        resultado += "\n";
                                                                        return resultado ;
                                                                    }
                                                                    tentativas++;

                                                                /*}
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }*/
                    //}
                }
            }
        }
    } 
}
    return "n deu";
}
std::string Hash::verificarHashMaq4(std::string senha){
    int tentativas = 0;
    std::string hashGerada = ""; // hash 2f53ajd4ad8ad5
    std::string myHash = md5(senha);



    int tamanhoSenha = senha.size();   //pega quantos digitos
    std::string mySenhaTratada = "";


    char chars[] = {'0','1','2','3','4','5','6','7','8','9',
                 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int tamanho = 62; // alfabeto + num
    for (int pos1 = 45; pos1 < tamanho; pos1++) {
        for (int pos2 = 0; pos2 < tamanho; pos2++) {
            for (int pos3 = 0; pos3 < tamanho; pos3++) {
                for (int pos4 = 0; pos4 < tamanho; pos4++) {
                    /*for (int pos5 = 0; pos5 < tamanho; pos5++) {
                        for (int pos6 = 0; pos6 < tamanho; pos6++) {
                            for (int pos7 = 0; pos7 < tamanho; pos7++) {
                                for (int pos8 = 0; pos8 < tamanho; pos8++) {
                                    for(int pos9 = 0; pos9 < tamanho; pos9++){
                                        for(int pos10 = 0; pos10 < tamanho; pos10++){
                                            for(int pos11 = 0; pos11 < tamanho; pos11++){
                                                for(int pos12 = 0; pos12 < tamanho; pos12++){
                                                    for(int pos13 = 0; pos13 < tamanho; pos13++){
                                                        for(int pos14 = 0; pos14 < tamanho; pos14++){
                                                            for(int pos15 = 0; pos15 < tamanho; pos15++){
                                                                for(int pos16 = 0; pos16 < tamanho; pos16++){*/
                                                                    std::string valorGerado = "";
                                                                    valorGerado = valorGerado + chars[pos1] + chars[pos2] + chars[pos3] + chars[pos4];// + chars[pos5] + chars[pos6] + chars[pos7] + chars[pos8] + chars[pos9] + chars[pos10] + chars[pos11]+ chars[pos12] + chars[pos13] + chars[pos14] + chars[pos15] + chars[pos16];
                                                                    //std::cout <<"valor gerado = "<<valorGerado<<std::endl;

                                                                    int indice = 0;
                                                                    if (indice >= 0 && indice < valorGerado.length()) {
                                                                        valorGerado.erase(indice, 4 - tamanhoSenha);
                                                                    hashGerada = md5(valorGerado);

                                                                    //std::cout <<"hash gerado = "<<hashGerada<<std::endl;
                                                                    if (hashGerada == myHash ) {
                                                                        std::string resultado = "ACHEI ! na pos [= " ;
                                                                        resultado += std::to_string(tentativas);
                                                                        resultado += "] = ";
                                                                        resultado += valorGerado;
                                                                        resultado += "\n";
                                                                        return resultado ;
                                                                    }
                                                                    tentativas++;
                                                                }

                                                                /*}
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }*/
                }
            }
        }
    }
    return "n deu";
}


