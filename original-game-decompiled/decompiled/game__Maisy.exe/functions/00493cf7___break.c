
/* ==== __break @ 00493cf7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493cf7-00493cf7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


