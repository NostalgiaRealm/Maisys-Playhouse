
/* ==== FUN_0046ce90 @ 0046ce90 ==== 
 * signature: int __thiscall FUN_0046ce90(void * this, int * param_1)
 * body: 0046ce90-0046cec9
 */

int __thiscall FUN_0046ce90(void *this,int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x4e);
  if (iVar3 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x228);
    do {
      cVar2 = (*pcVar1)(iVar3);
      if (cVar2 != '\0') {
        return iVar3;
      }
      iVar3 = *(int *)(iVar3 + 0x3e);
    } while (iVar3 != 0);
  }
  return 0;
}


