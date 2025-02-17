# Moooseのケース設計をしてみたい方へ
基板の3Dデータの一部を公開します。  

## 3Dデータ(.fbx形式、.stl形式)
[fbx形式 データ置き場リンク](https://github.com/ataruno/Mooose/tree/main/forCaseDesign/forCaseDesign_data/fbx)
[stl形式 データ置き場リンク](https://github.com/ataruno/Mooose/tree/main/forCaseDesign/forCaseDesign_data/stl)

## 簡単な解説
### データのダウンロード
ダウンロードしたいデータファイルまでいき、画像赤枠の"Download raw file"をクリックするとダウンロードできます。  
![ ](https://github.com/ataruno/Mooose/blob/main/forCaseDesign/forCaseDesign_image/%E3%82%B1%E3%83%BC%E3%82%B9%E8%A8%AD%E8%A8%88%E7%94%A810.png)

### キースイッチの配置
左手側をモチーフに解説します。全体イメージは以下です。  
![ ](https://github.com/ataruno/Mooose/blob/main/forCaseDesign/forCaseDesign_image/%E3%82%B1%E3%83%BC%E3%82%B9%E8%A8%AD%E8%A8%88%E7%94%A805.png)

キースイッチ一つは19.05mm x 19.05mmで配置しています。  
ずれ量はこの値を基準に1/4ずれ、1/8ずれを使用しています。  
つまり、  
1/4ずれは19.05mm x 1/4 = 4.7625  
1/4ずれは19.05mm x 1/8 = 2.38125  
![ ](https://github.com/ataruno/Mooose/blob/main/forCaseDesign/forCaseDesign_image/%E3%82%B1%E3%83%BC%E3%82%B9%E8%A8%AD%E8%A8%88%E7%94%A806.png)

真ん中あたりの1.25Uサイズのキースイッチ配置は以下のような感じ。  
隣から22.00mm離れてます。  
![ ](https://github.com/ataruno/Mooose/blob/main/forCaseDesign/forCaseDesign_image/%E3%82%B1%E3%83%BC%E3%82%B9%E8%A8%AD%E8%A8%88%E7%94%A807.png)

### データの取り込み方
使用しているソフトによって異なると思いますが、blenderだと以下です。  
インポートから指定のファイルを選択。  
![ ](https://github.com/ataruno/Mooose/blob/main/forCaseDesign/forCaseDesign_image/%E3%82%B1%E3%83%BC%E3%82%B9%E8%A8%AD%E8%A8%88%E7%94%A800.png)

fbx形式だとマテリアル(色)がついています。  
また、一つのファイルを読み込むと、4つのデータが取り込まれます。  
![ ](https://github.com/ataruno/Mooose/blob/main/forCaseDesign/forCaseDesign_image/%E3%82%B1%E3%83%BC%E3%82%B9%E8%A8%AD%E8%A8%88%E7%94%A801.png)

stl形式だと色情報がないため真っ白です。  
![ ](https://github.com/ataruno/Mooose/blob/main/forCaseDesign/forCaseDesign_image/%E3%82%B1%E3%83%BC%E3%82%B9%E8%A8%AD%E8%A8%88%E7%94%A802.png)

ぱっと見見えないけど、位置をずらすと見えたりします。  
![ ](https://github.com/ataruno/Mooose/blob/main/forCaseDesign/forCaseDesign_image/%E3%82%B1%E3%83%BC%E3%82%B9%E8%A8%AD%E8%A8%88%E7%94%A803.png)



