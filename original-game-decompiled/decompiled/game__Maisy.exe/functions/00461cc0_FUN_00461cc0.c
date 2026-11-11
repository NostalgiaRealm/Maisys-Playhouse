
/* ==== FUN_00461cc0 @ 00461cc0 ==== 
 * signature: undefined __fastcall FUN_00461cc0(int * param_1)
 * body: 00461cc0-00461d97
 */

void __fastcall FUN_00461cc0(int *param_1)

{
  int iVar1;
  short sVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int **)((int)param_1 + 0x52) == (int *)0x0) {
    local_c = 0;
    local_8 = 0x640064;
    *(undefined4 *)((int)param_1 + 0xba) = 0;
    *(undefined4 *)((int)param_1 + 0xbe) = 0x640064;
    sVar2 = (**(code **)(*param_1 + 0x27c))();
    if (sVar2 == 0) {
      if (*(void **)((int)param_1 + 0x3a) == (void *)0x0) {
        *(undefined2 *)((int)param_1 + 0xbe) = (undefined2)DAT_004e020a;
        *(undefined2 *)(param_1 + 0x30) = DAT_004e020a._2_2_;
      }
      else {
        FUN_00408510(*(void **)((int)param_1 + 0x3a),&local_c);
        *(undefined4 *)((int)param_1 + 0xba) = local_c;
        *(undefined4 *)((int)param_1 + 0xbe) = local_8;
      }
    }
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x52) + 0x1e4))();
    (**(code **)(**(int **)((int)param_1 + 0x52) + 0x1dc))(&local_c);
    *(undefined4 *)((int)param_1 + 0xba) = local_c;
    *(undefined4 *)((int)param_1 + 0xbe) = local_8;
  }
  *(undefined2 *)((int)param_1 + 0xc2) = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x39c))((int)param_1 + 0xba);
  (**(code **)(iVar1 + 0x3a4))((int)param_1 + 0xba);
  return;
}


