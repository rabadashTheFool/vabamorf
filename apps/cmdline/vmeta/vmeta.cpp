#include "vmeta.h"

int Tmain(int argc, FSTCHAR** argv, FSTCHAR**envp)
    {
    //return MainTemplate<VMETA>(argc, argv, envp, NULL);
    return MainTemplate<SPLIT_TOKENS>(argc, argv, envp, NULL);
    }
