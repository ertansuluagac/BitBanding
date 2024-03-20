/**
  @page CortexM_BitBand CortexM BitBand �rnegi
  
  @verbatim
  ******************** (C) COPYRIGHT 2024 STMicroelectronics *******************
  * @file    CortexM/BitBand/readme.txt 
  * @author  ERTAN SULUAGAC
  * @version V1.8.1
  * @date    20-MART-2024
  * @brief   CortexM BitBand �rneginin aciklamasi.
  ******************************************************************************
  * @attention
  *
  * Telif Hakki (c) 2016 STMicroelectronics.
  * T�m haklari saklidir.
  *
  * Bu yazilim, bu yazilim bileseninin k�k dizinindeki LISANS dosyasinda bulunabilecek
  * sartlar altinda lisanslanmistir.
  * Bu yazilim ile birlikte LISANS dosyasi gelmiyorsa, AS-IS saglanir.
  *
  ******************************************************************************
  @endverbatim

@par �rnek A�iklamasi 

Bu �rnek, CortexM4 Bit-Band erisimini kullanarak SRAM'deki bir degiskende atomik okuma-modifikasyon-yazma ve okuma islemlerini nasil ger�eklestireceginizi g�sterir.


  
    
@par Donanim ve Yazilim ortami

  - Bu �rnek, STM32F405xx/407xx, S
    cihazlarinda �alisir.
    
  - Bu �rnek, STMicroelectronics STM32F4-DISC Karti  ile test edilmis ve 
    desteklenen diger cihaz ve gelistirme kartlarina kolayca uyarlanabilir.


@par Nasil kullanilir ? 

Programin �alismasi i�in sunlari yapmalisiniz:
 - Bu �rnek klas�r�ndeki t�m kaynak dosyalarini Projede sablon klas�r�ne kopyalayin
   - Proje\STM32F4xx_StdPeriph_Templates altinda
 - Tercih ettiginiz derleme ortamini a�in 
 - Kullanilan cihaza iliskin proje �alisma alanini se�in 
   - Varsayilan proje olarak "STM32F40_41xxx" se�ildiginde, asagidaki dosyalari proje kaynak listesine ekleyin:
     - Utilities\STM32_EVAL\STM3240_41_G_EVAL\stm324xg_eval.c
        
   - Varsayilan proje olarak "STM32F427_437xx" se�ildiginde, asagidaki dosyalari proje kaynak listesine ekleyin:
     - Utilities\STM32_EVAL\STM324x7I_EVAL\stm324x7i_eval.c
             
 - T�m dosyalari yeniden derleyin ve g�r�nt�n�z� hedef bellege y�kleyin
 - �rnegi �alistirin
    
 
 */
