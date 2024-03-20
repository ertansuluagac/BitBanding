/**
  @page CortexM_BitBand CortexM BitBand örnegi
  
  @verbatim
  ******************** (C) COPYRIGHT 2024 STMicroelectronics *******************
  * @file    CortexM/BitBand/readme.txt 
  * @author  ERTAN SULUAGAC
  * @version V1.8.1
  * @date    20-MART-2024
  * @brief   CortexM BitBand örneginin aciklamasi.
  ******************************************************************************
  * @attention
  *
  * Telif Hakki (c) 2016 STMicroelectronics.
  * Tüm haklari saklidir.
  *
  * Bu yazilim, bu yazilim bileseninin kök dizinindeki LISANS dosyasinda bulunabilecek
  * sartlar altinda lisanslanmistir.
  * Bu yazilim ile birlikte LISANS dosyasi gelmiyorsa, AS-IS saglanir.
  *
  ******************************************************************************
  @endverbatim

@par Örnek Açiklamasi 

Bu örnek, CortexM4 Bit-Band erisimini kullanarak SRAM'deki bir degiskende atomik okuma-modifikasyon-yazma ve okuma islemlerini nasil gerçeklestireceginizi gösterir.


  
    
@par Donanim ve Yazilim ortami

  - Bu örnek, STM32F405xx/407xx, S
    cihazlarinda çalisir.
    
  - Bu örnek, STMicroelectronics STM32F4-DISC Karti  ile test edilmis ve 
    desteklenen diger cihaz ve gelistirme kartlarina kolayca uyarlanabilir.


@par Nasil kullanilir ? 

Programin çalismasi için sunlari yapmalisiniz:
 - Bu örnek klasöründeki tüm kaynak dosyalarini Projede sablon klasörüne kopyalayin
   - Proje\STM32F4xx_StdPeriph_Templates altinda
 - Tercih ettiginiz derleme ortamini açin 
 - Kullanilan cihaza iliskin proje çalisma alanini seçin 
   - Varsayilan proje olarak "STM32F40_41xxx" seçildiginde, asagidaki dosyalari proje kaynak listesine ekleyin:
     - Utilities\STM32_EVAL\STM3240_41_G_EVAL\stm324xg_eval.c
        
   - Varsayilan proje olarak "STM32F427_437xx" seçildiginde, asagidaki dosyalari proje kaynak listesine ekleyin:
     - Utilities\STM32_EVAL\STM324x7I_EVAL\stm324x7i_eval.c
             
 - Tüm dosyalari yeniden derleyin ve görüntünüzü hedef bellege yükleyin
 - Örnegi çalistirin
    
 
 */
