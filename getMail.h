#ifndef GET_MAIL
#define GET_MAIL

#include <vector>
#include <string>
#include <io.h>

//��ȡ��·���µ������ļ�  
void getFiles(std::string path, std::vector<std::string>& files); 
//ֻ��ȡĳ����·���µĵ�ǰ�ļ��� e.g. C:/mail
void getJustCurrentDir(std::string path, std::vector<std::string>& files) ;
//ֻ��ȡĳ����·���µĵ�ǰ�ļ���
void getJustCurrentFile(std::string path, std::vector<std::string>& files);

#endif