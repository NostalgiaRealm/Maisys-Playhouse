
/* ==== FUN_00489fb0 @ 00489fb0 ==== 
 * signature: int __thiscall FUN_00489fb0(void * this, char * param_1, undefined4 * param_2)
 * body: 00489fb0-0048a035
 */

int __thiscall FUN_00489fb0(void *this,char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  iVar1 = FUN_00489f20(this);
  puVar2 = (undefined4 *)FUN_00430190(iVar1);
  local_8 = -1;
  puVar4 = puVar2;
  if (0 < *(int *)(*(int *)this + 0x26)) {
    do {
      uVar3 = FUN_0043d430((char *)*puVar4,param_1);
      if (uVar3 == 0) {
        local_8 = iVar5;
        if (param_2 != (undefined4 *)0x0) {
          puVar2 = puVar2 + iVar5 * 4;
          *param_2 = *puVar2;
          param_2[1] = puVar2[1];
          param_2[2] = puVar2[2];
          param_2[3] = puVar2[3];
        }
        break;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar5 < *(int *)(*(int *)this + 0x26));
  }
  FUN_004301f0(*(int *)this);
  return local_8;
}


