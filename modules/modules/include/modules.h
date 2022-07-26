#pragma once
#include <filesystem>
#include <fstream>
#include "projectmanager.h"

void createModule(int argc, char* argv[], const std::filesystem::path& current_dir);
void deleteModule(int argc, char* argv[], const std::filesystem::path& current_dir);