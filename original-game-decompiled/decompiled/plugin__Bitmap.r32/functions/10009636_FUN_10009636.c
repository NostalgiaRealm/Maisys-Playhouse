
/* ==== FUN_10009636 @ 10009636 ==== 
 * signature: undefined4 __fastcall FUN_10009636(undefined4 param_1, char param_2)
 * body: 10009636-10009637
 */

undefined4 __fastcall FUN_10009636(undefined4 param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  int in_EAX;
  char *unaff_EBP;
  char *unaff_ESI;
  
  *unaff_ESI = *unaff_ESI + param_2;
  *(char *)(in_EAX + -1) = *(char *)(in_EAX + -1) + param_2;
  cVar1 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + param_2;
  if (!SCARRY1(cVar1,param_2)) {
    *unaff_ESI = *unaff_ESI + param_2;
    return *(undefined4 *)(unaff_EBP + 8);
  }
  pcVar2 = (char *)CONCAT31((int3)((uint)unaff_ESI >> 8),(char)unaff_ESI + -0x6a);
  *pcVar2 = *pcVar2 + param_2;
  *unaff_EBP = *unaff_EBP + param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


