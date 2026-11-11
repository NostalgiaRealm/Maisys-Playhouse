
/* ==== FUN_004393b0 @ 004393b0 ==== 
 * signature: char __thiscall FUN_004393b0(void * this, int * param_1, undefined4 * param_2, char param_3)
 * body: 004393b0-0043947e
 */

char __thiscall FUN_004393b0(void *this,int *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  undefined3 extraout_var_00;
  int iVar4;
  char local_5;
  
  local_5 = '\0';
  if ((*(int **)((int)this + 0x4a) == (int *)0x0) ||
     (bVar2 = FUN_00437430(*(int **)((int)this + 0x4a),param_1), CONCAT31(extraout_var,bVar2) == 0))
  {
    iVar4 = 1;
    FUN_00430190((int)this);
    if (0 < *(int *)((int)this + 0x26)) {
      do {
        puVar3 = (undefined4 *)FUN_004301c0(this,iVar4);
        bVar2 = FUN_00437430((int *)*puVar3,param_1);
        if (CONCAT31(extraout_var_00,bVar2) != 0) {
          uVar1 = puVar3[1];
          *param_2 = *puVar3;
          param_2[1] = uVar1;
          *(undefined4 *)((int)this + 0x4a) = *puVar3;
          *(undefined4 *)((int)this + 0x4e) = puVar3[1];
          if ((param_3 == '\0') || ((*(byte *)(param_2 + 1) & 1) == 0)) {
            local_5 = '\x01';
          }
          else {
            local_5 = '\0';
          }
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)((int)this + 0x26));
    }
    FUN_004301f0((int)this);
  }
  else {
    uVar1 = *(undefined4 *)((int)this + 0x4e);
    local_5 = '\x01';
    *param_2 = *(undefined4 *)((int)this + 0x4a);
    param_2[1] = uVar1;
  }
  if (((local_5 != '\0') && (param_3 != '\0')) && ((*(byte *)(param_2 + 1) & 1) != 0)) {
    local_5 = '\0';
  }
  return local_5;
}


