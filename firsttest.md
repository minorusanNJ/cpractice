リポジトリのクローン
git clone https://github.com/minorusanNJ/cpractice

ディレクトリに移動
cd cpractice/

中身の確認
ll

念の為ブランチの確認
git branch -a

自分用のブランチの作成
git checkout -b morimoto

切り替わっているかブランチを確認
git branch -a


試しに適当にファイルを作成してみた。
vi firsttest.md

コミットする。
git status
git add .
git commit -m "First test by morimoto"

念の為の確認
git status

自分のブランチにプッシュ
git push origin HEAD

ブラウザで開いてブランチが追加されているか確認する。
https://github.com/minorusanNJ/cpractice

以上
