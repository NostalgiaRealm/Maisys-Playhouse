
/* ==== FUN_11012800 @ 11012800 ==== 
 * signature: undefined __cdecl FUN_11012800(undefined4 * param_1, int param_2)
 * body: 11012800-11012859
 */

void __cdecl FUN_11012800(undefined4 *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  short local_30 [24];
  
  if (*(short *)(param_2 + 0x20) == 0x1b) {
    psVar2 = (short *)(*(int *)((int)param_1 + 0x1a) + 0x24);
    psVar3 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)psVar3 = *(undefined4 *)psVar2;
      psVar2 = psVar2 + 2;
      psVar3 = psVar3 + 2;
    }
    *psVar3 = *psVar2;
  }
  else {
    psVar2 = (short *)(param_2 + 0x20);
    psVar3 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)psVar3 = *(undefined4 *)psVar2;
      psVar2 = psVar2 + 2;
      psVar3 = psVar3 + 2;
    }
    *psVar3 = *psVar2;
  }
  FUN_11015490(param_1,local_30,*(undefined4 *)(param_2 + 0x4e),*(undefined4 *)(param_2 + 0x52));
  return;
}


