/* title.c */

#include "title.h"


// 타이틀 화면 씬
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

	const char anykey[] = "시작하려면 아무 키나 누르세요";
	gotoxy(SCREEN_WIDTH/2 - (int)strlen(anykey)/2, 4+titleHei+2);
	puts(anykey);

	gotoxy(SCREEN_WIDTH/2, 4+titleHei+3);
	setCursor(UNDERBAR);
	int _ = _getch();

	mapPath = "maps/"; // 미리 할당
}
