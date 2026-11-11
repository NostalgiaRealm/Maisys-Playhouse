
/* ==== __break @ 00451f5c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f5c-00451f5c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


