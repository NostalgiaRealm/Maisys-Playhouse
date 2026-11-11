
/* ==== FUN_1000_0cce @ 1000:0cce ==== 
 * signature: undefined __cdecl16near FUN_1000_0cce(void)
 * body: 1000:0cce-1000:0d52
 */

undefined2 __cdecl16near
FUN_1000_0cce(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_8a;
  int local_86;
  undefined1 local_84 [114];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int *piStack_c;
  int *piStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  int local_4;
  
  local_4 = 0xcd7;
  FUN_1000_0364();
  if (param_5 == 0) {
    local_8a = param_2;
    local_4 = 0x10a;
    puStack_6 = (undefined1 *)0xcec;
    param_2 = FUN_1000_0848();
    if (param_2 == 0) {
      *(undefined2 *)0x7e = 8;
      return 0xffff;
    }
  }
  else {
    local_8a = 0;
  }
  local_4 = local_8a;
  puStack_6 = (undefined1 *)0x0;
  puStack_8 = local_84;
  piStack_a = &local_4;
  piStack_c = &local_86;
  uStack_e = param_4;
  uStack_10 = param_3;
  uStack_12 = 0xd24;
  iVar1 = FUN_1000_0988();
  if (iVar1 == -1) {
    return 0xffff;
  }
  puStack_6 = local_84;
  piStack_a = (int *)param_1;
  piStack_c = (int *)0xd39;
  puStack_8 = (undefined1 *)param_2;
  uVar2 = FUN_1000_0be6();
  local_4 = local_86;
  puStack_6 = (undefined1 *)0xd47;
  FUN_1000_109a();
  return uVar2;
}


