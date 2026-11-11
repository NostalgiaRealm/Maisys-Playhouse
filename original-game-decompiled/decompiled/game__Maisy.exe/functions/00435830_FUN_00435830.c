
/* ==== FUN_00435830 @ 00435830 ==== 
 * signature: undefined4 __thiscall FUN_00435830(void * this, int param_1, int param_2)
 * body: 00435830-00435898
 */

undefined4 __thiscall FUN_00435830(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_24 [6];
  int local_c;
  undefined4 local_8;
  
  local_8 = 0x10000;
  for (iVar2 = *(int *)(*(int *)((int)this + 0x7250) + 0x26); 0 < iVar2; iVar2 = iVar2 + -1) {
    uVar1 = FUN_00430370(*(void **)((int)this + 0x7250),iVar2,local_24);
    if ((((char)uVar1 != '\0') && (local_24[0] == param_1)) && (local_c == param_2)) {
      FUN_00430090(*(void **)((int)this + 0x7250),iVar2);
      local_8 = 0;
    }
  }
  return local_8;
}


