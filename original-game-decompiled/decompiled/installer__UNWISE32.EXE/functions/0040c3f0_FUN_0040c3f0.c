
/* ==== FUN_0040c3f0 @ 0040c3f0 ==== 
 * signature: undefined __cdecl FUN_0040c3f0(int param_1, int param_2, byte * param_3)
 * body: 0040c3f0-0040c442
 */

void __cdecl FUN_0040c3f0(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_004134bc = DAT_004134bc + 1, DAT_004134bc == 0x20)) {
    FUN_0040c2c0(0x10);
  }
  return;
}


