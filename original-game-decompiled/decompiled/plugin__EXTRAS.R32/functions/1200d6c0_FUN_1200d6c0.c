
/* ==== FUN_1200d6c0 @ 1200d6c0 ==== 
 * signature: undefined __cdecl FUN_1200d6c0(int param_1, int * param_2)
 * body: 1200d6c0-1200d745
 */

void __cdecl FUN_1200d6c0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_4;
  
  FUN_1200d620(param_1,&local_4,4);
  local_4 = (local_4 & 0xff00 | local_4 << 0x10) << 8 | (local_4 & 0xff0000 | local_4 >> 0x10) >> 8;
  iVar1 = FUN_12015e60(local_4);
  if (iVar1 != 0) {
    uVar2 = FUN_12015f80(iVar1);
    FUN_1200d620(param_1,uVar2,local_4);
    FUN_12015fd0(iVar1);
  }
  *param_2 = iVar1;
  return;
}


