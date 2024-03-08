#ifndef TEXTBASEDGAMEENG_FILESYSTEM_H
#define TEXTBASEDGAMEENG_FILESYSTEM_H

void FILE_NEW(std::string filename);
void FILE_DELETE(std::string filename);
void FILE_CLEAR(std::string filename);
bool FILE_CHECK(std::string filename);
void FILE_STRING(std::string filename, std::string data);
void FILE_INT(std::string filename, int data);
void FILE_FLOAT(std::string filename, float data);
void FILE_DOUBLE(std::string filename, double data);
void FILE_BOOL(std::string filename, bool data);
void FILE_CHAR(std::string filename, char data);
void FILE_EXTRACT_STRING(std::string filename, int line, std::string &data);
void FILE_EXTRACT_INT(std::string filename, int line, int &data);
void FILE_EXTRACT_FLOAT(std::string filename, int line, float &data);
void FILE_EXTRACT_DOUBLE(std::string filename, int line, double &data);
void FILE_EXTRACT_BOOL(std::string filename, int line, bool &data);

#endif //TEXTBASEDGAMEENG_FILESYSTEM_H
