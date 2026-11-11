
/* ==== FUN_00416290 @ 00416290 ==== 
 * signature: undefined1 __cdecl FUN_00416290(int * param_1, short * param_2)
 * body: 00416290-00416386
 */

undefined1 __cdecl FUN_00416290(int *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  void *this;
  short *psVar3;
  short *psVar4;
  undefined2 local_a0 [22];
  short local_74 [22];
  short local_48 [24];
  undefined1 local_18 [19];
  undefined1 local_5;
  
  this = (void *)0x0;
  local_5 = 0;
  if ((*(byte *)((int)param_1 + 0x1e) & 0x80) != 0) {
    iVar2 = (**(code **)(*param_1 + 0x244))();
    if (iVar2 != 0x33e) {
      sVar1 = *param_2;
      if (((sVar1 == 0x1c) || (sVar1 == 0x19)) || (sVar1 == 4)) {
        this = *(void **)(param_2 + 1);
      }
      if (this != (void *)0x0) {
        if ((*(byte *)((int)this + 0x1e) & 0x80) != 0) {
          FUN_00474bd0(this,param_1,local_48,0x17);
          if ((local_48[0] != 0x17) && (local_48[0] != 0)) {
            psVar3 = local_48;
            psVar4 = param_2;
            for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(undefined4 *)psVar4 = *(undefined4 *)psVar3;
              psVar3 = psVar3 + 2;
              psVar4 = psVar4 + 2;
            }
            *psVar4 = *psVar3;
            local_5 = 1;
          }
        }
        if ((this != (void *)0x0) && ((*(byte *)((int)this + 0x21) & 0x20) != 0)) {
          FUN_0048b370((int)local_18,0x4d9e88);
          local_74[0] = 0x6a;
          local_a0[0] = 0;
          iVar2 = (**(code **)(**(int **)(param_2 + 1) + 0x98))(local_18,local_a0,local_74);
          if (iVar2 == 0) {
            FUN_004166b0(local_74,param_2);
            local_5 = 1;
          }
        }
      }
    }
  }
  return local_5;
}


