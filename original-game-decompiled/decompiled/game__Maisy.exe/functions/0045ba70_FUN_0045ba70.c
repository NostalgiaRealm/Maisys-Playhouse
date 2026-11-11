
/* ==== FUN_0045ba70 @ 0045ba70 ==== 
 * signature: undefined __thiscall FUN_0045ba70(void * this, int * param_1)
 * body: 0045ba70-0045bab1
 */

void __thiscall FUN_0045ba70(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x26);
    piVar2 = (int *)FUN_00430190(iVar1);
    if (0 < iVar3) {
      do {
        FUN_0045b720(this,piVar2);
        iVar3 = iVar3 + -1;
        piVar2 = piVar2 + 2;
      } while (iVar3 != 0);
    }
    FUN_004301f0(*param_1);
  }
  return;
}


