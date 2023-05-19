#include <iostream>
#include <mpi.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    int informacao;

    if (rank == 0) {
        // Solicitar a informação ao usuário na primeira máquina
        std::cout << "Digite uma informação: ";
        std::cin >> informacao;
        // Enviar a informação para as outras máquinas
        for (int dest = 1; dest < size; dest++) {
            MPI_Send(&informacao, 1, MPI_INT, dest, 0, MPI_COMM_WORLD);
        }
    } else {
        // Receber a informação nas outras máquinas
        MPI_Recv(&informacao, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    }

    // Imprimir a informação em todas as máquinas
    std::cout << "Informação recebida na máquina " << rank << ": " << informacao << std::endl;

    MPI_Finalize();
    return 0;
}

