
/* ==== __break @ 00493baf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493baf-00493baf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


