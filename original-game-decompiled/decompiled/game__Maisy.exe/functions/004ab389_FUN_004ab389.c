
/* ==== FUN_004ab389 @ 004ab389 ==== 
 * signature: undefined4 __stdcall FUN_004ab389(void)
 * body: 004ab389-004ab3a6
 */

undefined4 FUN_004ab389(void)

{
  CException *this;
  int unaff_EBP;
  
  this = *(CException **)(unaff_EBP + -0x20);
  (**(code **)(*(int *)this + 0x18))(0x30,0xf108);
  CException::Delete(this);
  return 0x4ab364;
}


