/*
 * Reader.cpp
 *
 *  Created on: 7 Aug 2022
 *      Author: aedas
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include "CSVReader.h"

CSVReader::CSVReader() {
	// TODO Auto-generated constructor stub
	data = {};
}

CSVReader::~CSVReader() {
	// TODO Auto-generated destructor stub
}

int CSVReader::read(std::string path) {
	std::string line;
	std::ifstream target (path);
	int i = 0;
	if (target.is_open()) {
		while (std::getline(target, line) )
		    {
				CSVReader::tokenize(line);
		    	i++;
		    }
		target.close();
		return 0;
	}
	return 1;
}

int CSVReader::tokenize(std::string line) {
	std::string word;
	std::stringstream target (line);
	std::vector<std::string> row = {};
	while (std::getline(target, word, ',')) {
		row.push_back(word);
	}
	data.push_back(row);
	row.clear();
	return 0;
}

