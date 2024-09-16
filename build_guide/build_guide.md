# Moooseのビルドガイド

- [キット内容](#キット内容)
- [ご自身で手配いただくもの](#ご自身で手配いただくもの)
- [はんだ付け](#はんだ付け)
- [組み立て](#組み立て)
- [部品について](#部品について)
- [プログラム書き込み(Remap)](#プログラム書き込みremap)
- [キーマップのカスタマイズ設定](#キーマップのカスタマイズ設定)

## キット内容
以下の内容がキットに含まれます。  
### ケース関係
| ケース関係           | 個数        |
| :------------------- | ----------- |
| ケース上部           | 左右1セット |
| ケース下部           | 左右1セット |
| ミドルプレート       | 左右1セット |
| エンコーダ部分カバー | 1個         |
| トラボケース下部     | 1個         |
| トラボケース上部     | 1個         |
| トラボケース(レザー) | 1個         |
| ネジ                 | ＊個        |

![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/01_%E3%82%AD%E3%83%83%E3%83%88%E5%86%85%E5%AE%B9_%E3%82%B1%E3%83%BC%E3%82%B9.jpg)

### 部品関係
| 部品関係       | 個数        |
| :------------- | :---------- |
| 基板           | 左右1セット |
| 発光ダイオード | 1個         |

![ ]()

## ご自身で手配いただくもの
| ご自身で手配いただくもの | 個数 |
| :----------------------- | :--- |
| リセットスイッチ         | 1個  |
| TRRSコネクタ             | 2個  |
| TRRSケーブル             | 1本  |

![ ]()

## はんだ付け
### 裏面(はんだ付け前→はんだ付け後)
左側がはんだ付け前の素の基板、右側がはんだ付け後の基板です。  
(光学センサのはんだ付け、おおちゃくしています。)  
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/Mooose_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91.jpg)

### 基板データ画像とPDF
はんだ付け部分がわかりやすいよう基板データの画像とPDFファイルも置いておきます。  

#### 右手  
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/Mooose_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91_%E5%8F%B3.png)
[PDFファイルリンク](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91%E3%82%8F%E3%81%8B%E3%82%8A%E3%82%84%E3%81%99%E3%81%8F%E3%81%99%E3%82%8B%E7%94%A8_%E5%8F%B3.pdf)



#### 左手  
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/Mooose_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91_%E5%B7%A6.png)
[PDFファイルリンク](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91%E3%82%8F%E3%81%8B%E3%82%8A%E3%82%84%E3%81%99%E3%81%8F%E3%81%99%E3%82%8B%E7%94%A8_%E5%B7%A6.pdf)

何かの助けになるかもしれないので拡大画像もおいておきます。  
テープモッドしてたのを外したので、粘着剤がついてますが気にしないでください。  
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/Mooose_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91%E6%8B%A1%E5%A4%A7_%E5%8F%B3%E4%B8%8A.jpg)
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/Mooose_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91%E6%8B%A1%E5%A4%A7_%E5%8F%B3%E4%B8%8B.jpg)
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/Mooose_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91%E6%8B%A1%E5%A4%A7_%E5%B7%A6%E4%B8%8A.jpg)
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/Mooose_%E3%81%AF%E3%82%93%E3%81%A0%E4%BB%98%E3%81%91%E6%8B%A1%E5%A4%A7_%E5%B7%A6%E4%B8%8B.jpg)

光学センサ付近は、LEDがやや浮くような配置になります。  
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/Mooose_%E5%85%89%E5%AD%A6%E3%82%BB%E3%83%B3%E3%82%B5%E4%BB%98%E8%BF%911.jpg)
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_hard/Mooose_%E5%85%89%E5%AD%A6%E3%82%BB%E3%83%B3%E3%82%B5%E4%BB%98%E8%BF%912.jpg)

```
開発小話
Mooose、実は光学センサの位置が3か所選べます。
ただ、対応したケースをそれぞれ頒布キットの中に含むのは途方もないので、大玉が使える位置をベースにしています。
興味ある人は光学センサの位置変えた上で、トラボケースを自設計＆自宅の3Dプリンタ印刷したりカスタマイズしてみてください。
```

## 組み立て
ボトムケースにはんだ付けした基板をはめます。  
![ ]()

### 組み立ての完成
![ ]()

## 部品について
家庭用の3Dプリンターで製造しているため、製造にばらつきがあります。ご了承ください。  
事前に組み立てを行い、問題ないと判断したものをキットとしています。  
ご理解のほどよろしくお願いいたします  

## プログラム書き込み(Remap)
### hexファイルのダウンロード
Githubにあるhexファイルをダウンロードしてください。
[hexファイル(Remap)](https://remap-keys.app/catalog/MlyqSV68nIYDRLw4srxW/firmware)

![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_remap/52_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E3%83%80%E3%82%A6%E3%83%B3%E3%83%AD%E3%83%BC%E3%83%89.jpg)

### hexファイルの書き込み
以下ではRemapでのプログラム書き込みを説明します。  
その他の書き込み手段としては、Pro Micro Web UpdaterやQMK Toolboxでも可能です。  
(ブラウザはChrome、Edgeで書き込みできることを確認済です。)  

Remap右上のアイコンをクリックしてください。  
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_remap/53_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E6%9B%B8%E3%81%8D%E8%BE%BC%E3%81%BF1.jpg)

"Upload Firmware"のポップアップがでます。  
先ほどダウンロードしたhexファイルをドラッグ・アンド・ドロップしてください。  
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_remap/53_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E6%9B%B8%E3%81%8D%E8%BE%BC%E3%81%BF2.jpg)

キーボードとPCをUSBケーブルで接続してください。  
Bootloaderはcaterinaを選択し、FLASHをクリック。
![ ](https://github.com/ataruno/Mooose/blob/main/build_guide/build_guide_image_remap/53_hex%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E3%81%AE%E6%9B%B8%E3%81%8D%E8%BE%BC%E3%81%BF3.jpg)

シリアルポートへの接続要求のポップアップが出ます。  
この状態で接続したキーボードのリセットスイッチ(promicroをリセット)を押してください。  
![ ]()

リセットスイッチを押すと"Arduino Leonardo"と表示されます。  
![ ]()

"Arduino Leonardo"を選択し、接続をクリックしてください。  
![ ]()

書き込みが進み"Writing the firmware finished successfuly"となれば完了です。  
パーセンテージも100%になれば完了です。  
![ ]()

## キーマップのカスタマイズ設定
キーマップの設定もRemapを活用できます。  

[Remap](https://remap-keys.app/)へ接続してください。  
![ ]()

"+KEYBOARD"をクリックしてください。  
![ ]()

接続一覧から"Mooose"を選択し、"接続"をクリックしてください。  
![ ]()

キーマップの編集が終わったら、右上の"flash"をクリックしてください。  
![ ]()

右上が"SUCCESS"になればキーマップの書き換え完了です。  
![ ]()


