
/* ==== FUN_10017540 @ 10017540 ==== 
 * signature: undefined __cdecl FUN_10017540(int param_1, int param_2, byte * param_3)
 * body: 10017540-10017592
 */

void __cdecl FUN_10017540(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_100233d4 = DAT_100233d4 + 1, DAT_100233d4 == 0x20)) {
    FUN_10017410(0x10);
  }
  return;
}


