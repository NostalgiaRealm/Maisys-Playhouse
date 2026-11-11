
/* ==== FUN_11014f51 @ 11014f51 ==== 
 * signature: undefined __fastcall FUN_11014f51(uint * param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5)
 * body: 11014f51-11014f53
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall
FUN_11014f51(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  bool in_CF;
  bool in_ZF;
  int in_stack_0000001c;
  undefined2 in_stack_00000020;
  
  if (in_CF || in_ZF) {
    uVar1 = *param_1;
    *param_1 = *param_1 + param_2;
    piVar3 = (int *)CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)((int)unaff_ESI + 1));
    *(int *)(unaff_EBP + -0x50eefeb2) =
         *(int *)(unaff_EBP + -0x50eefeb2) + unaff_EBX + (uint)CARRY4(uVar1,param_2);
    *piVar3 = *piVar3 + param_2;
    *unaff_ESI = *unaff_ESI >> 0x11 | *unaff_ESI << 0xf;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_stack_0000001c == 0) {
    *(undefined4 *)((int)unaff_ESI + 10) = 0;
  }
  else {
    uVar2 = FUN_110024d0(param_5,in_stack_0000001c);
    *(undefined4 *)((int)unaff_ESI + 10) = uVar2;
  }
  *(undefined2 *)((int)unaff_ESI + 0xe) = in_stack_00000020;
  return;
}


