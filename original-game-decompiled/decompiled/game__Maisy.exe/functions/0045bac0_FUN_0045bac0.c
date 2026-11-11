
/* ==== FUN_0045bac0 @ 0045bac0 ==== 
 * signature: undefined __thiscall FUN_0045bac0(void * this, int * param_1)
 * body: 0045bac0-0045bb02
 */

void __thiscall FUN_0045bac0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)this != 0) && (iVar1 = *param_1, iVar1 != 0)) {
    iVar3 = *(int *)(iVar1 + 0x26);
    piVar2 = (int *)FUN_00430190(iVar1);
    if (0 < iVar3) {
      do {
        FUN_0045b890(this,piVar2);
        iVar3 = iVar3 + -1;
        piVar2 = piVar2 + 2;
      } while (iVar3 != 0);
    }
    FUN_004301f0(*param_1);
  }
  return;
}


