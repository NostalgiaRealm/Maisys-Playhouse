
/* ==== FUN_004230e0 @ 004230e0 ==== 
 * signature: char __thiscall FUN_004230e0(void * this, int param_1, int param_2, undefined4 * param_3)
 * body: 004230e0-0042314d
 */

char __thiscall FUN_004230e0(void *this,int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_5;
  
  iVar3 = 1;
  FUN_00430190((int)this);
  local_5 = '\0';
  if (0 < *(int *)((int)this + 0x26)) {
    do {
      if (local_5 != '\0') break;
      puVar1 = (undefined4 *)FUN_004301c0(this,iVar3);
      if ((puVar1[1] == param_1) && (puVar1[2] == param_2)) {
        puVar4 = param_3;
        for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar1 = puVar1 + 1;
        }
        local_5 = '\x01';
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)((int)this + 0x26));
  }
  FUN_004301f0((int)this);
  return local_5;
}


