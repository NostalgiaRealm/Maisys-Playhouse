
/* ==== FUN_10008de7 @ 10008de7 ==== 
 * signature: undefined __cdecl FUN_10008de7(HWND param_1, uint param_2)
 * body: 10008de7-10008e16
 */

void __cdecl FUN_10008de7(HWND param_1,uint param_2)

{
  char cVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)0x0;
  cVar1 = *(char *)(&DAT_100240e0)[DAT_10023924];
  if (0 < cVar1) {
    do {
      FUN_10008e17(param_1,param_2,pbVar2);
      pbVar2 = pbVar2 + 1;
    } while ((int)pbVar2 < (int)cVar1);
  }
  return;
}


