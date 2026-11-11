
/* ==== FUN_004231d0 @ 004231d0 ==== 
 * signature: char __thiscall FUN_004231d0(void * this, int param_1, int param_2, int param_3, undefined4 * param_4, undefined4 param_5)
 * body: 004231d0-00423279
 */

char __thiscall
FUN_004231d0(void *this,int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char local_5;
  
  iVar3 = 1;
  FUN_00430190((int)this);
  local_5 = '\0';
  if (0 < *(int *)((int)this + 0x26)) {
    do {
      if (local_5 != '\0') break;
      puVar1 = (undefined4 *)FUN_004301c0(this,iVar3);
      if (((puVar1[1] == param_1) && (puVar1[2] == param_2)) && (puVar1[3] == param_3)) {
        if (param_4 != (undefined4 *)0x0) {
          puVar4 = puVar1;
          puVar5 = param_4;
          for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        local_5 = '\x01';
      }
      if ((local_5 == '\0') && (puVar1[1] == 1)) {
        local_5 = (**(code **)(*(int *)puVar1[3] + 0x11c))(param_1,param_2,param_3,param_4,param_5);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)((int)this + 0x26));
  }
  FUN_004301f0((int)this);
  return local_5;
}


