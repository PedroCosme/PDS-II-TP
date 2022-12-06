/**
 * @file utilities.hpp
 * @brief Classe principal com a lógica de utilities
 * @version 1.0
 * @date 2022-12-03
 * @details
 * @copyright Copyright (c) 2022
 *
 */

#ifndef _UTILITIES_HPP_
#define _UTILITIES_HPP_

#include <string>
#include <iostream>

/**
 * @brief Troca letras maiúsculas para minúsculas
 * @details Troca letras maiúsculas para minúsculas
 *
 * @param in Palavra digitada
 * @return std::string
 */
std::string toLower(std::string in);

/**
 * @brief Troca letras minúsculas para maiúsculas
 *
 * @param in Palavra digitada
 * @return std::string
 */
std::string toUpper(std::string in);

/**
 * @brief gera um número aleatório baseado em um máximo e um minímo
 *
 * @param minRange
 * @param maxRange
 * @return unsigned int
 */
unsigned int genNum(uint minRange, uint maxRange);

#endif
