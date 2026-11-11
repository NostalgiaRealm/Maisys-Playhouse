
/* ==== FUN_004aea95 @ 004aea95 ==== 
 * signature: undefined4 __stdcall FUN_004aea95(undefined4 param_1)
 * body: 004aea95-004aeae5
 */

undefined4 FUN_004aea95(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
  case 0xd:
    uVar1 = 5;
    break;
  case 2:
  case 0x17:
    uVar1 = 2;
    break;
  default:
    uVar1 = 1;
    break;
  case 5:
  case 0x16:
    uVar1 = 10;
    break;
  case 9:
    uVar1 = 6;
    break;
  case 0x18:
    uVar1 = 4;
    break;
  case 0x1c:
    uVar1 = 0xd;
    break;
  case 0x24:
    uVar1 = 0xb;
  }
  return uVar1;
}


