
/* ==== FUN_0040ee25 @ 0040ee25 ==== 
 * signature: undefined __fastcall FUN_0040ee25(uint * param_1, undefined4 * param_2)
 * body: 0040ee25-0040ee27
 */

void __fastcall FUN_0040ee25(uint *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined4 in_EAX;
  int iVar4;
  undefined2 uVar5;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  bool in_CF;
  
  if (in_CF) {
    *(char *)(unaff_ESI + -0x66ffbf14) = *(char *)(unaff_ESI + -0x66ffbf14) + (char)in_EAX + '\x01';
    in((short)param_2);
    (&stack0xecbf0040)[unaff_EBP * 8] =
         (&stack0xecbf0040)[unaff_EBP * 8] + (char)((uint)param_1 >> 8);
    cVar2 = (char)param_2 * '\x02';
    uVar5 = (undefined2)CONCAT31((int3)((uint)param_2 >> 8),cVar2);
    in(uVar5);
    cVar3 = in(uVar5);
    cRam0a0040ee = cRam0a0040ee + cVar2;
    out(uVar5,cVar3 + '\x01');
    in(uVar5);
    in(uVar5);
    in(uVar5);
    uVar5 = CONCAT11((char)((uint)param_2 >> 8) + (char)unaff_EBX,cVar2);
    in(uVar5);
    iVar4 = in(uVar5);
    pcVar1 = (char *)((int)&PTR_PTR_004be160 + iVar4 + 1);
    *pcVar1 = *pcVar1 + (char)((uint)unaff_EBX >> 8) * '\x02';
    return;
  }
  *param_1 = *param_1 << 0x14 | *param_1 >> 0xc;
  *param_2 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + -0x75);
  return;
}


