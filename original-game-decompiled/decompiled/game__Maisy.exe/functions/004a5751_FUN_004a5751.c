
/* ==== FUN_004a5751 @ 004a5751 ==== 
 * signature: undefined __stdcall FUN_004a5751(void)
 * body: 004a5751-004a5778
 */

void FUN_004a5751(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBP;
  void *unaff_ESI;
  
  piVar1 = (int *)(in_EAX + 4);
  iVar2 = NewNode(unaff_ESI,*piVar1,in_EAX);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(unaff_EBP + 0xc);
  if ((int *)*piVar1 == (int *)0x0) {
    *(int *)((int)unaff_ESI + 4) = iVar2;
  }
  else {
    *(int *)*piVar1 = iVar2;
  }
  *piVar1 = iVar2;
  return;
}


