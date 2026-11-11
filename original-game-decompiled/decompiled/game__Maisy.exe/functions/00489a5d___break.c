
/* ==== __break @ 00489a5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489a5d-00489a5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


