#include <iostream>
#include "hash.h"
#include <stdio.h>
#include <mpi.h>
#include <chrono>
#include <thread>

using std::cout; using std::endl;

int main(int argc, char** argv)
{
    MPI_Init(&argc, &argv);

    // Obter o número total de processos e o identificador do processo
    int numProcesses, rank;
    MPI_Comm_size(MPI_COMM_WORLD, &numProcesses);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    Hash aux;
    std::string senha = "ffff";



    if (rank == 0) {
        std::cout<<"Seu hash(descoberto na vm1):"<<aux.verificarHashMaq1(senha)<<endl;

        } else if (rank == 1) {
            std::cout<<"Seu hash(descoberto na vm2):"<<aux.verificarHashMaq2(senha)<<endl;


        } else if (rank == 2) {
            std::cout<<"Seu hash(descoberto na vm3):"<<aux.verificarHashMaq3(senha)<<endl;


        } else if (rank == 3) {
            std::cout<<"Seu hash(descoberto na vm4):"<<aux.verificarHashMaq4(senha)<<endl;

        }

        // Finalizar o ambiente MPI
        MPI_Finalize();


 }

