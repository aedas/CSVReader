/*
 * Reader.h
 *
 *  Created on: 7 Aug 2022
 *      Author: aedas
 */

#include <vector>
#include <string>


#ifndef CSVREADER_H_
#define CSVREADER_H_


class CSVReader {
public:
	CSVReader();
	virtual ~CSVReader();
	int read(std::string path);
	std::vector<std::vector<std::string>> getData();
	std::vector<std::vector<std::string>> data;
private:
	int tokenize(std::string line);
};

#endif /* CSVREADER_H_ */
