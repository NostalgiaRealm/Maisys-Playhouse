
/* ==== FUN_00449f7e @ 00449f7e ==== 
 * signature: undefined4 __fastcall FUN_00449f7e(int param_1, int param_2, undefined4 param_3, undefined2 * param_4, undefined2 param_5)
 * body: 00449f7e-00449f7f
 */

undefined4 __fastcall
FUN_00449f7e(int param_1,int param_2,undefined4 param_3,undefined2 *param_4,short param_5)

{
  code *pcVar1;
  undefined3 uVar3;
  char *in_EAX;
  undefined4 uVar2;
  int unaff_EBX;
  bool in_CF;
  
  if (!in_CF) {
    *(char *)(param_1 + -0x61) = *(char *)(param_1 + -0x61) + (char)param_1;
    *(char *)(unaff_EBX + -0x61) = *(char *)(unaff_EBX + -0x61) + (char)unaff_EBX;
    *(char *)(param_2 + -0x61) = *(char *)(param_2 + -0x61) + (char)((uint)param_2 >> 8);
    *(char *)(unaff_EBX + -0x61) = *(char *)(unaff_EBX + -0x61) + (char)in_EAX;
    *in_EAX = *in_EAX + (char)in_EAX;
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar3 = (undefined3)((uint)param_4 >> 8);
  switch(param_5) {
  case 1:
  case 0x1e:
    *param_4 = param_5;
    return CONCAT31(uVar3,1);
  default:
    return (int)param_5 - 1U & 0xffffff00;
  case 0x15:
    *param_4 = param_5;
    *(double *)(param_4 + 1) = (double)*(int *)(param_4 + 1);
    return CONCAT31(uVar3,1);
  case 0x1a:
    *param_4 = param_5;
    *(char *)(param_4 + 1) = '\x01' - (*(int *)(param_4 + 1) == 0);
    return CONCAT31(uVar3,1);
  }
}


