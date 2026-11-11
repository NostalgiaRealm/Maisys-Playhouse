
/* ==== FUN_10015a50 @ 10015a50 ==== 
 * signature: undefined __cdecl FUN_10015a50(undefined * param_1)
 * body: 10015a50-10015ab7
 */

void __cdecl FUN_10015a50(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    FUN_10016e20(9);
    pbVar1 = (byte *)FUN_100174e0(lpMem,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_10017540(local_4,(int)param_1,pbVar1);
      FUN_10016ea0(9);
      return;
    }
    FUN_10016ea0(9);
    HeapFree(DAT_1002532c,0,lpMem);
  }
  return;
}


