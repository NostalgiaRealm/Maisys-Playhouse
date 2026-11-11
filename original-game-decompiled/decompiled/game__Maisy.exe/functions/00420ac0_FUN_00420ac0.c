
/* ==== FUN_00420ac0 @ 00420ac0 ==== 
 * signature: undefined4 __fastcall FUN_00420ac0(int * param_1)
 * body: 00420ac0-00420add
 */

undefined4 __fastcall FUN_00420ac0(int *param_1)

{
  undefined4 in_EAX;
  undefined2 uVar1;
  undefined2 extraout_var;
  
  uVar1 = (undefined2)((uint)in_EAX >> 0x10);
  if (*(short *)((int)param_1 + 0x186) == 0) {
    (**(code **)(*param_1 + 0x114))();
    uVar1 = extraout_var;
  }
  return CONCAT22(uVar1,*(undefined2 *)((int)param_1 + 0x186));
}


