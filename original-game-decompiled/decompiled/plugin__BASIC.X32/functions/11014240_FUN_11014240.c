
/* ==== FUN_11014240 @ 11014240 ==== 
 * signature: undefined __cdecl FUN_11014240(undefined4 * param_1, int param_2)
 * body: 11014240-110142e5
 */

void __cdecl FUN_11014240(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  if (param_2 != 0) {
    FUN_11013e60();
    psVar4 = *(short **)(param_2 + 0x10);
    iVar2 = *(int *)(param_2 + 8);
    if (0 < iVar2) {
      do {
        if (*psVar4 == 0x191) {
          if (psVar4[3] == 0xf) {
            FUN_11014cf0(param_1,(undefined4 *)(psVar4 + 4));
          }
          if (psVar4[3] == 0x1fa) {
            FUN_11014cf0(param_1,(undefined4 *)(psVar4 + 4));
          }
        }
        psVar4 = (short *)((int)psVar4 + (int)psVar4[2]);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if ((*(int *)(param_2 + 0x14) != 0) && (iVar2 = 0, 0 < *(int *)(param_2 + 0x14))) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = *(int *)(param_2 + 0x1c) + iVar3;
        iVar3 = iVar3 + 0xe;
        FUN_11014cf0(param_1,(undefined4 *)(iVar1 + 6));
        *(undefined4 *)(*(int *)(param_2 + 0x1c) + -0xc + iVar3) = 0;
      } while (iVar2 < *(int *)(param_2 + 0x14));
    }
    FUN_11013e70();
  }
  return;
}


