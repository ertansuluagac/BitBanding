#include "stm32f4xx.h"

/*
  Bu kod, bit-band (bit-banding) bolgesine erismek icin kullanilan makrolari 
  tanimlar. Bit-band bolgesi, bellekteki her bir bitin ayri bir adresle 
  erisilebilir oldugu ozel bir bellek bolgesidir. Bu bolge, bellekteki her bir 
  bitin yazilabilir veya okunabilir olmasini saglar.

  Makrolar, bit-band bolgesine erismek icin verilen bir degiskenin veya bitin 
  adresini alir ve ilgili bit-band adresini hesaplar. Sonra bu hesaplanan adrese 
  ulasarak ilgili islemi gerçeklestirir.

  Var_ResetBit_BB(VarAddr, BitNumber)`: Belirtilen degiskenin belirtilen bitini 
                                        sifirlamak icin kullanilir. `VarAddr`, 
                                        degiskenin adresini ve `BitNumber`, 
                                        sifirlanacak bitin konumunu belirtir.

 `Var_SetBit_BB(VarAddr, BitNumber)`: Belirtilen degiskenin belirtilen bitini 
                                      ayarlamak için kullanilir. `VarAddr`, 
                                      degiskenin adresini ve `BitNumber`, 
                                      ayarlanacak bitin konumunu belirtir.

 `Var_GetBit_BB(VarAddr, BitNumber)`: Belirtilen degiskenin belirtilen bitini 
                                      okumak için kullanilir. `VarAddr`, 
                                      degiskenin adresini ve `BitNumber`, 
                                      okunacak bitin konumunu belirtir.

  Bu makrolar, bit-band bolgesine erisimi saglamak icin bellek adreslerini dogru 
 sekilde hesaplar ve islemleri gerceklestirir.*/

#define  Var_ResetBit_BB(VarAddr, BitNumber)    \
          (*(__IO uint32_t *) (SRAM_BB_BASE | ((VarAddr - SRAM_BASE) << 5) | ((BitNumber) << 2)) = 0)
   
#define Var_SetBit_BB(VarAddr, BitNumber)       \
          (*(__IO uint32_t *) (SRAM_BB_BASE | ((VarAddr - SRAM_BASE) << 5) | ((BitNumber) << 2)) = 1)

#define Var_GetBit_BB(VarAddr, BitNumber)       \
          (*(__IO uint32_t *) (SRAM_BB_BASE | ((VarAddr - SRAM_BASE) << 5) | ((BitNumber) << 2)))
            

__IO uint32_t Var, VarAddr = 0, VarBitValue = 0;

int main(void)
{
  /*!< Bu asamada mikrodenetleyici saat ayari zaten yapilandirilmis durumda, 
       bu islem, baslangic dosyalarindan 
       (startup_stm32f40_41xxx.s/startup_stm32f427_437xx.s/startup_stm32f429_439xx.s)
       (application main'e dallanmadan önce çagrilan) SystemInit() fonksiyonu 
       araciligiyla gerceklestirilir. 
       SystemInit() fonksiyonunun varsayilan ayarlarini yeniden yapilandirmak icin, 
       system_stm32f4xx.c dosyasina basvurun
     */
  Var = 0x00005AA5;
  
  /* Bir esleme formulu, alias bolgesindeki her kelimenin bit-band bolgesindeki 
   ilgili bite nasil referans verilecegini gosterir. 

    "Alias" terimi, bir nesnenin veya bir degerin baska bir nesne veya degerle 
    ayni anlami tasidigi durumu ifade eder.  Özellikle programlama terimlerinde, 
    bir degiskenin birden fazla isimle cagrilabilmesi veya bir bellek adresinin 
   farkli bir adresle eslestirilmesi gibi durumlar icin kullanilir. 

   Alias, orijinal nesnenin veya adresin bir baska isimle veya adresle 
   çagrilmasini saglar
   
   Esleme formülü sudur:
   bit_word_addr = bit_band_base + (byte_offset x 32) + (bit_number + 4)

burada:
   - bit_word_addr: Hedef bit'e eslenen alias bellek bölgesindeki kelimenin adresidir.
   - bit_band_base: Alias bölgesinin baslangiç adresidir.
   - byte_offset: Hedef biti içeren bit-band bölgesindeki bayt numarasidir.
   - bit_number: Hedef bitin bit konumu (0-7) dur. */
  
  // Degiskenin bitini bit-band erisimi kullanarak degistir
  
  VarAddr = (uint32_t)&Var;                     // Degisken adresini al 
  
  Var_ResetBit_BB(VarAddr, 0);                  // Var degiskeninin 0. bitini sifirla         (Var = 0x00005AA4)
  Var_SetBit_BB(VarAddr, 0);                    // Var degiskeninin 0. bitini set et          (Var = 0x00005AA5)
  
  Var_ResetBit_BB(VarAddr, 11);                 // Var degiskeninin 11. bitini degistir       (Var = 0x000052A5)
  
  VarBitValue = Var_GetBit_BB(VarAddr, 11);     // Var degiskeninin 11. bitinin degerini al   (VarBitValue = 0x00000000)
  
  Var_SetBit_BB(VarAddr, 11);                   // Var degiskeninin 11. bitini set et         (Var = 0x00005AA5)
  VarBitValue = Var_GetBit_BB(VarAddr, 11);     // Var degiskeninin 11. bitinin degerini al   (VarBitValue = 0x00000001 )
  
  Var_SetBit_BB(VarAddr, 31);                    // Var degiskeninin 31. bitini degistir      (Var = 0x80005AA5)
  VarBitValue = Var_GetBit_BB(VarAddr, 31);      // Var degiskeninin 31. bitinin degerini al  ( VarBitValue = 0x00000001 )
    
  Var_ResetBit_BB(VarAddr, 31);                  // Var degiskeninin 31. bitini sifirla       ( Var = 0x00005AA5 )
  VarBitValue = Var_GetBit_BB(VarAddr, 31);      // Var degiskeninin 31. bitinin degerini al  (VarBitValue = 0x00000000)
  
  
  while(1)
  {
    
    
    
  }
  
  
}