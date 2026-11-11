
/* ==== FUN_10002f00 @ 10002f00 ==== 
 * signature: int __cdecl FUN_10002f00(int param_1, LPCVOID param_2)
 * body: 10002f00-10002f7e
 */

int __cdecl FUN_10002f00(int param_1,LPCVOID param_2)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  iVar2 = 0x10000;
  if ((*(int *)((int)param_2 + 0xc) == *(int *)(param_1 + 2)) &&
     (*(int *)((int)param_2 + 0x10) == *(int *)(param_1 + 6))) {
    if (*(short *)(param_1 + 0x12) == 0x6e) {
      *(int *)(param_1 + 0x6a) = (int)param_2 + 0x26;
    }
    else {
      *(int *)(param_1 + 0x6a) = param_1 + 0x12;
    }
    iVar2 = FUN_10002f80(param_1,&param_2);
    if (iVar2 == 0) {
      FUN_100034a0(param_1,param_2);
      pvVar1 = GlobalHandle(param_2);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_2);
      GlobalFree(pvVar1);
    }
  }
  return iVar2;
}


