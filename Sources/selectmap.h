/* selectmap.h */
#pragma once

#include <conio.h>
#include <io.h>
#include "main.h"


int mapCount; // ���� ����
char** mapList; // �� ���� â���� ��� �� ���

const int slp = 30; // selectmap left padding
const int stp = 3; // selectmap top padding

static char mapGuideDocs[][82] = { // �� ���۹� �ؽ�Ʈ
	":( ���� ���׿�..",
	"",
	"�� ���۹�:",
	"- ���α׷��� �ִ� ��ο� maps ������ ����ϴ�. ���� �⺻ ����Դϴ�.",
	"- ���� �ȿ� �� �̸����� �� ������ ����ϴ�. �̰��� ���� ���ϴ�.",
	"- �� �ȿ� ���̸�.txt ������ ����ϴ�. ���⿡ ��Ʈ �����Ͱ� ���ϴ�.",
	"",
	"��Ʈ �����ʹ� ������ ���� �����Դϴ�.",
	"",
	"@... @�� ��Ʈ�̰�, .�� ���� ����(' ')�Դϴ�.",
	".... (��('.')�� �����ֱ� ���ؼ� ���� ��� �� �̴ϴ�)",
	".@.. ������ ���۵Ǹ� �� �� �ٺ��� ��Ʈ ���ڸ� �о ���� ȭ�鿡 ��Ʈ�� ���ϴ�.",
	".... // �ۼ� ��",
	"..@.",
	"....",
	"...@",
};


char* main_selectmap();
int selecting(int mapCount);
int loadMaps();