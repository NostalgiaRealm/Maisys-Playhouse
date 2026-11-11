
/* ==== FUN_004a570e @ 004a570e ==== 
 * signature: undefined4 __fastcall FUN_004a570e(void * param_1)
 * body: 004a570e-004a5737
 */

undefined4 __fastcall FUN_004a570e(void *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)((int)param_1 + 8);
  uVar2 = puVar1[2];
  puVar3 = (undefined4 *)puVar1[1];
  *(undefined4 **)((int)param_1 + 8) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  else {
    *puVar3 = 0;
  }
  FreeNode(param_1,puVar1);
  return uVar2;
}


