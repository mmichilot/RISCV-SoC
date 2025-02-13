#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

#include <verilated.h>

#include "testbench.h"
#include "Vtb_soc.h"
#include "verilated_fst_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    auto tb = std::unique_ptr<TESTBENCH<Vtb_soc>>(new TESTBENCH<Vtb_soc>());


    // Parse arguments
    // Adapted from https://github.com/chipsalliance/Cores-VeeR-EL2/blob/main/testbench/test_tb_top.cpp
    uint32_t mem_mailbox = 0x02020000;
    std::string firmware_file = "";

    for (int i = 1; i < argc; i++) {
        char* arg = argv[i];

        if ((strcmp(arg, "--mailbox") == 0) && ((i + 1) < argc)) {
            mem_mailbox = std::stoi(argv[i + 1], NULL, 16);
        }

        if ((strcmp(arg, "--firmware") == 0 && ((i + 1) < argc))) {
            firmware_file = argv[i + 1];
        }
    }

    if (firmware_file.empty()) {
        std::cerr << "Please specify a firmware file." << std::endl;
        return 1;
    }

    tb->m_soc->mem_mailbox = mem_mailbox;
    tb->m_soc->firmware_file = firmware_file;

    tb->trace("trace.fst");

    tb->reset();

    while (!tb->done()) {
        tb->tick();
    };

    return 0;
}
