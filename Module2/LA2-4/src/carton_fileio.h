#pragma once

#include <array>
#include <string>
#include "carton.h"

const int kMaxArraySize = 20;

std::string ReadDataFormatFile(std::string filename, 
            std::array<Carton, kMaxArraySize>& cartons,
            int& rec_num);

void WriteDataToFile(std::string filename,
            const std::array<Carton, kMaxArraySize>& cartons,
            int rec_num);

