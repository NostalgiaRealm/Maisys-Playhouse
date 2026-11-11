
/* ==== FUN_00441290 @ 00441290 ==== 
 * signature: undefined __fastcall FUN_00441290(int * param_1)
 * body: 00441290-0044131c
 */

void __fastcall FUN_00441290(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 local_14 [4];
  short local_c [4];
  
  if ((*(byte *)((int)param_1 + 0x96) & 0x80) != 0) {
    cVar1 = FUN_004413d0((int)param_1);
    if (cVar1 != '\0') {
      FUN_004413b0();
      return;
    }
  }
  cVar1 = FUN_004413d0((int)param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_0043fd60((int)param_1);
    if (iVar2 != 0) {
      cVar1 = FUN_00440230(param_1,0x800);
      if (cVar1 != '\0') {
        cVar1 = FUN_00440230(param_1,0x1000);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x298))(local_c);
          FUN_00441da0(param_1,local_14);
          FUN_00441c20(param_1,local_c);
          FUN_00441320();
        }
      }
    }
  }
  return;
}


