
/* ==== __break @ 00441aea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441aea-00441aea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


