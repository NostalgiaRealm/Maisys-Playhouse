
/* ==== FUN_00485e50 @ 00485e50 ==== 
 * signature: undefined4 __thiscall FUN_00485e50(void * this, undefined2 * param_1, int * param_2, int param_3)
 * body: 00485e50-00485e9f
 */

undefined4 __thiscall FUN_00485e50(void *this,undefined2 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 0x65:
  case 0x66:
  case 0x6d:
  case 0x6f:
  case 0x73:
  case 0x76:
    FUN_00486d60(this,param_3 + 2,8);
    return 0;
  default:
    uVar1 = FUN_00485410(this,param_1,param_2,0);
    return uVar1;
  }
}


