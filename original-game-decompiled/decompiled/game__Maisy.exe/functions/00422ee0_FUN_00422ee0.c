
/* ==== FUN_00422ee0 @ 00422ee0 ==== 
 * signature: char __thiscall FUN_00422ee0(void * this, int param_1, char * param_2, undefined4 * param_3, undefined4 param_4, undefined2 * param_5)
 * body: 00422ee0-00422fb3
 */

char __thiscall
FUN_00422ee0(void *this,int param_1,char *param_2,undefined4 *param_3,undefined4 param_4,
            undefined2 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_10;
  char local_5;
  
  FUN_00430190((int)this);
  local_10 = 1;
  local_5 = '\0';
  if (0 < *(int *)((int)this + 0x26)) {
    do {
      if (local_5 != '\0') break;
      puVar1 = (undefined4 *)FUN_004301c0(this,local_10);
      if (puVar1[1] == param_1) {
        uVar2 = FUN_0043d430((char *)*puVar1,param_2);
        if (uVar2 == 0) {
          puVar4 = puVar1;
          puVar5 = param_3;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          local_5 = '\x01';
          if (param_5 != (undefined2 *)0x0) {
            *param_5 = (undefined2)local_10;
          }
        }
      }
      if (((local_5 == '\0') && ((char)param_4 != '\0')) && (puVar1[1] == 1)) {
        local_5 = (**(code **)(*(int *)puVar1[3] + 0x124))(param_1,param_2,param_3,param_4,0);
      }
      local_10 = local_10 + 1;
    } while (local_10 <= *(int *)((int)this + 0x26));
  }
  FUN_004301f0((int)this);
  return local_5;
}


