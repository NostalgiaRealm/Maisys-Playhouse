
/* ==== FUN_13004620 @ 13004620 ==== 
 * signature: undefined4 __cdecl FUN_13004620(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 13004620-13004659
 */

undefined4 __cdecl FUN_13004620(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_130038f0(param_2,(uint *)s_events_1300804c);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_13003dc0(param_4,param_3,param_1,(undefined4 *)((int)param_1 + 10),(undefined4 *)0x0
                        );
    return uVar2;
  }
  return 0x10000;
}


