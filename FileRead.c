#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define     totalWords  1517

int main(void)
{
    FILE    *pfile;
    char    Eng[80];    
    char    Jap[80];
    char    Grad[10];
    char    fname[] = "JHwords.csv";// 作成してある単語のリストです。このデータの作成方法は、学校で聞いてください。

    int     i=1;
    
    char    E[1520][80];// ここでは、1517個の単語が有るので、それに番号付をします。
    char    J[1520][80];
    char    G[1520][10];
    
    char     grad[10]; // 何学年のデータを取得するか決める、入力文字なので文字とする
    int     words = 100; //単語の個数を１００個に限定
    int     count; //単語数を数える

    pfile = fopen(fname,"r");	//ファイルをオープンします、失敗の場合は−１を戻します。
    if(pfile == NULL )
    {
        printf("%s file not open!\n",fname);
        return -1;
    }


    while(fscanf(pfile, "%[^,], %[^,], %s",Eng,Jap,Grad) != EOF) //fscanfは空白が有るとそこで読み取りが終わり次に行くので、それをスキップするために、特殊記号で , が有るところまで読み込むようにします。
    {
        
        strcpy(E[i],Eng);//読み取りデータを２次元配列のi番目にコピーします。strcpy(コピー先、コピー元)。　＝等では値をコピーすることが出来ません。詳しくは学校で聞いてください。
        strcpy(J[i],Jap);
        strcpy(G[i],Grad);
        printf("%s %s %s",E[i],J[i],G[i]);
        i++;
        if(i>=totalWords)
            break;  // 終了までの読み込みを行った場合に、最後にゴミがついてくるので、単語総数までで終了とします。

     
    }


    fclose(pfile);

    printf("\n");

    printf("何学年のデータを取り出しますか？　１〜３を入力");
    while(1)
    {
        scanf("%s",grad);
        if(atoi(grad)>=1 && atoi(grad) <=3)
        {
            break;
        }else{
            printf("入力データが１〜３ではありません、再度入力してください。\n");
        }
            
    }
    
    
    for(i=1;i<=totalWords;i++)  //読み取って配列に移したデータを取り出し、学年が１の場合のみを印刷します。数値と比較なので、atoi()関数で数値変換して比較しています。
    {
        if (atoi(G[i])== atoi(grad) )  // need to include stdlib.h change str to integer
        {   //printf("OK");//イフ文が正常に動いているかの確認の為に追加してます。
            //printf("%d, %d\n",atoi(G[i]),grad);
            printf("%s %s %s",E[i],J[i],G[i]);
            count++;  //単語数を数えています。 
        }

        if (count >= words)  //単語の数が１００を超えたらbreakします。
            break;

    }
    printf("\n");


    return 0;

}


/*
この場合の課題は、読み出したデータから学年２のデータを取り出し、その内の１００個のみを表示してください。
*/
