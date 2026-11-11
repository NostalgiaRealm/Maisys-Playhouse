
/* ==== FUN_1100ad59 @ 1100ad59 ==== 
 * signature: undefined1 __fastcall FUN_1100ad59(byte * param_1, undefined4 * param_2)
 * body: 1100ad59-1100ad5b
 */

/* WARNING: Control flow encountered bad instruction data */

undefined1 __fastcall FUN_1100ad59(byte *param_1,undefined4 *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 *in_EAX;
  byte bVar4;
  undefined1 unaff_BL;
  int unaff_ESI;
  
  bVar4 = (byte)param_2;
  *param_1 = *param_1 + bVar4;
  uVar3 = *(undefined1 *)(unaff_ESI + 1);
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar4;
  if (!CARRY1(bVar2,bVar4) && *param_1 != 0) {
    bVar2 = *param_1;
    *param_1 = *param_1 + bVar4;
    piVar1 = (int *)(*(int *)(CONCAT31((int3)((uint)in_EAX >> 8),uVar3) * 2 + 0xac9d11) +
                    -0x17eeff54);
    *piVar1 = (int)(&stack0xfffffffc + (uint)CARRY1(bVar2,bVar4) + *piVar1);
    *param_1 = *param_1 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_1100af70(param_2,unaff_ESI + 2,in_EAX);
  return unaff_BL;
}


