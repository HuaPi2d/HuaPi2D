#include "filepro.h"

void createDirectoryIfNotExists(const QString& folderPath)
{
    QDir dir;

    // �ж��ļ����Ƿ����
    if (!dir.exists(folderPath)) {
        // ���Դ����ļ��У�֧�ֶ���ļ��еĴ���
        dir.mkpath(folderPath);
    }
}
