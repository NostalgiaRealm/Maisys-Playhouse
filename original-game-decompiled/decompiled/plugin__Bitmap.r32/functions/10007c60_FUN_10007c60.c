
/* ==== FUN_10007c60 @ 10007c60 ==== 
 * signature: int __cdecl FUN_10007c60(undefined4 * param_1, SIZE_T param_2)
 * body: 10007c60-10007cd4
 */

int __cdecl FUN_10007c60(undefined4 *param_1,SIZE_T param_2)

{
  SIZE_T SVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  SVar1 = GlobalSize((HGLOBAL)*param_1);
  if (param_2 == 0) {
    param_2 = 1;
  }
  hMem = GlobalAlloc(0x40,param_2);
  if (0 < (int)SVar1) {
    if ((int)SVar1 < (int)param_2) {
      param_2 = SVar1;
    }
    puVar2 = GlobalLock((HGLOBAL)*param_1);
    puVar3 = GlobalLock(hMem);
    FUN_100094f0(puVar3,puVar2,param_2);
    GlobalUnlock(hMem);
    GlobalUnlock((HGLOBAL)*param_1);
  }
  GlobalFree((HGLOBAL)*param_1);
  *param_1 = hMem;
  return (hMem != (HGLOBAL)0x0) - 1;
}


