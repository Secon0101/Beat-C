/* title.c */

#include "title.h"


// Ÿ��Ʋ ȭ�� ��
void main_title() {

	system("cls");

	char title[7][75] = {
		":::::::::  ::::::::::     :::     :::::::::::                :::::::: ",
		":+:    :+: :+:          :+: :+:       :+:                   :+:    :+:",
		"+:+    +:+ +:+         +:+   +:+      +:+                   +:+       ",
		"+#++:++#+  +#++:++#   +#++:++#++:     +#+     +#++:++#++:+  +#+       ",
		"+#+    +#+ +#+        +#+     +#+     +#+                   +#+       ",
		"#+#    #+# #+#        #+#     #+#     #+#                   #+#    #+#",
		"#########  ########## ###     ###     ###                    ######## ",
	};
	const int titleWid = (int)strlen(title[0]); // 70
	const int titleHei = sizeof(title) / sizeof(title[0]); // 7

	for (int i = 0; i < titleHei; i++) {
		gotoxy(SCREEN_WIDTH/2 - titleWid/2, 4+i);
		puts(title[i]);
	}

	const char anykey[] = "�����Ϸ��� �ƹ� Ű�� ��������";
	gotoxy(SCREEN_WIDTH/2 - (int)strlen(anykey)/2, 4+titleHei+2);
	puts(anykey);

	gotoxy(SCREEN_WIDTH/2, 4+titleHei+3);
	setCursor(UNDERBAR);
	int _ = _getch();

	mapPath = "maps/"; // �̸� �Ҵ�
}