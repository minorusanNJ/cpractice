#include <stdio.h>

int main(void)
{

    //以下の文はコメントですので書かなくても良いです。

    FILE    *pfile; //ファイル操作をする時に使うポインターの形式
    char    name[50]="Denshi Kobe"; //名前
    char    age[3]="72"; //年齢
    char    sex[10]="男性"; //性別

    //今回は、宣言時に内容を設定してあります。

    pfile = fopen("test.txt","w"); //ファイルに名前を付けて、書き込みとしてファイルを開く
    
    //fopen("ファイル名","書き込み形式") 取り敢えず、ｗが書き込み、ｒが読み取り

    fprintf(pfile,"%s,%s,%s",name,age,sex); //ファイルに書き込みを行う、名前、年齢、性別の順

    //fprintfはファイルに書き込みを行う関数、printfと使い方はに似ているが、書き込み時にファイルポインターpfileを必要とする

    fclose(pfile); // 書き込み終了後はファイルを閉じる、何を閉じるかはポインターがでわかる

    return 0;

}
