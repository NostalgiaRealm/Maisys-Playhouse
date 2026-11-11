
/* ==== FUN_00477190 @ 00477190 ==== 
 * signature: undefined4 __cdecl FUN_00477190(int param_1)
 * body: 00477190-00477239
 */

undefined4 __cdecl FUN_00477190(int param_1)

{
  short sVar1;
  short *psVar2;
  void *this;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  
  iVar4 = *(int *)(param_1 + 0x16);
  psVar2 = *(short **)(param_1 + 0x1a);
  uVar6 = *(undefined4 *)(iVar4 + 8);
  piVar5 = *(int **)(iVar4 + 4);
  if (piVar5 == (int *)0x0) {
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  sVar1 = *psVar2;
  if (sVar1 == 0xe) {
    uVar3 = *(uint *)(psVar2 + 2);
    this = *(void **)(uVar3 + 2);
    if (this != (void *)0x0) {
      if ((char)psVar2[1] != '\0') {
        uVar3 = FUN_00414500(this,(int)(uVar3 + 2));
        return uVar3 & 0xffffff00;
      }
      uVar3 = FUN_0048b790(uVar3);
    }
    return uVar3 & 0xffffff00;
  }
  if (((sVar1 == 0) || (sVar1 == 4)) || (sVar1 == 10)) {
    iVar4 = FUN_0040c620(piVar5);
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_0040c620(piVar5);
      uVar6 = (**(code **)(*piVar5 + 0x78))(CONCAT22(extraout_var,*psVar2),uVar6,(char)psVar2[1]);
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
  }
  uVar6 = (**(code **)(*piVar5 + 0x78))(*psVar2,uVar6,(char)psVar2[1]);
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}


