#include <stdio.h>
#include <stdlib.h>

int main() {
    char input;
    char temp;
    int result;
    char *program_name[] = {"Ahnlab safe Transaction", "inisafe", "veraport", "nprotect", "Delfino", "keysharp",
                            "ipinside", "anysign", "maigcline4nx", "crossex", "touchsenex"};
    char *program_exec[] = {"open /Applications/AhnLab/ASTx/Uninstaller.app", //안랩
                     "open /Applications/CrossWebEx/UnInstallCrossEX.app", //inisafe
                     "open /Applications/Veraport/Uninstaller.app", //veraport(통합설치프로그램)
                     "open /Applications/nProtect/nProtect\\ Online\\ Security\\ V1/NOS/nosuninst.app", //nprotect
                     "open /Applications/Delfino/Uninstaller.app", // Delfino
                     "open /Applications/KeySharp\\ biz\\ v2.1/UnInstallbiz.app", //keysharp
                     "open /Applications/IPinside.app", //ipinside
                     "open /Applications/SoftForum/Uninstaller_AnySign4PC.app", // anysign
                     "open /Applications/MagicLine4NX/Uninstaller.app", // maigcline4nx
                     "open /Applications/CrossEx/crossex/UnInstallCrossEXService.app", //crossex
                     "open /Applications/CrossEx/touchenex/UninstallCrossEx.app"
    };

    printf("\n");
    printf("Parasite Execution (ver 0.0)\n");
    printf("\n");
    printf("주의\n");
    printf("\n");
    printf("이 프로그램은 인터넷뱅킹에 필요한 보안 프로그램을 삭제하는 프로그램입니다.\n");
    printf("모든 프로그램을 완벽하게 삭제하는 것은 보장하지않습니다.\n");
    printf("(이 프로그램은 C언어와 스크립트로 작성한 코드입니다.)\n");
    printf("오류 및 버그제보 : yangik11@naver.com\n\n");
    printf("시작(1) 종료(0) 강제종료(ctrl + c)\n");
    scanf("%c", &input);
    if (input != '1')
    {
        printf("종료됨");
        return 0;
    }
    printf("\n\n");
    for (int i = 0; i < 11; ++i) {
        if(i == 0)
        {
            printf("Ahnlab Safe Transaction 프로세스 종료중..\n");
            result = system("killall -9 astxStatus");
            printf("이미 종료된 프로세스\n");
        }
        printf("%s 제거중..\n" ,program_name[i]);
        result = system(program_exec[i]);
        if(result == 0)
            printf("성공\n\n");
        else
            printf("이미 삭제되었거나 존재하지 않는 프로그램\n\n");
    }
    printf("작업 완료.\n");
    getchar(); // 입력버퍼 날리기
    printf("아무키나 누르면 종료됨.");
    getchar();
    return 0;

}
