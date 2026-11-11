
/* ==== FUN_11017032 @ 11017032 ==== 
 * signature: undefined __fastcall FUN_11017032(int * param_1, int param_2)
 * body: 11017032-11017033
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_11017032(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)&stack0xfffffffc;
  cVar1 = '\x10';
  do {
    unaff_EBP = unaff_EBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_EBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  out(*unaff_ESI,(short)param_2);
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


