
/* ==== FUN_0048acb0 @ 0048acb0 ==== 
 * signature: char __thiscall FUN_0048acb0(void * this, int * param_1, undefined4 * param_2, undefined1 * param_3)
 * body: 0048acb0-0048ad8e
 */

char __thiscall FUN_0048acb0(void *this,int *param_1,undefined4 *param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int *piVar3;
  undefined3 extraout_var_00;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_2c [28];
  int local_10;
  int *local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_3 == (undefined1 *)0x0) {
    param_3 = local_2c;
  }
  bVar1 = FUN_00437430((int *)((int)this + 0x4a),param_1);
  if ((CONCAT31(extraout_var,bVar1) != 0) &&
     (uVar2 = FUN_00430370(this,*(int *)((int)this + 0x5c),param_3), (char)uVar2 != '\0')) {
    *param_2 = *(undefined4 *)(param_3 + 0x12);
    return '\x01';
  }
  local_10 = *(int *)((int)this + 0x26);
  iVar5 = 0;
  piVar3 = (int *)FUN_00430190((int)this);
  local_c = piVar3;
  if (0 < local_10) {
    do {
      bVar1 = FUN_00437430(piVar3,param_1);
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        local_5 = '\x01';
        puVar4 = (undefined4 *)((int)local_c + iVar5 * 0x1a);
        *param_2 = *(undefined4 *)((int)puVar4 + 0x12);
        *(int *)((int)this + 0x5c) = iVar5 + 1;
        FUN_004374c0((undefined4 *)((int)this + 0x4a),puVar4);
        break;
      }
      piVar3 = (int *)((int)piVar3 + 0x1a);
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_10);
  }
  FUN_004301f0((int)this);
  if (local_5 != '\0') {
    FUN_00430370(this,*(int *)((int)this + 0x5c),param_3);
  }
  return local_5;
}


