
/* ==== FUN_00468910 @ 00468910 ==== 
 * signature: undefined __fastcall FUN_00468910(int * param_1)
 * body: 00468910-00468946
 */

void __fastcall FUN_00468910(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)((int)param_1 + 0x29) & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x4d) = 1;
    iVar1 = *param_1;
    (**(code **)(iVar1 + 0x23c))();
    (**(code **)(iVar1 + 0x148))(0);
    (**(code **)(iVar1 + 0x220))();
    (**(code **)(iVar1 + 0x224))();
    *(undefined1 *)((int)param_1 + 0x4d) = 0;
  }
  return;
}


