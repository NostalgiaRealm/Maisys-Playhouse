
/* ==== FUN_0044b950 @ 0044b950 ==== 
 * signature: undefined4 __fastcall FUN_0044b950(int * param_1)
 * body: 0044b950-0044b97d
 */

undefined4 __fastcall FUN_0044b950(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x244);
  iVar2 = (*pcVar1)();
  uVar4 = 0;
  if (iVar2 != 0) {
    piVar3 = (int *)(*pcVar1)();
    uVar4 = (**(code **)(*piVar3 + 0x220))();
    if ((char)uVar4 != '\0') {
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}


