
/* ==== FUN_140098c0 @ 140098c0 ==== 
 * signature: undefined4 __cdecl FUN_140098c0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 140098c0-140098f3
 */

undefined4 __cdecl FUN_140098c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_retaddr;
  
  iVar1 = (*DAT_1402642c)(*(undefined4 *)(param_1 + 2),param_2,param_3,0);
  *unaff_retaddr = iVar1;
  if (iVar1 != -1) {
    return 0;
  }
  *unaff_retaddr = 0;
                    /* WARNING: Could not recover jumptable at 0x140098ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_14026410)();
  return uVar2;
}


