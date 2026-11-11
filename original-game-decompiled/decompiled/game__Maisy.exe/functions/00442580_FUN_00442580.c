
/* ==== FUN_00442580 @ 00442580 ==== 
 * signature: undefined __fastcall FUN_00442580(int * param_1)
 * body: 00442580-00442645
 */

void __fastcall FUN_00442580(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_28 [16];
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004749f0();
  if (*(int *)((int)param_1 + 0x42) != 0) {
    iVar2 = *param_1;
    iVar1 = (**(code **)(iVar2 + 0x244))();
    if (iVar1 != 0) {
      local_c = *(undefined4 *)((int)param_1 + 0x86);
      local_10 = *(undefined4 *)((int)param_1 + 0x82);
      local_8 = *(undefined4 *)((int)param_1 + 0x8a);
      (**(code **)(iVar2 + 0x298))(local_18);
      (**(code **)(**(int **)((int)param_1 + 0x3e) + 0x410))(local_28);
      iVar2 = FUN_0041ed90((int)param_1);
      FUN_004084c0(iVar2);
      FUN_004218d0(*(void **)((int)param_1 + 0x3a));
      *(undefined4 *)((int)param_1 + 0x82) = local_10;
      *(undefined4 *)((int)param_1 + 0x86) = local_c;
      *(undefined4 *)((int)param_1 + 0x8a) = local_8;
      (**(code **)(**(int **)((int)param_1 + 0x3e) + 0xc4))(0,1);
    }
  }
  *(undefined1 *)((int)param_1 + 0x8e) = 1;
  return;
}


