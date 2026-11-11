
/* ==== FUN_11010ff1 @ 11010ff1 ==== 
 * signature: undefined __fastcall FUN_11010ff1(int * param_1, int param_2)
 * body: 11010ff1-11010ff3
 */

void __fastcall FUN_11010ff1(int *param_1,int param_2)

{
  code *pcVar1;
  int in_EAX;
  byte *unaff_EDI;
  int *piStack_4;
  
  piStack_4 = param_1;
  GlobalDescriptorTableRegister(*param_1);
  *unaff_EDI = *unaff_EDI | 1;
  *(int *)((int)param_1 + 0xf) = *(int *)((int)param_1 + 0xf) + param_2;
  *param_1 = *param_1 + param_2;
  GlobalDescriptorTableRegister(*param_1);
  *param_1 = *param_1 + param_2;
  *(char *)((int)&piStack_4 + in_EAX) = *(char *)((int)&piStack_4 + in_EAX) + (char)in_EAX;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


