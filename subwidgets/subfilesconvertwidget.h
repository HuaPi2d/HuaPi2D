#pragma once

#include <QWidget>
#include <QScrollBar>
#include <QAction>
#include <QFileDialog>
#include <QSettings>
#include <thread/fileConvert/videofileconvertthread.h>
#include <QFileInfo>

#include "ui_subfilesconvertwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SubFilesConvertWidgetClass; };
QT_END_NAMESPACE

class SubFilesConvertWidget : public QWidget
{
	Q_OBJECT

public:
	SubFilesConvertWidget(QWidget *parent = nullptr);
	~SubFilesConvertWidget();

protected:
	void closeEvent(QCloseEvent* event) override;

private slots:
	void saveSettings();
	void loadSettings();
	void wirteRemindInfo(QString htmlString);
	void openVideoFile();
	// ѡ����Ƶ����ļ�·��
	void openVideoOutputDir();
	// ��ʼת��
	void beginToConvertVideo();
	// �������߳���Ϣ
	void receiveVideoConvertInfo(QString state);
	

public: signals:
	void widgetClosed();
	void sendStateInfo(QString state);
	// ������Ƶת������
	void sendVideoConvertParams(const QString& input_file, const QString& output_path, const QString& original_type, const QString& target_type);

private:
	Ui::SubFilesConvertWidgetClass *ui;
};
