
/* ==== FUN_00471ac0 @ 00471ac0 ==== 
 * signature: undefined4 __cdecl FUN_00471ac0(int param_1, char param_2)
 * body: 00471ac0-00471b02
 */

undefined4 __cdecl FUN_00471ac0(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)FUN_0048b560(0,param_1);
  iVar1 = *(int *)*puVar2;
  uVar3 = (**(code **)(iVar1 + 0x128))();
  if (param_2 == '\0') {
    uVar3 = uVar3 & 0xffff7fff;
  }
  else {
    uVar3 = uVar3 | 0x8000;
  }
  (**(code **)(iVar1 + 0x124))(uVar3,0);
  return 0;
}


