#include <stdio.h>   
#include <string.h>

int main(void)
{
    FILE    *pfile; //ファイル操作をする時に使うポインターの形式
    char    name[5][30];//今回は、２件のデータを書き込むことにします。
    char    age[5][3]; //それで、２次元配列を使います。[データ数][文字の長さ]
    char    sex[5][10]; //今回は、５件まで対応できるようにして、２件で実施
    char    nat[5][10];

/*
    文字の代入が出来ないので、文字のコピー関数を使います。代入が出来ない理由は、学校で聞いてください、長くなります。strcpy(コピー先,　コピー元）
ファイルへの書き込みには、配列のデータ数のみで対応しています。name[i],age[i]理由は学校で聞いてください。
実行後、作成されたファイルの内容を確認してください。
*/

    strcpy(name[1],"Denshi Kobe");
    strcpy(age[1],"72");
    strcpy(sex[1],"男性");
    strcpy(name[2],"Keiichi Yamada");
    strcpy(age[2],"55");
    strcpy(sex[2],"男性");

    strcpy(nat[1],"日本");
    strcpy(nat[2],"米国");

    pfile = fopen("test2.txt","w"); //ファイルに名前を付けて、書き込みとしてファイルを開く
    
    for(int i=1;i<=2;i++)
    {
        fprintf(pfile,"%s,%s,%s,%s\n",name[i],age[i],sex[i],nat[i]); //ファイルに書き込みを行う、名前、年齢、性別の順
    }
    
    fclose(pfile); // 書き込み終了後はファイルを閉じる、何を閉じるかはポインターがでわかる

    return 0;

}

/*
今回の課題は、項目に国籍を入れて、同様に３例のデータをいれたファイルを作成して、Pushしてください。次回はデータの読み込みです。
*/
