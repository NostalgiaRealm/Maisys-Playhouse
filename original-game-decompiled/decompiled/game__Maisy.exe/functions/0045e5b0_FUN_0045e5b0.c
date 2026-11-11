
/* ==== FUN_0045e5b0 @ 0045e5b0 ==== 
 * signature: undefined4 __fastcall FUN_0045e5b0(int * param_1)
 * body: 0045e5b0-0045e605
 */

undefined4 __fastcall FUN_0045e5b0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short local_6;
  
  iVar1 = *param_1;
  iVar2 = (**(code **)(iVar1 + 0x148))
                    (s_bootstream_004dc180,
                     CONCAT22((short)((uint)&local_6 >> 0x10),*(undefined2 *)((int)param_1 + 0x36)),
                     *(undefined4 *)(*(int *)((int)param_1 + 0x2e) + 0x26),1,&local_6);
  if (iVar2 == 0) {
    uVar3 = FUN_00458a00(*(int *)((int)param_1 + 0x26));
    uVar3 = (**(code **)(iVar1 + 0x138))((int)local_6,uVar3);
    return uVar3;
  }
  return 0x10000;
}


