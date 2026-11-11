
/* ==== FUN_00442a50 @ 00442a50 ==== 
 * signature: undefined __fastcall FUN_00442a50(int * param_1)
 * body: 00442a50-00442ae5
 */

void __fastcall FUN_00442a50(int *param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0042b5f0((int)param_1);
  if (*(char *)((int)param_1 + 0x8e) == '\0') {
    if ((char)param_1[0x23] != '\0') {
      FUN_00426900((int)param_1 + 0x82);
    }
  }
  else {
    local_c = *(undefined4 *)((int)param_1 + 0x86);
    local_10 = *(undefined4 *)((int)param_1 + 0x82);
    local_8 = *(undefined4 *)((int)param_1 + 0x8a);
    iVar1 = (**(code **)(*param_1 + 0x244))();
    if (iVar1 != 0) {
      FUN_00421910(*(void **)((int)param_1 + 0x3a),(int)&local_10);
    }
    *(undefined1 *)((int)param_1 + 0x8e) = 0;
    *(undefined4 *)((int)param_1 + 0x82) = local_10;
    *(undefined4 *)((int)param_1 + 0x86) = local_c;
    *(undefined4 *)((int)param_1 + 0x8a) = local_8;
  }
  FUN_00442b40();
  return;
}


