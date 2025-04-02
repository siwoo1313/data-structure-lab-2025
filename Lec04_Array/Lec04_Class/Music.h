#pragma once
#include <iostream> //입력 출력 관련 라이브러리
#include <string>//문자열
#include <vector>//STL vector

using namespace std;//namespace

class Music {
private:
	string title;
	string artist;
	string album;
	int year;

public:
	Music(string title, string artist, string album, int year){		//생성자
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;

	}

};

class MusicStreamingService {

	//음악 찾아주는 서비스 필요
	//음악 추가 기능 필요

};