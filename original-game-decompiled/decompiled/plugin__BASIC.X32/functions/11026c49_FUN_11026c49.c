
/* ==== FUN_11026c49 @ 11026c49 ==== 
 * signature: undefined __fastcall FUN_11026c49(undefined4 param_1, undefined2 param_2)
 * body: 11026c49-11026c4b
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_11026c49(undefined4 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  uVar1 = in(param_2);
  unaff_EDI[1] = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


