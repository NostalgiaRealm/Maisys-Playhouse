
/* ==== FUN_0040c620 @ 0040c620 ==== 
 * signature: undefined4 __fastcall FUN_0040c620(int * param_1)
 * body: 0040c620-0040c632
 */

undefined4 __fastcall FUN_0040c620(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x82);
}


