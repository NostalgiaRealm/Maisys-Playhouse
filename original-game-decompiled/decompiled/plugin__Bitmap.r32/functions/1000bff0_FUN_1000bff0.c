
/* ==== FUN_1000bff0 @ 1000bff0 ==== 
 * signature: undefined __cdecl FUN_1000bff0(undefined * param_1)
 * body: 1000bff0-1000c057
 */

void __cdecl FUN_1000bff0(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    FUN_1000a320(9);
    pbVar1 = (byte *)FUN_1000d8a0(lpMem,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_1000d900(local_4,(int)param_1,pbVar1);
      FUN_1000a3a0(9);
      return;
    }
    FUN_1000a3a0(9);
    HeapFree(DAT_100183e4,0,lpMem);
  }
  return;
}


