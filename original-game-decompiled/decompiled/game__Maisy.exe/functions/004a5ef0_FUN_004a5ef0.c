
/* ==== FUN_004a5ef0 @ 004a5ef0 ==== 
 * signature: undefined4 __thiscall FUN_004a5ef0(void * this, uchar * param_1)
 * body: 004a5ef0-004a5f5a
 */

undefined4 __thiscall FUN_004a5ef0(void *this,uchar *param_1)

{
  undefined4 *puVar1;
  uchar uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = 0;
    uVar2 = *param_1;
    puVar6 = param_1;
    while (uVar2 != '\0') {
      uVar4 = uVar4 * 0x21 + (int)(char)*puVar6;
      puVar6 = puVar6 + 1;
      uVar2 = *puVar6;
    }
    puVar1 = (undefined4 *)(*(int *)((int)this + 4) + (uVar4 % *(uint *)((int)this + 8)) * 4);
    for (puVar3 = (undefined4 *)*puVar1; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3
        ) {
      iVar5 = __mbscmp((uchar *)puVar3[2],param_1);
      if (iVar5 == 0) {
        *puVar1 = *puVar3;
        FUN_004a5daa(this,puVar3);
        return 1;
      }
      puVar1 = puVar3;
    }
  }
  return 0;
}


