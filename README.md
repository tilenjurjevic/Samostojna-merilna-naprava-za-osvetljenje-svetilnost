# Samostojna-merilna-naprava-za-osvetljenje-svetilnost
1. Kratek opis:
   Povezali bomo Photodiodo z Arduinom UNO ter LCD zaslonom. Photodioda bo merila osvetljenost/svetilnost (v Lux) in meritve bodo zapisane na LCD zaslonu. Z potenciometrom lahko spreminjamo svetlost zaslona

2. | Kosovnica |
   |-----------|
   |Arduino UNO|
   |LCD 16x2 zaslon|
   |Photodioda|
   |Kabli|
   |Potenciometer|
   |10kE upor|
   |Matice 16x|
   |Vijaki|
   |PVC Plošča 2x|

   3.Komentar
   Pri izdelavi je bilo kar nekaj težav večina je nastajal problem pri meritvi. Do odstopanj prihaja zaradi različnih razlogov(ko nekdo hodi mimo nastane senca, LUX meter je bolj občutljiv kot pa naš ARDUINO LUX meter).
   Ker pa je LUX meter bolj občutljiv na vsako spremembo in reagira s spremembo hitrih vendar malih številk. V našem ARDUINO LUX metru pa ni tako natančen fotoresistor zato prihaja do hitrih in velikih sprememb 
   vrednosti(Številk). S spreminjanje vrednosti kalibracije s pomočjo LUX metra sva približno na iste vrednosti na obeh LUX merilnih napravah.
