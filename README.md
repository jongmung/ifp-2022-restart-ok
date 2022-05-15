# ifp-2022-restart-ok
2022�뀈 �뒪�꽣�뵒洹몃９ 猿먮떎 耳쒕㈃ �맗�땲�떎
- �솢�룞 湲곌컙 : 2022.04.04(�썡) ~ 2022.12.31(�넗)

- �룞�븘由� �쉶�옣 

  - �씠�븯�엺 <[HalamLee](https://github.com/HalamLee)>

- 李몄뿬 �룞�븘由ъ썝
  - [�뒪�꽣�뵒�옣] �쑀�옱�슦 <[blooper20](https://github.com/blooper20)>
  - �젙梨꾩�� <[chaeeunj](https://github.com/chaeeunj)>
  - 怨쏀삙由� <[hr111322](https://github.com/hr111322)>
  - 源��깭�쁺 <[overtae](https://github.com/overtae)>
  - 諛뺤쥌誘� <[jongmung](https://github.com/jongmung)>
  - �븞�룞�꽠 <[tjqehd23](https://github.com/tjqehd23)>
  - 梨꾪씗吏� <[coowooc](https://coowooc.tistory.com/)>
  - �젙�옱洹� <[tgoddessana](https://github.com/tgoddessana)>
  - �냼�씠�뿰 <[peridot-28](https://github.com/peridot-28)>




## �쓶 臾댁뾿�쓣 �븯�뒗媛�?

- �뙆�씠�뜫 肄붾뵫�뀒�뒪�듃 諛깆�� 

## �윍� �뼱�뼸寃� �븯�뒗媛�?

1. 二쇱뼱吏� 怨쇱젣瑜� �닔�뻾

2. �옉�꽦�븳 肄붾뱶瑜� 愿��젴 �뤃�뜑�뿉 ����옣

3. ����옣�븳 �뙆�씪�쓣 媛쒖씤蹂� Fork�븳 Repo�쓽 main�쑝濡� PUSH

4. 媛쒖씤蹂� 源껎뿀釉� Repo�뿉 PUSH�맂 main Branch瑜� IFP�쓽 �뒪�꽣�뵒 ����옣�냼�쓽 main Branch濡� PR�쓣 蹂대깂

5. �빐�떦 怨쇱젙�쓣 諛섎났

   ```
   1. IFP�쓽 �뒪�꽣�뵒 ����옣�냼 Fork
   2. 蹂몄씤�쓽 �뒪�꽣�뵒 ����옣�냼瑜� Clone (濡쒖뺄�쓽 ����옣�냼 �뤃�뜑媛� �깮�꽦�맖)
   $ git clone https://github.com/[�옄�떊�쓽 怨꾩젙�씠由�]/ifp-2022-restart-ok.git
   3. IFP�쓽 �뒪�꽣�뵒 ����옣�냼��� �룞湲고솕 (蹂�寃쎈맂 �궡�뿭�쓣 �굹�쓽 ����옣�냼�뿉�룄 �씪移섏떆耳쒖＜�뒗 �옉�뾽)
   
   # 癒쇱�� 濡쒖뺄遺��꽣 �룞湲고솕�빐以섏빞 �븳�떎. (Fork �븯湲� �쟾�쓽 �젅�룷. 利�, IFP �젅�룷�쓽 remote �씠由꾩쓣 "upstream"�씠�씪怨� �빐以��떎.)
   # upstream 異붽�� -> �넻�긽�쟻�쑝濡� upstream�씠�씪怨� �빐二쇰뒗寃� �썝移숈씠�떎.
   $ git remote add upstream https://github.com/IDU-IFP/ifp-2022-restart-ok.git
   # upstream �젅�룷�쓽 蹂�寃� �궡�뿭�쓣 濡쒖뺄�쓽 ����옣�냼��� 蹂묓빀
   $ git pull upstream main
   
   4. �옄�떊�쓽 �쁺臾� �씠由꾩쑝濡� �맂 �뤃�뜑(ex: yoojaewoo) �깮�꽦 
  
   5. yoojaewoo �뤃�뜑濡� �씠�룞

   6. 肄붾뱶�옉�뾽�쓣 �떆�옉�븯湲� �쟾�뿉 �썝蹂� �젅�룷吏��넗由щ줈遺��꽣 pull�쓣 諛쏄퀬 吏꾪뻾�븯硫� �맂�떎.   
   # pull�쓣 �씠�슜�븯�뿬 �썝蹂� �젅�룷吏��넗由ъ쓽 main 釉뚮옖移섏뿉 �엳�뒗 理쒖떊 �뙆�씪�뱾�쓣 諛쏆븘�삩�떎.
   $ git pull upstream main

   7. 肄붾뱶�옉�뾽 吏꾪뻾 (�뙆�씪紐� : 諛깆��_0000踰덈Ц�젣.py)
   
   7.5 肄붾뱶 �옉�뾽�씠 �걹�굹怨� �떎�떆 pull�쓣 諛쏆븘�삩�떎.
   # 肄붾뱶 �옉�뾽以� �늻援곌��媛� �깉濡쒖슫 �뙆�씪�쓣 push�븷 媛��뒫�꽦�씠 �엳�쑝誘�濡� �떎�떆 理쒖떊�솕 �떆耳쒖���떎.
   $ git pull upstream main
   
   8. 源� Staging Area�뿉 ����옣 (ex: git add �뙆�씪紐�)
   # �뙆�씪紐낆뿉 "."�쓣 �븯硫� �쁽�옱 �뤃�뜑�쓽 �쟾泥� �뙆�씪�쓣 tracked�븿.
   $ git add . 
   
   9. ".git" �뤃�뜑�뿉 ����옣 (ex: git commit -m "�씠由�: 硫붿꽭吏�") -> "-m"��� message�쓽 �빟�옄
   $ git commit -m "yoojaewoo: 諛깆��_0000踰덈Ц�젣 ����씠"
   
   10. 蹂몄씤�씠 Fork�븳 源껎뿖 ����옣�냼�뿉 �뾽濡쒕뱶 (ex: git push <Remote> <Branch>)
   $ git push origin main
   
   11. 蹂몄씤�씠 Fork�븳 源껎뿖 ����옣�냼濡� �씠�룞�븯�뿬 Pull Request(PR)瑜� 蹂대궦�떎.
    �쓼 �씠�븣, IFP ����옣�냼�쓽 main 釉뚮옖移섍�� �븘�땶 "蹂듭궗�븳 �젅�룷吏��넗由�"濡� 蹂대궡�빞�븿
    �씠�썑 �뒪�꽣�뵒 洹몃９�옣�씠 �솗�씤�븳 �썑 IFP ����옣�냼�쓽 main 釉뚮옖移섎줈 蹂묓빀�떆耳쒖＜�뒗 �옉�뾽�쓣 �븯寃� �맂�떎.
   
   12. �떎瑜� �뒪�꽣�뵒�썝�쓽 臾몄젣 ����씠媛� �삱�씪�삩 寃쎌슦 �떎�쓬 二쇱감媛� �꽆�뼱媛�吏� �쟾源뚯�� 肄붾뱶由щ럭瑜� �빐以��떎.
   ```
### �쓼二쇱쓽�빐�빞�븷 �젏
- **git pull**�쓣 �씠�슜�븯�뿬 肄붾뱶�옉�뾽 �쟾, �썑濡� **理쒖떊�솕** �떆耳쒖＜湲�
- **git pull**�쓣 �씠�슜�븯硫� **�떎瑜� �궗�엺�쓽 �뤃�뜑媛� �옄�떊�쓽 �옉�뾽 �솚寃쎌뿉 �깮湲곕뒗�뜲** �씠�븣 �떎瑜� �궗�엺�쓽 �뤃�뜑瑜� **�젅���濡� �궘�젣**�븯吏� �븡�뒿�땲�떎!!
- **pull**�쓣 �궗�슜�븷 �븣�뿉�뒗 **�썝蹂� �젅�룷吏��넗由�**瑜� �씠�슜�븳�떎.
- **push**�쓣 �븷 �븣�뿉�뒗 **fork�븳 媛쒖씤 �젅�룷吏��넗由�**瑜� �씠�슜�븳�떎.
