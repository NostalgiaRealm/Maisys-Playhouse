
/* ==== FUN_0048988e @ 0048988e ==== 
 * signature: undefined __fastcall FUN_0048988e(undefined4 param_1, int param_2)
 * body: 0048988e-0048988f
 */

void __fastcall FUN_0048988e(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *in_EAX;
  char *pcVar4;
  char cVar5;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  bool in_SF;
  undefined8 uVar6;
  
  cVar5 = (char)((uint)param_1 >> 8);
  if (!in_SF) {
    *(char *)(unaff_ESI + -0x69) = *(char *)(unaff_ESI + -0x69) + (char)((uint)unaff_EBX >> 8);
    in_EAX[-0x69ffb76b] = in_EAX[-0x69ffb76b] + (char)param_2;
    in_EAX[param_2 * 4 + -0x685dffba] = in_EAX[param_2 * 4 + -0x685dffba] + (char)unaff_EBX;
    *(char *)(unaff_EDI + -0x51ffb76b) = *(char *)(unaff_EDI + -0x51ffb76b) + cVar5;
    pcVar4 = (char *)(unaff_EDI + -0x6845ffba + param_2 * 4);
    *pcVar4 = *pcVar4 + (char)((uint)param_2 >> 8);
    pcVar4 = (char *)(unaff_ESI + -1);
    *pcVar4 = *pcVar4 + (char)pcVar4;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *in_EAX = *in_EAX;
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + cVar5);
  pcVar1 = (code *)swi(4);
  if (SCARRY1((char)in_EAX,cVar5)) {
    uVar6 = (*pcVar1)();
    param_2 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (undefined4)uVar6;
  }
  if ((int)(CONCAT44(param_2,uVar2) / (longlong)unaff_EDI) != 0) {
    piVar3 = (int *)FUN_00409600(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
    (**(code **)(*piVar3 + 0x294))(unaff_EBP + -0x3c);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00489886();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


