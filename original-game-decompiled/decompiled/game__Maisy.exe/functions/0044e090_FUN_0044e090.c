
/* ==== FUN_0044e090 @ 0044e090 ==== 
 * signature: undefined __fastcall FUN_0044e090(int * param_1)
 * body: 0044e090-0044e151
 */

void __fastcall FUN_0044e090(int *param_1)

{
  short sVar1;
  int *piVar2;
  
  if (DAT_004dbb14 == 0) {
    if ((int *)param_1[0x19] == (int *)0x0) {
      piVar2 = (int *)FUN_004308b0((void *)param_1[0x18],1);
      param_1[0x19] = (int)piVar2;
      if (piVar2 != (int *)0x0) {
        sVar1 = (**(code **)(*piVar2 + 0xd0))();
        if (sVar1 == 2) {
          (**(code **)(*param_1 + 0xe8))(param_1[0x19]);
          return;
        }
        if (sVar1 == 1) {
          (**(code **)(*(int *)param_1[0x19] + 0xe0))();
          FUN_00430790((void *)param_1[0x18],param_1[0x19]);
          param_1[0x19] = 0;
          return;
        }
      }
    }
    else {
      sVar1 = (**(code **)(*(int *)param_1[0x19] + 0xd4))();
      if (sVar1 == 1) {
        (**(code **)(*(int *)param_1[0x19] + 0xd8))();
        (**(code **)(*(int *)param_1[0x19] + 0xe0))();
        FUN_00430790((void *)param_1[0x18],param_1[0x19]);
        param_1[0x19] = 0;
        return;
      }
      if (sVar1 == 2) {
        (**(code **)(*param_1 + 0xe8))(param_1[0x19]);
      }
    }
  }
  return;
}


