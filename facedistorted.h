#ifndef FACEDISTORTED_H
#define FACEDISTORTED_H
//pragma execution_character_set("utf-8") 
#include <QtWidgets/QMainWindow>
#include "ui_facedistorted.h"
#include<iostream>
#include<qmessagebox.h>
#include<qfiledialog.h>
#include<opencv2\core\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<QString>
#include<string>
#include<qlayout.h>
#include<qdialog.h>
using namespace std;
using namespace cv;
class Facedistorted : public QMainWindow
{
	Q_OBJECT

public:
	Facedistorted(QWidget *parent = 0);
	~Facedistorted();
	int num1[68][2];
	int num2[68][2];
	int num1cp[68][2];
	int num2cp[68][2];
	int row;
	int col;
	int TransNum;
	int DeformationFlag;//ͼ����η�ʽ��ѡ��Ĭ��ΪTPS
	int InterpolationFlag;//��ֵ��ʽ��ѡ��Ĭ��Ϊ�����
	int DirectionFlag;//���η���Ĭ��Ϊ����
	int ZoomFlag;//������־
	int MoveFlag;
	int IFCreatFlag;//�Ƿ�����ͼƬ�ı�־
	int GaussFlag;//�ⷽ�̵ı�־����Ϊ0��������Ϊ1���ⲻ�ˣ�

	int IFReadImageFlag[2];//�Ƿ��ȡͼ��0��û����1����;����ͼ
	int IFReaNumFlag[2];//�Ƿ��ȡnum,0��û����1������
	int GridSize;


	Mat Image1;//ԭͼ��
	Mat Image2;//Ŀ��ͼ
	Mat Image1Positive;//����任
	Mat Image1Reserve;//����任
	Mat Image2Positive;//��ͼ2һ���С
	Mat Image2Reserve;
	QValidator *validator;
	

private:
	Ui::FacedistortedClass ui;

	//������ʾͼƬ
	QLabel *label1;
	QLabel *label2;
	QLabel *label3;
	QLabel *label4;
	QLabel *label5;

public slots:
	void OpenImage1();
	void OpenImage2();
	void ImageCreat();
	void ImageSave();
	void ReadNum1();
	void ReadNum2();
	void ExtractNum1();
	void ExtractNum2();
	void ZoomNum();
	void ShowNum1();
	void ShowNum2();
};

#endif // FACEDISTORTED_H
