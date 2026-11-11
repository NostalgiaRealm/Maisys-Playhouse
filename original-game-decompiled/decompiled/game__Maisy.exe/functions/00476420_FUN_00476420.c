
/* ==== FUN_00476420 @ 00476420 ==== 
 * signature: undefined __cdecl FUN_00476420(undefined4 param_1, int * param_2, int param_3)
 * body: 00476420-004764c8
 */

void __cdecl FUN_00476420(undefined4 param_1,int *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  undefined1 local_1c [16];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  bVar2 = FUN_0047a230(DAT_004da388);
  if (bVar2 == 0) {
    piVar3 = (int *)(**(code **)(*param_2 + 0x31c))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x244))();
    local_c = (undefined2)*(undefined4 *)(param_3 + 6);
    local_a = (undefined2)*(undefined4 *)(param_3 + 10);
    local_8 = (undefined2)*(undefined4 *)(param_3 + 0xe);
    local_6 = (undefined2)*(undefined4 *)(param_3 + 0x12);
    if (piVar3 != (int *)0x0) {
      uVar1 = *(uint *)((int)param_2 + 0x1e);
      FUN_0047a900(DAT_004da388);
      (**(code **)(*param_2 + 0x410))(local_1c);
      if ((uVar1 & 0x400000) == 0) {
        (**(code **)(*piVar3 + 0x21c))(DAT_004da388,&local_c,&local_c,&local_c,local_1c,0,0);
      }
    }
  }
  return;
}


