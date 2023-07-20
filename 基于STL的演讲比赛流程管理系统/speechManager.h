#pragma once
#include <iostream>
#include <vector>
#include <map>
#include "speaker.h"
using namespace std;

//�ݽ�������
class SpeechManager {
public:
	SpeechManager();

	~SpeechManager();

	void show_Menu();

	void exitSystem();

	void initSpeech();

	void createSpeaker();

	void startSpeech();


	//����ѡ��
	vector<int>v1;

	//��һ�ֽ�������  6��
	vector<int>v2;

	//ʤ��ǰ��������  3��
	vector<int>vVictory;

	map<int, Speaker> m_Speaker;

	int m_Index;

};