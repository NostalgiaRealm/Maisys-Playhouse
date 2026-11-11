
/* ==== FUN_00452ee0 @ 00452ee0 ==== 
 * signature: undefined4 __cdecl FUN_00452ee0(int param_1, int * param_2, int param_3, int * param_4, undefined4 param_5)
 * body: 00452ee0-004530b7
 */

undefined4 __cdecl
FUN_00452ee0(int param_1,int *param_2,int param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  int *this;
  undefined2 local_7c [24];
  short local_4c [24];
  int local_1c [2];
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = (int)*(short *)(param_3 + 2);
  piVar6 = (int *)(*(int *)(param_3 + 0x18) + 0x1c + param_3);
  this = (int *)0x0;
  if ((*param_2 == 0) && ((char)param_5 != '\0')) {
    piVar2 = FUN_0041f760(DAT_004da380,param_1,(int)*(short *)(param_3 + 0x16));
    *param_2 = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      return 0x10000;
    }
    (**(code **)(*piVar2 + 0x74))(param_3 + 0x1c);
  }
  local_c = 0;
  if (0 < local_8) {
    do {
      local_10 = *(int *)((int)piVar6 + 0x16);
      if ((void *)*param_2 != (void *)0x0) {
        this = FUN_0040b2d0((void *)*param_2,(byte *)((int)piVar6 + 0x1e));
      }
      if (this == (int *)0x0) {
        if (((*param_2 != 0) && (*(short *)(*param_2 + 0x22) == 0x51)) && (*piVar6 < 0)) {
          this = FUN_0041f760(DAT_004da380,param_1,-*piVar6);
          if (this == (int *)0x0) {
            return 0x10000;
          }
          (**(code **)(*this + 0x74))((byte *)((int)piVar6 + 0x1e));
          FUN_00424600((void *)*param_2,this,'\x01');
        }
        if (this != (int *)0x0) goto LAB_00452fb7;
      }
      else {
LAB_00452fb7:
        if ((*(byte *)((int)this + 0x1e) & 0x80) == 0) {
          if ((this != (int *)0x0) && (*(short *)((int)this + 0x22) == 0x51)) {
            local_1c[1] = 0;
            local_14 = this;
            FUN_00452ee0(0,(int *)&local_14,*(int *)((int)piVar6 + 0x1a) + param_3,local_1c + 1,
                         param_5);
          }
        }
        else {
          iVar1 = *piVar6;
          if (iVar1 < 0) {
            iVar3 = (**(code **)(*this + 0x244))();
            if (iVar3 + iVar1 == 0) {
              FUN_00452cd0(0,this,(undefined4 *)local_4c,
                           (undefined4 *)(*(int *)((int)piVar6 + 0x1a) + param_3));
              uVar4 = FUN_004166b0(local_4c,local_7c);
              if ((char)uVar4 != '\0') {
                FUN_00474c50(this,0,local_7c);
              }
              pcVar5 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,local_1c);
              DAT_004e34cc = (*pcVar5)(local_1c[0],0xffffffff,local_4c);
            }
          }
        }
      }
      local_c = local_c + 1;
      piVar6 = (int *)((int)piVar6 + local_10 + 0x1e);
    } while (local_c < local_8);
  }
  *param_4 = (int)piVar6 - param_3;
  return 0;
}


