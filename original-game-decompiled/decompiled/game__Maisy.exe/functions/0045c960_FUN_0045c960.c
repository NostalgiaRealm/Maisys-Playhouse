
/* ==== FUN_0045c960 @ 0045c960 ==== 
 * signature: undefined2 __fastcall FUN_0045c960(int param_1)
 * body: 0045c960-0045c970
 */

undefined2 __fastcall FUN_0045c960(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x46) + -0x75db;
  return CONCAT11((char)((ushort)sVar1 >> 8),'\x01' - (sVar1 == 0));
}


