
/* ==== __break @ 00451f72 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f72-00451f72
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


